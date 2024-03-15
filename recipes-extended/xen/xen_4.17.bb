# xen 4.17.2 release sha
SRCREV ?= "0ebd2e49bcd0f566ba6b9158555942aab8e41332"

XEN_REL ?= "4.17"
XEN_BRANCH ?= "stable-${XEN_REL}"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-menuconfig-mconf-cfg-Allow-specification-of-ncurses-location.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=d1a1e216f80b6d8da95fec897d0dbec9"

PV = "${XEN_REL}+stable"

S = "${WORKDIR}/git"

require xen.inc
require xen-hypervisor.inc

TOOLCHAIN = "gcc"
LDFLAGS:remove = "-fuse-ld=lld"
