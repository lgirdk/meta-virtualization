SUMMARY = "A Python library for the Docker Engine API."
HOMEPAGE = "https://github.com/docker/docker-py"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34f3846f940453127309b920eeb89660"

SRC_URI[md5sum] = "e1e8dc73e3220fe9eec1faf80b0290de"
SRC_URI[sha256sum] = "6e06c5e70ba4fad73e35f00c55a895a448398f3ada7faae072e2bb01348bafc1"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-six \
	${PYTHON_PN}-docker-pycreds \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-websocket-client \
"
