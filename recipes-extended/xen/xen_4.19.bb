# tag: RELEASE-4.19.0
SRCREV ?= "026c9fa29716b0ff0f8b7c687908e71ba29cf239"

XEN_REL ?= "4.19.0"
XEN_BRANCH ?= "stable-4.19"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-menuconfig-mconf-cfg-Allow-specification-of-ncurses-location.patch \
    file://0001-arm-silence-gcc14-warning-error-on-irq-bounds-check.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=d1a1e216f80b6d8da95fec897d0dbec9"

PV = "${XEN_REL}+stable"

S = "${WORKDIR}/git"

DEFAULT_PREFERENCE ??= "-1"

require xen.inc
require xen-hypervisor.inc
