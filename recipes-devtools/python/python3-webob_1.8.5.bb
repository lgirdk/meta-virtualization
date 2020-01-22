DESCRIPTION = "WSGI request and response object"
HOMEPAGE = "http://webob.org/"
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://docs/license.txt;md5=8ed3584bcc78c16da363747ccabc5af5"

PYPI_PACKAGE = "WebOb"

SRC_URI[md5sum] = "1761f416e8cf53f6fb674149cc223bd1"
SRC_URI[sha256sum] = "05aaab7975e0ee8af2026325d656e5ce14a71f1883c52276181821d6d5bf7086"

inherit setuptools3 pypi

RDEPENDS_${PN} += " \
	python3-sphinx \
	"

