HOMEPAGE = "https://bugsnag.com/"
SUMMARY = "Automatic error monitoring for django, flask, etc."
DESCRIPTION = "\
  The official Python notifier for `Bugsnag <https://bugsnag.com/>`_. \
  Provides support for automatically capturing and sending exceptions \
  in your Django and other Python apps to Bugsnag, to help you find \
  and solve your bugs as fast as possible. \
  "
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://PKG-INFO;md5=9577253c24027f0c6027a4fded2134fc"

SRCNAME = "bugsnag"

SRC_URI = "https://pypi.python.org/packages/source/b/bugsnag/${SRCNAME}-${PV}.tar.gz"

SRC_URI[md5sum] = "b97e16b068b5e7fdc3e3fa9f684e56cd"
SRC_URI[sha256sum] = "67b8c01719e92f193f8424595a94e3a527bc0f9fcb7f2bc47a20af87de81929d"

S = "${WORKDIR}/${SRCNAME}-${PV}"

inherit setuptools3

DEPENDS += "python3-webob python3-flask python3-blinker"

