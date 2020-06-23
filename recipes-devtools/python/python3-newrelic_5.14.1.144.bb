HOMEPAGE = "http://www.newrelic.com"
SUMMARY = "New Relic Python Agent"
DESCRIPTION = "\
  Python agent for the New Relic web application performance monitoring \
  service. Check the release notes for what has changed in this version. \
  "
SECTION = "devel/python"
LICENSE = "BSD-3-Clause & MIT & Python-2.0 & BSD-2-Clause & NewRelic"
LIC_FILES_CHKSUM = "file://newrelic/LICENSE;md5=b4840908dbb9e62b3d8891e77187b34f"

SRC_URI[md5sum] = "53115aea6cbdf0e2721279c230230600"
SRC_URI[sha256sum] = "340ebcdb0dd08bfb597c71598d6d8f746a93f7e4921f10b3616c9142c608a14d"

inherit pypi setuptools3

FILES_${PN}-dbg += "\
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/*/.debug \
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/packages/*/.debug/ \
  "
