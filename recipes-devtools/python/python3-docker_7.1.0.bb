SUMMARY = "A Python library for the Docker Engine API."
HOMEPAGE = "https://github.com/docker/docker-py"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34f3846f940453127309b920eeb89660"

SRC_URI[md5sum] = "04e92a7b6dc8b88dde3c7cca6850b277"
SRC_URI[sha256sum] = "ad8c70e6e3f8926cb8a92619b832b4ea5299e2831c14284663184e200546fa6c"

DEPENDS += "python3-pip-native"
DEPENDS += "python3-setuptools-scm-native"
DEPENDS += "python3-hatch-vcs-native"

RDEPENDS:${PN} += " \
        python3-misc \
        python3-six \
        python3-docker-pycreds \
        python3-requests \
        python3-websocket-client \
	python3-packaging \
	python3-hatch-vcs \
"
inherit pypi python_hatchling
