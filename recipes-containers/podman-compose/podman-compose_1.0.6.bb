DESCRIPTION = "An implementation of docker-compose with podman backend"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b234ee4d69f5fce4486a80fdaf4a4263"

inherit setuptools3

SRC_URI = "git://github.com/containers/podman-compose.git;branch=stable;protocol=https"

SRCREV = "f6dbce36181c44d0d08b6f4ca166508542875ce1"

S = "${WORKDIR}/git"

DEPENDS += "${PYTHON_PN}-pyyaml-native"

RDEPENDS:${PN} += "\
    ${PYTHON_PN}-pyyaml \
    ${PYTHON_PN}-dotenv \
"
