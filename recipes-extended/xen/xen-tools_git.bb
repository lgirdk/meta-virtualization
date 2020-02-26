SRCREV ?= "a5fcafbfbee55261853fba07149c1c795f2baf58"

XEN_REL ?= "4.12"
XEN_BRANCH ?= "stable-${XEN_REL}"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-python-pygrub-pass-DISTUTILS-xen.4.12.patch \
    file://xen-tools-update-python-scripts-to-py3.patch \
    file://xen-tools-libxl-gentypes-py3.patch \
    file://xen-tools-python-fix-Wsign-compare-warnings.patch \
    file://xen-tools-pygrub-change-tabs-into-spaces.patch \
    file://xen-tools-pygrub-make-python-scripts-work-with-2.6-and-up.patch \
    file://xen-tools-pygrub-py3.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=bbb4b1bdc2c3b6743da3c39d03249095"

PV = "${XEN_REL}+git${SRCPV}"

S = "${WORKDIR}/git"

require xen.inc
require xen-tools.inc
