inherit pythonnative python-dir

export STAGING_INCDIR
export STAGING_LIBDIR
export BUILD_SYS 
export HOST_SYS

RDEPENDS_${PN}-python += "python"
PACKAGECONFIG_${PN}-python[xen] = ",,,xen-python"

PACKAGES += "${PN}-python-staticdev ${PN}-python-dev ${PN}-python-dbg ${PN}-python"
FILES_${PN}-python-staticdev += "${PYTHON_SITEPACKAGES_DIR}/*.a"
FILES_${PN}-python-dev += "${PYTHON_SITEPACKAGES_DIR}/*.la"
FILES_${PN}-python-dbg += "${PYTHON_SITEPACKAGES_DIR}/.debug/"
FILES_${PN}-python += "${PYTHON_SITEPACKAGES_DIR}"

EXTRA_OECONF += "TARGET_PYTHON=${bindir}/python"
