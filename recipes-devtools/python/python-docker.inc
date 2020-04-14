SUMMARY = "A Python library for the Docker Engine API."
HOMEPAGE = "https://github.com/docker/docker-py"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34f3846f940453127309b920eeb89660"

SRC_URI[md5sum] = "19f803f6a7113301daa5d82a2d1d0c30"
SRC_URI[sha256sum] = "ddae66620ab5f4bce769f64bcd7934f880c8abe6aa50986298db56735d0f722e"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-six \
	${PYTHON_PN}-docker-pycreds \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-websocket-client \
"
