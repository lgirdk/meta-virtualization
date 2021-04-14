DESCRIPTION = "Python documentation generator"
HOMEPAGE = "http://sphinx-doc.org/"
SECTION = "devel/python"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://LICENSE;md5=82cc7d23060a75a07b820eaaf75abecf"

PYPI_PACKAGE = "Sphinx"

SRC_URI[sha256sum] = "19010b7b9fa0dc7756a6e105b2aacd3a80f798af3c25c273be64d7beeb482cb1"

inherit setuptools3 pypi
