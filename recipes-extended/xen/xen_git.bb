# master status on 2023-11-24
SRCREV ?= "03cf7ca23e0e876075954c558485b267b7d02406"

XEN_REL ?= "4.19"
XEN_BRANCH ?= "master"

SRC_URI = " \
    git://xenbits.xen.org/xen.git;branch=${XEN_BRANCH} \
    file://0001-menuconfig-mconf-cfg-Allow-specification-of-ncurses-location.patch \
    "

LIC_FILES_CHKSUM ?= "file://COPYING;md5=d1a1e216f80b6d8da95fec897d0dbec9"

PV = "${XEN_REL}+git"

S = "${WORKDIR}/git"

DEFAULT_PREFERENCE ??= "-1"

require xen.inc
require xen-hypervisor.inc
