inherit python-dir

# Enable the Python tool support
EXTRA_OECONF += "--with-python=yes --with-python-inc-dir=-I${STAGING_INCDIR}/python${PYTHON_BASEVERSION}"

SRC_URI += " file://python_incdir.patch"

DEPENDS  += "python python-native"
RDEPENDS_${PN}-python += "python"
PACKAGECONFIG_${PN}-python[xen] = ",,,xen-python"

PACKAGES += "${PN}-python-dbg ${PN}-python"
FILES_${PN}-python-dbg += "${libdir}/${PYTHON_DIR}/site-packages/.debug/"
FILES_${PN}-python += "${libdir}/${PYTHON_DIR}/site-packages"
