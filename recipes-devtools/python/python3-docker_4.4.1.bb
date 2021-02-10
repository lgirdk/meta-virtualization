SUMMARY = "A Python library for the Docker Engine API."
HOMEPAGE = "https://github.com/docker/docker-py"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34f3846f940453127309b920eeb89660"

SRC_URI[md5sum] = "0a4aa9efd059a65d58fefa37e5ad84c3"
SRC_URI[sha256sum] = "0604a74719d5d2de438753934b755bfcda6f62f49b8e4b30969a4b0a2a8a1220"

DEPENDS += "${PYTHON_PN}-pip-native"

RDEPENDS_${PN} += " \
        ${PYTHON_PN}-misc \
        ${PYTHON_PN}-six \
        ${PYTHON_PN}-docker-pycreds \
        ${PYTHON_PN}-requests \
        ${PYTHON_PN}-websocket-client \
"

inherit pypi setuptools3
