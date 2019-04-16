require xen.inc

SRCREV ?= "cb70a26f78848fe45f593f7ebc9cfaac760a791b"

XEN_REL = "4.13"
XEN_BRANCH = "staging"
FLASK_POLICY_FILE = "xenpolicy-${XEN_REL}-unstable"

PV = "${XEN_REL}+git${SRCPV}"

S = "${WORKDIR}/git"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-python-pygrub-pass-DISTUTILS-xen.4.12.patch \
    "

DEFAULT_PREFERENCE = "-1"
