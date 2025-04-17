DESCRIPTION = "WSGI request and response object"
HOMEPAGE = "http://webob.org/"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://docs/license.txt;md5=8ed3584bcc78c16da363747ccabc5af5"

PYPI_PACKAGE = "webob"

SRC_URI[sha256sum] = "ad6078e2edb6766d1334ec3dee072ac6a7f95b1e32ce10def8ff7f0f02d56589"

inherit setuptools3 pypi

RDEPENDS:${PN} += " \
	python3-sphinx \
	"

