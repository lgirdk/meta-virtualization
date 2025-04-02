SUMMARY = "User space components of the Ceph file system"
LICENSE = "LGPL-2.1-only & GPL-2.0-only & Apache-2.0 & MIT"
LIC_FILES_CHKSUM = "file://COPYING-LGPL2.1;md5=fbc093901857fcd118f065f900982c24 \
                    file://COPYING-GPL2;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
                    file://COPYING;md5=bf502a28c9b8d6430c8952a583a2c896 \
"
inherit cmake pkgconfig python3native python3-dir systemd useradd
# Disable python pybind support for ceph temporary, when corss compiling pybind,
# pybind mix cmake and python setup environment, would case a lot of errors.

SRC_URI = "gitsm://github.com/ceph/ceph.git;protocol=https;branch=main \
           file://0001-fix-host-library-paths-were-used.patch \
           file://ceph.conf \
           file://0001-delete-install-layout-deb.patch \
           file://0001-cephadm-build.py-avoid-using-python3-from-sysroot-wh.patch \
           file://0001-cepth-node-proxy-specify-entrypoint-executable.patch \
           file://0001-rados-setup.py-allow-incompatible-pointer-types.patch \
           file://0001-rgw-setup.py-allow-incompatible-pointer-types.patch \
	   "

SRCREV = "a53e858fd7cc6fd8c04f37d503ce9ed7080f2da6"
PV = "20.0.0+git"

S = "${WORKDIR}/git"

DEPENDS = "boost bzip2 curl cryptsetup expat gperf-native \
           keyutils libaio libibverbs lua lz4 \
           nspr nss ninja-native \
           oath openldap openssl \
           python3 python3-native python3-cython-native python3-pyyaml-native \
	   rabbitmq-c snappy thrift udev \
           valgrind xfsprogs zlib libgcc zstd re2 \
           lmdb	autoconf-native automake-native \
"


OECMAKE_C_COMPILER = "${@oecmake_map_compiler('CC', d)[0]} --sysroot=${RECIPE_SYSROOT}"
OECMAKE_CXX_COMPILER = "${@oecmake_map_compiler('CXX', d)[0]} --sysroot=${RECIPE_SYSROOT}"

USERADD_PACKAGES = "${PN}"
USERADD_PARAM:${PN} = "--system --user-group --home-dir /var/lib/ceph --shell /sbin/nologin ceph"

SYSTEMD_SERVICE:${PN} = " \
        ceph-radosgw@.service \
        ceph-radosgw.target \
        ceph-mon@.service \
        ceph-mon.target \
        ceph-mds@.service \
        ceph-mds.target \
        ceph-osd@.service \
        ceph-osd.target \
        cephfs-mirror@.service \
        cephfs-mirror.target \
        ceph.target \
        ceph-rbd-mirror@.service \
        ceph-rbd-mirror.target \
        ceph-volume@.service \
        ceph-mgr@.service \
        ceph-mgr.target \
        ceph-crash.service \
        ceph-exporter.service \
        rbdmap.service \
        ceph-immutable-object-cache@.service \
        ceph-immutable-object-cache.target \
"

EXTRA_OECMAKE += "-DWITH_MANPAGE=OFF \
                 -DWITH_JAEGER=OFF \
                 -DWITH_SYSTEM_ZSTD=ON \
                 -DWITH_FUSE=OFF \
                 -DWITH_SPDK=OFF \
                 -DWITH_LEVELDB=OFF \
                 -DWITH_LTTNG=OFF \
                 -DWITH_BABELTRACE=OFF \
                 -DWITH_TESTS=OFF \
                 -DWITH_RADOSGW_SELECT_PARQUET=OFF \
                 -DWITH_RADOSGW_ARROW_FLIGHT=OFF \
                 -DWITH_MGR=OFF \
                 -DWITH_MGR_DASHBOARD_FRONTEND=OFF \
                 -DWITH_SYSTEM_BOOST=ON \
                 -DWITH_RDMA=OFF \
		 -DWITH_RBD=OFF \
		 -DWITH_KRBD=OFF \
                 -DWITH_RADOSGW_AMQP_ENDPOINT=OFF \
                 -DWITH_RADOSGW_KAFKA_ENDPOINT=OFF \
                 -DWITH_REENTRANT_STRSIGNAL=ON \
		 -DWITH_PYTHON3=3.13 \
		 -DPYTHON_DESIRED=3 \
		 -DCMAKE_TOOLCHAIN_FILE:FILEPATH=${WORKDIR}/toolchain.cmake \
		 -DCEPHADM_BUNDLED_DEPENDENCIES=none \
		 "

# -DWITH_SYSTEM_ROCKSDB=ON

do_configure:prepend () {
	echo "set( CMAKE_SYSROOT \"${RECIPE_SYSROOT}\" )" >> ${WORKDIR}/toolchain.cmake
	echo "set( CMAKE_DESTDIR \"${D}\" )" >> ${WORKDIR}/toolchain.cmake
	echo "set( PYTHON_SITEPACKAGES_DIR \"${PYTHON_SITEPACKAGES_DIR}\" )" >> ${WORKDIR}/toolchain.cmake
	# echo "set( CMAKE_C_COMPILER_WORKS TRUE)" >> ${WORKDIR}/toolchain.cmake
	# echo "set( CMAKE_CXX_COMPILER_FORCED TRUE)" >> ${WORKDIR}/toolchain.cmake
	echo "set( CMAKE_C_COMPILER_FORCED TRUE )" >> ${WORKDIR}/toolchain.cmake

	echo "set( WITH_QATDRV OFF )" >> ${WORKDIR}/toolchain.cmake
	echo "set( WITH_QATZIP OFF )" >> ${WORKDIR}/toolchain.cmake
	echo "set( WITH_LIBURING OFF )" >> ${WORKDIR}/toolchain.cmake
	echo "set( WITH_QATLIB OFF )" >> ${WORKDIR}/toolchain.cmake
	# echo "set( WITH_SYSTEM_ROCKSDB TRUE )" >> ${WORKDIR}/toolchain.cmake
}

do_compile:prepend() {
	export BUILD_DOC=1
}

do_install:prepend() {
	export BUILD_DOC=1
}

do_install:append () {
	sed -i -e 's:^#!/usr/bin/python$:&3:' \
		-e 's:${WORKDIR}.*python3:${bindir}/python3:' \
		${D}${bindir}/ceph ${D}${bindir}/ceph-crash \
		${D}${bindir}/cephfs-top \
		${D}${sbindir}/ceph-volume ${D}${sbindir}/ceph-volume-systemd
	find ${D} -name SOURCES.txt | xargs sed -i -e 's:${WORKDIR}::'
	install -d ${D}${sysconfdir}/ceph
	install -m 644 ${UNPACKDIR}/ceph.conf ${D}${sysconfdir}/ceph/
	install -d ${D}${systemd_unitdir}
	mv ${D}${libexecdir}/ceph/ceph-osd-prestart.sh ${D}${libdir}/ceph
	mv ${D}${libexecdir}/ceph/ceph_common.sh ${D}${libdir}/ceph
	# WITH_FUSE is set to OFF, remove ceph-fuse related units
	rm ${D}${systemd_unitdir}/system/ceph-fuse.target ${D}${systemd_unitdir}/system/ceph-fuse@.service
}

do_install:append:class-target () {
	if ${@bb.utils.contains('DISTRO_FEATURES', 'systemd', 'true', 'false', d)}; then
		install -d ${D}${sysconfdir}/tmpfiles.d
		echo "d /var/lib/ceph/crash/posted 0755 root root - -" > ${D}${sysconfdir}/tmpfiles.d/ceph-placeholder.conf
	fi

	if ${@bb.utils.contains('DISTRO_FEATURES', 'sysvinit', 'true', 'false', d)}; then
		install -d ${D}${sysconfdir}/default/volatiles
		echo "d root root 0755 /var/lib/ceph/crash/posted none" > ${D}${sysconfdir}/default/volatiles/99_ceph-placeholder
	fi
}

pkg_postinst:${PN}() {
	if [ -z "$D" ] && [ -e ${sysconfdir}/init.d/populate-volatile.sh ] ; then
		${sysconfdir}/init.d/populate-volatile.sh update
	fi
}

FILES:${PN} += "\
		${libdir}/rados-classes/*.so.* \
		${libdir}/ceph/compressor/*.so \
		${libdir}/rados-classes/*.so \
		${libdir}/ceph/*.so \
		${libdir}/*.so \
		${libdir}/libcephsqlite.so \
"

FILES:${PN} += " \
    /etc/tmpfiles.d/ceph-placeholder.conf \
    /etc/default/volatiles/99_ceph-placeholder \
"

FILES:${PN}-dev = " \
    ${includedir} \
    ${libdir}/libcephfs.so \
    ${libdir}/librados*.so \
    ${libdir}/librbd.so \
    ${libdir}/librgw.so \
    ${libdir}/pkgconfig/cephfs.pc \
"

FILES:${PN}-python = "\
                ${PYTHON_SITEPACKAGES_DIR}/* \
"
RDEPENDS:${PN} += "\
		python3-core \
		python3-misc \
		python3-modules \
		python3-prettytable \
		${PN}-python \
		gawk \
		bash \
"
COMPATIBLE_HOST = "(x86_64).*"
PACKAGES += " \
	${PN}-python \
"
INSANE_SKIP:${PN}-python += "ldflags buildpaths"
INSANE_SKIP:${PN} += "dev-so"
INSANE_SKIP:${PN}-dbg += "buildpaths"
CCACHE_DISABLE = "1"

CVE_PRODUCT = "ceph ceph_storage ceph_storage_mon ceph_storage_osd"
