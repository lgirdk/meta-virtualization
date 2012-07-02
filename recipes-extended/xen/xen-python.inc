XEN_DISABLE_XEND=""

DEPENDS += "python python-native udev"
RDEPENDS_${PN}-python = "xen python python-lang python-re python-fcntl python-shell python-io python-threading python-stringold python-math python-crypt python-logging python-pickle python-xmlrpc python-netclient python-mime python-unixadmin python-compression python-mmap python-textutils python-resource python-terminal python-pprint python-curses"

INITSCRIPT_PACKAGES += "${PN}-python"
INITSCRIPT_NAME_${PN}-python = "xend"
INITSCRIPT_PARAMS_${PN}-python = "defaults 64"

inherit python-dir

PACKAGES =+ "${PN}-python-dbg ${PN}-python"
FILES_${PN}-python = "\
	${sysconfdir}/init.d/xend \
	${sysconfdir}/xen/xend-config.sxp \
	${sysconfdir}/xen/xend-pci-permissive.sxp \
	${sysconfdir}/xen/xend-pci-quirks.sxp \
	${sysconfdir}/xen/xm-config.xml \
	${bindir}/xentrace_format \
	${bindir}/xencons \
	${bindir}/pygrub \
	${bindir}/remus \
	${sbindir}/xen-bugtool \
	${sbindir}/xend \
	${sbindir}/xenmon.py \
	${sbindir}/xm \
	${sbindir}/xen-python-path \
	${libdir}/${PYTHON_DIR} \
	/var/run/xend"

FILES_${PN}-python-dbg = "\
        ${libdir}/${PYTHON_DIR}/site-packages/.debug \
        ${libdir}/${PYTHON_DIR}/site-packages/xen/lowlevel/.debug"

#EXTRA_OECONF="ac_cv_lib_python_PyArg_ParseTuple=yes"
autotools_do_configure() {
        export PYTHON=${STAGING_DIR_NATIVE}/usr/bin/python
        export PREPEND_LIB="${STAGING_LIBDIR_NATIVE} ${STAGING_LIBDIR_NATIVE}/${PYTHON_DIR}"
        export PREPEND_INCLUDES="${STAGING_INCDIR_NATIVE} ${STAGING_INCDIR_NATIVE}/${PYTHON_DIR}"

        export STAGING_INCDIR=${STAGING_INCDIR}
        export STAGING_LIBDIR=${STAGING_LIBDIR}
        export STAGING_DIR=${STAGING_DIR}
        export BUILD_SYS=${BUILD_SYS}
        export HOST_SYS=${HOST_SYS}

        oe_runconf
}

