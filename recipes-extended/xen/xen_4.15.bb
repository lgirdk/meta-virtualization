# xen 4.15.1 release sha
SRCREV ?= "84fa99099b920f7bcde8899e1a9b756078719d7d"

XEN_REL ?= "4.15"
XEN_BRANCH ?= "stable-${XEN_REL}"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://xen-arm64-implement-atomic-fetch-add.patch \
    file://0001-menuconfig-mconf-cfg-Allow-specification-of-ncurses-location.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=419739e325a50f3d7b4501338e44a4e5"

PV = "${XEN_REL}+stable${SRCPV}"

S = "${WORKDIR}/git"

require xen.inc
require xen-hypervisor.inc
