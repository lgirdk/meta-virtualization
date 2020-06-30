SRCREV ?= "9f7e8bac4ca279b3bfccb5f3730fb2e5398c95ab"

XEN_REL ?= "4.13"
XEN_BRANCH ?= "stable-${XEN_REL}"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-python-pygrub-pass-DISTUTILS-xen.4.12.patch \
    file://0001-xen-build-temporarily-inhibit-Werror.patch \
    file://xen-tools-kdd-stop-using-0-arrays-to-access-packet-contents.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=4295d895d4b5ce9d070263d52f030e49"

PV = "${XEN_REL}+git${SRCPV}"

S = "${WORKDIR}/git"

require xen.inc
require xen-tools.inc
