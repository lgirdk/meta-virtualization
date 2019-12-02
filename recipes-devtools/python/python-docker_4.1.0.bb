inherit pypi setuptools
require python-docker.inc

RDEPENDS_${PN} += " \
                   python-backports-ssl \
                  "
