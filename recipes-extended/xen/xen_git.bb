require xen.inc

SRCREV ?= "2b50cdbc444c637575580dcfa6c9525a84d5cc62"

XEN_REL = "4.12"
XEN_BRANCH = "staging"
FLASK_POLICY_FILE = "xenpolicy-${XEN_REL}-unstable"

PV = "${XEN_REL}+git${SRCPV}"

S = "${WORKDIR}/git"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://xen-disable-sse-before-inlines.patch \
    file://0001-python-pygrub-pass-DISTUTILS-env-vars-as-setup.py-ar.patch \
    "

DEFAULT_PREFERENCE = "-1"
