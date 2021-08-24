SRCREV ?= "e680cc48b7184d3489873d6776f84ba1fc238ced"

XEN_REL ?= "4.16"
XEN_BRANCH ?= "master"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-python-pygrub-pass-DISTUTILS-xen-4.15.patch \
    file://0001-libs-foreignmemory-Fix-osdep_xenforeignmemory_map-pr.patch \
    file://0001-x86-work-around-build-issue-with-GNU-ld-2.37.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=419739e325a50f3d7b4501338e44a4e5"

PV = "${XEN_REL}+git${SRCPV}"

S = "${WORKDIR}/git"

DEFAULT_PREFERENCE ??= "-1"

require xen.inc
require xen-tools.inc
