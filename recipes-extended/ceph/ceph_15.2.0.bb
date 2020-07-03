SUMMARY = "User space components of the Ceph file system"
LICENSE = "LGPLv2.1 & GPLv2 & Apache-2.0 & MIT"
LIC_FILES_CHKSUM = "file://COPYING-LGPL2.1;md5=fbc093901857fcd118f065f900982c24 \
                    file://COPYING-GPL2;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
                    file://COPYING;md5=4eb012c221c5fd4b760029a2981a6754 \
"
inherit cmake python3native python3-dir systemd
# Disable python pybind support for ceph temporary, when corss compiling pybind,
# pybind mix cmake and python setup environment, would case a lot of errors.

SRC_URI = "http://download.ceph.com/tarballs/ceph-${PV}.tar.gz \
           file://0001-ceph-fix-build-errors-for-cross-compile.patch \
           file://0001-fix-host-library-paths-were-used.patch \
           file://ceph.conf \
           file://0001-msg-async-ProtocolV2-avoid-AES-GCM-nonce-reuse-vulne.patch \
           file://0001-msg-async-crypto_onwire-fix-endianness-of-nonce_t.patch \
           file://0001-rgw-reject-unauthenticated-response-header-actions.patch \
           file://0001-rgw-EPERM-to-ERR_INVALID_REQUEST.patch \
           file://0001-rgw-reject-control-characters-in-response-header-act.patch \
           file://0001-mgr-require-all-caps-for-pre-octopus-tell-commands.patch \ 
           file://0002-mon-enforce-caps-for-pre-octopus-client-tell-command.patch \
           file://0003-PendingReleaseNotes-note-about-security-fix.patch \
"

SRC_URI[md5sum] = "1f9af648b4c6d19975aab2583ab99710"
SRC_URI[sha256sum] = "4292c473d1714a6602c525d7582e4e03ec608f0a1cbc0dd338207e5c7068e0d3"
SRC_URI[sha1sum] = "7158806ece1483fcccdf1172c20cc34d9401c543"
SRC_URI[sha384sum] = "20e996dbf30d1e33a6d6aae36960190125ce263d306415bcec5d2b3032b8b8f730deeba3ca318576573127d08909404a"
SRC_URI[sha512sum] = "07a3ff2ccf1a3abac652ff8c5f1611e7c628fcedcb280adc6cd49792b46fa50c7c29437dc57c2c4a6af708a6833abf8c1a386ef2142d30bd5e1f214ba7aec4f2"

DEPENDS = "boost bzip2 curl expat gperf-native \
           keyutils libaio libibverbs lz4 \
           nspr nss \
           oath openldap openssl \
           python3 python3-cython-native rabbitmq-c rocksdb snappy udev \
           valgrind xfsprogs zlib \
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
"
COMPATIBLE_HOST = "(x86_64).*"
PACKAGES += " \
	${PN}-python \
"
INSANE_SKIP_${PN}-python += "ldflags"
INSANE_SKIP_${PN} += "dev-so"
CCACHE_DISABLE = "1"

CVE_PRODUCT = "ceph ceph_storage ceph_storage_mon ceph_storage_osd"
