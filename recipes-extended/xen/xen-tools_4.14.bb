# 4.14.3 release SHA
SRCREV ?= "9f2b6c5ec2ded4c1caf149743e862c5f15d6d083"

XEN_REL ?= "4.14"
XEN_BRANCH ?= "stable-${XEN_REL}"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-python-pygrub-pass-DISTUTILS-xen-4.14.patch \
    file://0001-firmware-provide-a-stand-alone-set-of-headers-Xen-4.14.patch \
    file://0001-tools-firmware-Build-firmware-as-ffreestanding-Xen-4.14.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=419739e325a50f3d7b4501338e44a4e5"

PV = "${XEN_REL}+stable${SRCPV}"

S = "${WORKDIR}/git"

require xen.inc
require xen-tools.inc
