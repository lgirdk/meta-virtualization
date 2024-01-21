SUMMARY = "A Python library for the Docker Engine API."
HOMEPAGE = "https://github.com/docker/docker-py"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34f3846f940453127309b920eeb89660"

SRC_URI[md5sum] = "b08eeccf6a5efd11c316c08207edfeef"
SRC_URI[sha256sum] = "323736fb92cd9418fc5e7133bc953e11a9da04f4483f828b527db553f1e7e5a3"

DEPENDS += "${PYTHON_PN}-pip-native"
DEPENDS += "${PYTHON_PN}-setuptools-scm-native"

RDEPENDS:${PN} += " \
        ${PYTHON_PN}-misc \
        ${PYTHON_PN}-six \
        ${PYTHON_PN}-docker-pycreds \
        ${PYTHON_PN}-requests \
        ${PYTHON_PN}-websocket-client \
	${PYTHON_PN}-packaging \
"
inherit pypi python_setuptools_build_meta
