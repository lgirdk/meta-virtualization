SUMMARY = "User space components of the Ceph file system"
LICENSE = "LGPLv2.1 & GPLv2 & Apache-2.0 & MIT"
LIC_FILES_CHKSUM = "file://COPYING-LGPL2.1;md5=fbc093901857fcd118f065f900982c24 \
                    file://COPYING-GPL2;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
                    file://COPYING;md5=92d301c8fccd296f2221a68a8dd53828 \
"
inherit cmake pythonnative python-dir systemd
# Disable python pybind support for ceph temporary, when corss compiling pybind,
# pybind mix cmake and python setup environment, would case a lot of errors.

SRC_URI = "http://download.ceph.com/tarballs/ceph-${PV}.tar.gz \
           file://0001-Correct-the-path-to-find-version.h-in-rocksdb.patch \
           file://0001-zstd-fix-error-for-cross-compile.patch \
           file://0001-ceph-add-pybind-support-in-OE.patch \
           file://0001-ceph-detect-init-correct-the-installation-for-OE.patch \
           file://ceph.conf \
"
SRC_URI[md5sum] = "ce118be451dcb6b89e9e0a45057827dd"
SRC_URI[sha256sum] = "f3a61db4c90e00c38a2dac7239b956ec367ef56f601e07335ed3011f931d8840"

DEPENDS = "boost bzip2 curl expat gperf-native \
           keyutils libaio libibverbs lz4 \
           nspr nss \
           oath openldap openssl \
           python python-cython-native rocksdb snappy udev \
           valgrind xfsprogs zlib \
"
SYSTEMD_SERVICE_${PN} = " \
	ceph-radosgw@.service \
	ceph-radosgw.target \
        ceph-mon@.service \
	ceph-mon.target \
        ceph-mds@.service \
	ceph-mds.target \
        ceph-disk@.service \
        ceph-osd@.service \
	ceph-osd.target \
        ceph.target \
	ceph-fuse@.service \
	ceph-fuse.target \
	ceph-rbd-mirror@.service \
	ceph-rbd-mirror.target \
	ceph-volume@.service \
	ceph-mgr@.service \
	ceph-mgr.target \
	rbdmap.service \
"
OECMAKE_GENERATOR = "Unix Makefiles"

EXTRA_OECMAKE = "-DWITH_MANPAGE=OFF \
                 -DWITH_FUSE=OFF \
                 -DWITH_SPDK=OFF \
                 -DWITH_LEVELDB=OFF \
                 -DWITH_LTTNG=OFF \
                 -DWITH_BABELTRACE=OFF \
                 -DWITH_TESTS=OFF \
                 -DWITH_MGR=OFF \
                 -DWITH_MGR_DASHBOARD_FRONTEND=OFF \
                 -DWITH_SYSTEM_BOOST=ON \
                 -DWITH_SYSTEM_ROCKSDB=ON \
"

do_configure_prepend () {
	echo "set( CMAKE_SYSROOT \"${RECIPE_SYSROOT}\" )" >> ${WORKDIR}/toolchain.cmake
	echo "set( CMAKE_DESTDIR \"${D}\" )" >> ${WORKDIR}/toolchain.cmake
	echo "set( PYTHON_SITEPACKAGES_DIR \"${PYTHON_SITEPACKAGES_DIR}\" )" >> ${WORKDIR}/toolchain.cmake
}

do_install_append () {
	sed -i -e 's:${WORKDIR}.*python2:${bindir}/python:' ${D}${bindir}/ceph
	sed -i -e 's:${WORKDIR}.*python2:${bindir}/python:' ${D}${bindir}/ceph-disk
	sed -i -e 's:${WORKDIR}.*python2:${bindir}/python:' ${D}${bindir}/ceph-detect-init
	find ${D} -name SOURCES.txt | xargs sed -i -e 's:${WORKDIR}::'
	install -d ${D}${sysconfdir}/ceph
	install -m 644 ${WORKDIR}/ceph.conf ${D}${sysconfdir}/ceph/
	install -d ${D}${systemd_unitdir}
	mv ${D}${libexecdir}/systemd/system ${D}${systemd_unitdir}
	mv ${D}${libexecdir}/ceph/ceph-osd-prestart.sh ${D}${libdir}/ceph
	mv ${D}${libexecdir}/ceph/ceph_common.sh ${D}${libdir}/ceph
}

FILES_${PN} += "\
		${libdir}/rados-classes/*.so.* \
		${libdir}/ceph/compressor/*.so \
		${libdir}/rados-classes/*.so \
		${libdir}/ceph/*.so \
"
FILES_${PN}-python = "\
                ${PYTHON_SITEPACKAGES_DIR}/* \
"
RDEPENDS_${PN} += "\
		python \
		python-misc \
		python-modules \
		python-prettytable \
		${PN}-python \
"
COMPATIBLE_HOST = "(x86_64).*"
PACKAGES += " \
	${PN}-python \
"
INSANE_SKIP_${PN}-python += "ldflags"
INSANE_SKIP_${PN} += "dev-so"
