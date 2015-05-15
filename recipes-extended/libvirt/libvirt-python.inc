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
FILES_${PN}-python = "${bindir}/* ${libdir}/* ${libdir}/${PYTHON_DIR}/*"

SRC_URI += "http://libvirt.org/sources/python/libvirt-python-${PV}.tar.gz;name=libvirt_python"
SRC_URI += "file://libvirt_api_xml_path.patch;patchdir=../libvirt-python-${PV}"

SRC_URI[libvirt_python.md5sum] = "f13b566b54fe71ec0f26992aee11dd09"
SRC_URI[libvirt_python.sha256sum] = "9a6dfbd487d49f887a41aca4bfb1b4e043fd9fbdfc041252cae84023f5c387ba"

export LIBVIRT_API_PATH = "${S}/docs/libvirt-api.xml"
export LIBVIRT_CFLAGS = "-I${S}/include"
export LIBVIRT_LIBS = "-L${B}/src/.libs -lvirt -ldl"
export LDFLAGS="-L${B}/src/.libs"

LIBVIRT_INSTALL_ARGS = "--root=${D} \
    --prefix=${prefix} \
    --install-lib=${PYTHON_SITEPACKAGES_DIR} \
    --install-data=${datadir}"

python __anonymous () {
    pkgconfig = d.getVar('PACKAGECONFIG', True)
    if ('python') in pkgconfig.split():
        d.setVar('LIBVIRT_PYTHON_ENABLE', '1')
    else:
        d.setVar('LIBVIRT_PYTHON_ENABLE', '0')
}

do_compile_append() {
	if [ "${LIBVIRT_PYTHON_ENABLE}" = "1" ]; then
		cd ${WORKDIR}/libvirt-python-${PV} && \
		  ${STAGING_BINDIR_NATIVE}/python-native/python setup.py build
	fi
}

do_install_append() {
	if [ "${LIBVIRT_PYTHON_ENABLE}" = "1" ]; then
		cd ${WORKDIR}/${PN}-python-${PV} && \
		  ${STAGING_BINDIR_NATIVE}/python-native/python setup.py install \
                       --install-lib=${D}/${PYTHON_SITEPACKAGES_DIR} ${LIBVIRT_INSTALL_ARGS}
	fi
}
