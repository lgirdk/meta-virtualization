HOMEPAGE = "http://www.newrelic.com"
SUMMARY = "New Relic Python Agent"
DESCRIPTION = "\
  Python agent for the New Relic web application performance monitoring \
  service. Check the release notes for what has changed in this version. \
  "
SECTION = "devel/python"
LICENSE = "BSD-3-Clause & MIT & Python-2.0 & BSD-2-Clause & NewRelic"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2b42edef8fa55315f34f2370b4715ca9"

SRC_URI[md5sum] = "0acf701c37ceb590e2a12d358ced16d7"
SRC_URI[sha256sum] = "e96689fc75eb2b1591903ad9e74225f5e1da734afcd3151d318c53f6635b5dda"

inherit pypi setuptools3

DEPENDS += "python3-setuptools-scm-native"

SRC_URI += "file://0001-setup.py-tweak-setuptools_scm-version-dependency.patch"

FILES_${PN}-dbg += "\
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/*/.debug \
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/packages/*/.debug/ \
  "
