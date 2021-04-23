# FIXME: the LIC_FILES_CHKSUM values have been updated by 'devtool upgrade'.
# The following is the difference between the old and the new license text.
# Please update the LICENSE value if needed, and summarize the changes in
# the commit message via 'License-Update:' tag.
# (example: 'License-Update: copyright years updated.')
#
# The changes:
#
# --- COPYING
# +++ COPYING
# @@ -7,6 +7,11 @@
#  Copyright: (c) 2004-2010 by Sage Weil <sage@newdream.net>
#  License: LGPL-2.1 or LGPL-3 (see COPYING-LGPL2.1 and COPYING-LGPL3)
#  
# +Files: cmake/modules/FindPython*
# +Copyright:
# +    Copyright 2000-2020 Kitware, Inc. and Contributors
# +License: BSD 3-clause
# +
#  Files: cmake/modules/FindLTTngUST.cmake
#  Copyright:
#      Copyright 2016 Kitware, Inc.
# @@ -31,6 +36,10 @@
#  Files: src/include/ceph_hash.cc
#  Copyright: None
#  License: Public domain
# +
# +Files: src/include/rados.h, except ceph_stable_mod(), which is public domain
# +Copyright: the authors
# +License: LGPL-2.1 or LGPL-3 (see COPYING-LGPL2.1 and COPYING-LGPL3)
#  
#  Files: src/common/bloom_filter.hpp
#  Copyright: Copyright (C) 2000 Arash Partow <arash@partow.net>
# @@ -191,4 +200,17 @@
#  
#  Files: src/include/function2.hpp
#  Copyright: 2015-2018, Denis Blank
# -License: Boost Software License, Version 1.0+License: Boost Software License, Version 1.0
# +
# +Files: src/include/expected.hpp
# +Copyright: 2017, Simon Brand
# +License: CC0
# +
# +Files: src/include/uses_allocator.h
# +Copyright: 2016, Pablo Halpern <phalpern@halpernwightsoftware.com>
# +License: Boost Software License, Version 1.0
# +
# +Files: src/common/async/bind_allocator.h
# +Copyright: 2020 Red Hat <contact@redhat.com>
# +           2003-2019 Christopher M. Kohlhoff <chris@kohlhoff.com>
# +License: Boost Software License, Version 1.0
# 
#

SUMMARY = "User space components of the Ceph file system"
LICENSE = "LGPLv2.1 & GPLv2 & Apache-2.0 & MIT"
LIC_FILES_CHKSUM = "file://COPYING-LGPL2.1;md5=fbc093901857fcd118f065f900982c24 \
                    file://COPYING-GPL2;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
                    file://COPYING;md5=d140fb1fedb53047f0d0830883e7af9f \
                    "
#inherit cmake setuptools3 systemd
inherit cmake distutils3-base systemd

# Disable python pybind support for ceph temporary, when corss compiling pybind,
# pybind mix cmake and python setup environment, would case a lot of errors.

SRC_URI[sha256sum] = "30ff943287361b4c3f0a9bf8bcd4399751b91434eec7d602ce6e93c42c741be3"
SRC_URI = "http://download.ceph.com/tarballs/ceph-${PV}.tar.gz \
           file://0001-ceph-fix-build-errors-for-cross-compile.patch \
           file://0001-fix-host-library-paths-were-used.patch \
           file://ceph.conf \
           file://0001-libcephsqlite-Add-library-soversion-properties.patch \
           "

SRC_URI[sha1sum] = "f8cc85e4cc519d7e469a0c3c8327bd1675f0b287"
SRC_URI[sha384sum] = "29a75a733e5ae8039a5ad603558a9707e36b8c337419039ee97351cdbad57875fa57a365fcde29124cee72734608e245"
SRC_URI[sha512sum] = "aeb9a91c33221c64ea24603dc88cab346bf0abdf0d41ff85c2e1cf134130737ec1fab1246be0a2fa3af8a655ae1dabb69688855f229f54438e60cb8098175b8e"

DEPENDS = "boost bzip2 curl expat gperf-native \
           keyutils libaio libibverbs lz4 \
           nspr nss \
           oath openldap openssl \
           python3 python3-cython-native rabbitmq-c rocksdb snappy udev \
           valgrind xfsprogs zlib \
           lua cryptsetup \
"
SYSTEMD_SERVICE_${PN} = " \
        ceph-radosgw@.service \
        ceph-radosgw.target \
        ceph-mon@.service \
        ceph-mon.target \
        ceph-mds@.service \
        ceph-mds.target \
        ceph-osd@.service \
        ceph-osd.target \
        ceph.target \
        ceph-rbd-mirror@.service \
        ceph-rbd-mirror.target \
        ceph-volume@.service \
        ceph-mgr@.service \
        ceph-mgr.target \
        ceph-crash.service \
        rbdmap.service \
        ceph-immutable-object-cache@.service \
        ceph-immutable-object-cache.target \
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
                 -DWITH_RDMA=OFF \
                 -DWITH_RADOSGW_AMQP_ENDPOINT=OFF \
                 -DPYTHON_INSTALL_DIR=${PYTHON_SITEPACKAGES_DIR} -DPYTHON_DESIRED=3 \
                 -DPython3_EXECUTABLE=${PYTHON} \
                 -DWITH_RADOSGW_KAFKA_ENDPOINT=OFF \
                 -DWITH_REENTRANT_STRSIGNAL=ON \
"

export STAGING_DIR_HOST

do_configure_prepend () {
	echo "set( CMAKE_SYSROOT \"${RECIPE_SYSROOT}\" )" >> ${WORKDIR}/toolchain.cmake
	echo "set( CMAKE_DESTDIR \"${D}\" )" >> ${WORKDIR}/toolchain.cmake
	echo "set( PYTHON_SITEPACKAGES_DIR \"${PYTHON_SITEPACKAGES_DIR}\" )" >> ${WORKDIR}/toolchain.cmake
}

do_install_append () {
	sed -i -e 's:^#!/usr/bin/python$:&3:' \
		-e 's:${WORKDIR}.*python3:${bindir}/python3:' \
		${D}${bindir}/ceph ${D}${bindir}/ceph-crash \
		${D}${bindir}/ceph-volume ${D}${bindir}/ceph-volume-systemd
	find ${D} -name SOURCES.txt | xargs sed -i -e 's:${WORKDIR}::'
	install -d ${D}${sysconfdir}/ceph
	install -m 644 ${WORKDIR}/ceph.conf ${D}${sysconfdir}/ceph/
	install -d ${D}${systemd_unitdir}
	mv ${D}${libexecdir}/systemd/system ${D}${systemd_unitdir}
	mv ${D}${libexecdir}/ceph/ceph-osd-prestart.sh ${D}${libdir}/ceph
	mv ${D}${libexecdir}/ceph/ceph_common.sh ${D}${libdir}/ceph
	# WITH_FUSE is set to OFF, remove ceph-fuse related units
	rm ${D}${systemd_unitdir}/system/ceph-fuse.target ${D}${systemd_unitdir}/system/ceph-fuse@.service
}

do_install_append_class-target () {
	if ${@bb.utils.contains('DISTRO_FEATURES', 'systemd', 'true', 'false', d)}; then
		install -d ${D}${sysconfdir}/tmpfiles.d
		echo "d /var/lib/ceph/crash/posted 0755 root root - -" > ${D}${sysconfdir}/tmpfiles.d/ceph-placeholder.conf
	fi

	if ${@bb.utils.contains('DISTRO_FEATURES', 'sysvinit', 'true', 'false', d)}; then
		install -d ${D}${sysconfdir}/default/volatiles
		echo "d root root 0755 /var/lib/ceph/crash/posted none" > ${D}${sysconfdir}/default/volatiles/99_ceph-placeholder
	fi
}

pkg_postinst_${PN}() {
	if [ -z "$D" ] && [ -e ${sysconfdir}/init.d/populate-volatile.sh ] ; then
		${sysconfdir}/init.d/populate-volatile.sh update
	fi
}

FILES_${PN} += "\
		${libdir}/rados-classes/*.so.* \
		${libdir}/ceph/compressor/*.so \
		${libdir}/rados-classes/*.so \
	 	${libdir}/ceph/*.so \
"

FILES_${PN} += " \
    /etc/tmpfiles.d/ceph-placeholder.conf \
    /etc/default/volatiles/99_ceph-placeholder \
"

FILES_${PN}-python = "\
                ${PYTHON_SITEPACKAGES_DIR}/* \
"
RDEPENDS_${PN} += "\
		python3-core \
		python3-misc \
		python3-modules \
		python3-prettytable \
		${PN}-python \
                gawk \
"
COMPATIBLE_HOST = "(x86_64).*"
PACKAGE_BEFORE_PN += "${PN}-python"
INSANE_SKIP_${PN}-python += "ldflags"
INSANE_SKIP_${PN} += "dev-so"
CCACHE_DISABLE = "1"

CVE_PRODUCT = "ceph ceph_storage ceph_storage_mon ceph_storage_osd"
