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
LIC_FILES_CHKSUM = "file://PKG-INFO;md5=3bc101ebc0815bd849021892cd333dd4"

SRC_URI[md5sum] = "93443091b052130cfe1daf7595249f9f"
SRC_URI[sha256sum] = "8878437aa44ec485cecb255742035b3b98a6c7e7d167a943b5fbe597b2f8f7f9"

inherit pypi setuptools3

DEPENDS += "python3-webob python3-flask python3-blinker"

