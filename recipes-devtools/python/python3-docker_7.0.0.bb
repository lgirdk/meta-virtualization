SUMMARY = "A Python library for the Docker Engine API."
HOMEPAGE = "https://github.com/docker/docker-py"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34f3846f940453127309b920eeb89660"

SRC_URI[md5sum] = "b08eeccf6a5efd11c316c08207edfeef"
SRC_URI[sha256sum] = "323736fb92cd9418fc5e7133bc953e11a9da04f4483f828b527db553f1e7e5a3"

DEPENDS += "python3-pip-native"
DEPENDS += "python3-setuptools-scm-native"

RDEPENDS:${PN} += " \
        python3-misc \
        python3-six \
        python3-docker-pycreds \
        python3-requests \
        python3-websocket-client \
	python3-packaging \
"
inherit pypi python_setuptools_build_meta
