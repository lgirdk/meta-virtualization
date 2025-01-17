# tag: RELEASE-4.19.0
SRCREV ?= "8dd897e69119492989aaa034967f3a887f590197"

XEN_REL ?= "4.19.0"
XEN_BRANCH ?= "stable-4.19"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-menuconfig-mconf-cfg-Allow-specification-of-ncurses-location.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=d1a1e216f80b6d8da95fec897d0dbec9"

PV = "${XEN_REL}+stable"

S = "${WORKDIR}/git"

DEFAULT_PREFERENCE ??= "-1"

require xen.inc
require xen-hypervisor.inc
