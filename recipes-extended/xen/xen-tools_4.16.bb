# stable-4.16 status on 2023-05-26
SRCREV ?= "b0806d84d48d983d40a29534e663652887287a78"

XEN_REL ?= "4.16"
XEN_BRANCH ?= "stable-${XEN_REL}"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-python-pygrub-pass-DISTUTILS-xen-4.15.patch \
    file://0001-tools-xenstore-xenstored_control.c-correctly-print-t.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=419739e325a50f3d7b4501338e44a4e5"

PV = "${XEN_REL}+stable"

S = "${WORKDIR}/git"

require xen.inc
require xen-tools.inc

SYSTEMD_SERVICE:${PN}-xencommons:append = " \
    var-lib-xenstored.mount \
    "
