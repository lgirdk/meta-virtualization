HOMEPAGE = "https://pypi.python.org/pypi/Flask-Cors/"
SUMMARY = "A Flask extension adding a decorator for CORS support"
DESCRIPTION = "\
  A Flask extension for handling Cross Origin Resource Sharing (CORS), making cross-origin AJAX possible \
  "
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=118fecaa576ab51c1520f95e98db61ce"

DEPENDS += "python3-six python3-flask"

SRCNAME = "Flask-Cors"

SRC_URI = "https://pypi.python.org/packages/source/F/Flask-Cors/${SRCNAME}-${PV}.tar.gz"

SRC_URI[md5sum] = "551cc4c0305a171d28caa2b3bc838867"
SRC_URI[sha256sum] = "72170423eb4612f0847318afff8c247b38bd516b7737adfc10d1c2cdbb382d16"

S = "${WORKDIR}/${SRCNAME}-${PV}"

inherit setuptools3
