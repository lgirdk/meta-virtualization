# stable-4.17 status on 5/26/2023
SRCREV ?= "47eb94123035a2987dd1e328e9adec6db36e7fb3"

XEN_REL ?= "4.17"
XEN_BRANCH ?= "stable-${XEN_REL}"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-menuconfig-mconf-cfg-Allow-specification-of-ncurses-location.patch \
    file://0001-arm32-Avoid-using-solaris-syntax-for-.section-direct.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=d1a1e216f80b6d8da95fec897d0dbec9"

PV = "${XEN_REL}+stable"

S = "${WORKDIR}/git"

require xen.inc
require xen-hypervisor.inc

TOOLCHAIN = "gcc"
LDFLAGS:remove = "-fuse-ld=lld"
