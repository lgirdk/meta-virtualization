DESCRIPTION = "WSGI request and response object"
HOMEPAGE = "http://webob.org/"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://docs/license.txt;md5=8ed3584bcc78c16da363747ccabc5af5"

PYPI_PACKAGE = "WebOb"

SRC_URI[md5sum] = "d04756e6683fedddba52eafbe9adf404"
SRC_URI[sha256sum] = "1fe722f2ab857685fc96edec567dc40b1875b21219b3b348e58cd8c4d5ea7df3"

inherit setuptools pypi

RDEPENDS_${PN} += " \
	python-sphinx \
	python-nose \
	"

