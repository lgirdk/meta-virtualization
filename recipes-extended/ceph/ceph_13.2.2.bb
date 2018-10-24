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
SYSTEMD_SERVICE_${PN} = "ceph-radosgw@.service \
        ceph-mon@.service \
        ceph-mds@.service \
        ceph-disk@.service \
        ceph-osd@.service \
        ceph.target \
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
	install -d ${D}${sysconfdir}/ceph
	install -m 644 ${WORKDIR}/ceph.conf ${D}${sysconfdir}/ceph/
	install -d ${D}${systemd_unitdir}/system
	mv ${D}${libexecdir}/systemd/system/ceph-radosgw@.service ${D}${systemd_unitdir}/system/ceph-radosgw@.service
	mv ${D}${libexecdir}/systemd/system/ceph-mon@.service ${D}${systemd_unitdir}/system/ceph-mon@.service
	mv ${D}${libexecdir}/systemd/system/ceph-mds@.service ${D}${systemd_unitdir}/system/ceph-mds@.service
	mv ${D}${libexecdir}/systemd/system/ceph-disk@.service ${D}${systemd_unitdir}/system/ceph-disk@.service
	mv ${D}${libexecdir}/systemd/system/ceph-osd@.service ${D}${systemd_unitdir}/system/ceph-osd@.service
	mv ${D}${libexecdir}/systemd/system/ceph.target ${D}${systemd_unitdir}/system/ceph.target
}

FILES_${PN} += "\
                ${libdir}/rados-classes/*.so.* \
"
FILES_${PN}-dev += "\
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
