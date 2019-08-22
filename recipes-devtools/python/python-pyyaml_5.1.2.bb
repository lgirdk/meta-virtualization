HOMEPAGE = "http://www.pyyaml.org"
SUMMARY = "Python support for YAML"
DESCRIPTION = "\
  YAML is a data serialization format designed for human readability \
  and interaction with scripting languages.  PyYAML is a YAML parser \
  and emitter for Python. \
  .       \
  PyYAML features a complete YAML 1.1 parser, Unicode support, pickle \
  support, capable extension API, and sensible error messages.  PyYAML \
  supports standard YAML tags and provides Python-specific tags that \
  allow to represent an arbitrary Python object. \
  .       \
  PyYAML is applicable for a broad range of tasks from complex \
  configuration files to object serialization and persistance. \
  "
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a76b4c69bfcf82313bbdc0393b04438a"

SRCNAME = "PyYAML"
SRC_URI = "http://pyyaml.org/download/pyyaml/${SRCNAME}-${PV}.tar.gz"

SRC_URI[md5sum] = "20f87ab421b0271dbf371dc5c1cddb5c"
SRC_URI[sha256sum] = "01adf0b6c6f61bd11af6e10ca52b7d4057dd0be0343eb9283c878cf3af56aee4"

S = "${WORKDIR}/${SRCNAME}-${PV}"

DEFAULT_PREFERENCE = "-1"

inherit setuptools

DEPENDS += "libyaml python-cython-native"
