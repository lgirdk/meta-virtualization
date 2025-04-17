HOMEPAGE = "http://www.newrelic.com"
SUMMARY = "New Relic Python Agent"
DESCRIPTION = "\
  Python agent for the New Relic web application performance monitoring \
  service. Check the release notes for what has changed in this version. \
  "
SECTION = "devel/python"
LICENSE = "BSD-3-Clause & MIT & Python-2.0 & BSD-2-Clause & NewRelic"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2b42edef8fa55315f34f2370b4715ca9"

SRC_URI[sha256sum] = "0741de2138b41a1ae1cfad397878774de4131196d66f1443a23b055d9f47e706"

inherit pypi setuptools3

DEPENDS += "python3-setuptools-scm-native"

FILES:${PN}-dbg += "\
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/*/.debug \
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/packages/*/.debug/ \
  "
