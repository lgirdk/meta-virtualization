DESCRIPTION = "An implementation of docker-compose with podman backend"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b234ee4d69f5fce4486a80fdaf4a4263"

inherit setuptools3

PV = "1.3.0+git"
SRC_URI = "git://github.com/containers/podman-compose.git;branch=main;protocol=https"

SRCREV = "60ac5e43b3a4063280390a63d1fbe244d72e24a4"

S = "${WORKDIR}/git"

DEPENDS += "python3-pyyaml-native"

RDEPENDS:${PN} += "\
    python3-asyncio \
    python3-dotenv \
    python3-json \
    python3-pyyaml \
    python3-unixadmin \
"
