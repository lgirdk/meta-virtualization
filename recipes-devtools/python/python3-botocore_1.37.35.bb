SUMMARY = "The low-level, core functionality of boto 3."
HOMEPAGE = "https://github.com/boto/botocore"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=2ee41112a44fe7014dce33e26468ba93"

SRC_URI[sha256sum] = "197a9bf8251c45b9d882c405ec0d0ab40c10e2d2a55ee66960185daec4beb6ec"

inherit pypi setuptools3

RDEPENDS:${PN} += "python3-jmespath python3-dateutil python3-logging"
