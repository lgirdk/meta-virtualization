# master status on 2022-12-29
SRCREV ?= "7eef80e06ed2282bbcec3619d860c6aacb0515d8"

XEN_REL ?= "4.18"
XEN_BRANCH ?= "master"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-python-pygrub-pass-DISTUTILS-xen-4.15.patch \
    file://0001-tools-xenstore-xenstored_control.c-correctly-print-t.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=d1a1e216f80b6d8da95fec897d0dbec9"

PV = "${XEN_REL}+git${SRCPV}"

S = "${WORKDIR}/git"

DEFAULT_PREFERENCE ??= "-1"

require xen.inc
require xen-tools.inc
