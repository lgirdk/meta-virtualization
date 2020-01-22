HOMEPAGE = "http://www.newrelic.com"
SUMMARY = "New Relic Python Agent"
DESCRIPTION = "\
  Python agent for the New Relic web application performance monitoring \
  service. Check the release notes for what has changed in this version. \
  "
SECTION = "devel/python"
LICENSE = "BSD-3-Clause & MIT & Python-2.0 & BSD-2-Clause & NewRelic"
LIC_FILES_CHKSUM = "file://newrelic/LICENSE;md5=2c3b4d48a631fe909df7a767726d4f6c"

SRCNAME = "newrelic"

SRC_URI = "https://pypi.python.org/packages/source/n/newrelic/${SRCNAME}-${PV}.tar.gz"

SRC_URI[md5sum] = "45099c6d88dcf474267226469caa845e"
SRC_URI[sha256sum] = "0e651f2ff48dd1fc538fc1297892cf726d1ad4fc0b2578aae6a47f10f16afb2c"

S = "${WORKDIR}/${SRCNAME}-${PV}"

inherit setuptools3

FILES_${PN}-dbg += "\
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/*/.debug \
  ${PYTHON_SITEPACKAGES_DIR}/newrelic-${PV}/newrelic/packages/*/.debug/ \
  "
