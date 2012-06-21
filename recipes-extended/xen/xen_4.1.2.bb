# Xen official download

require xen.inc

PR="r1"

LIC_FILES_CHKSUM = "file://COPYING;md5=f46a39d9fa181e4933b1acdfdcd72017"

SRCREV = "3cf61880403b4e484539596a95937cc066243388"

SRC_URI = "http://bits.xensource.com/oss-xen/release/${PV}/xen-${PV}.tar.gz \
        git://xenbits.xensource.com/qemu-xen-4.1-testing.git \
        file://ioemu-cross-gl-check.patch \
        file://allow_disable_xend.patch \
        file://xend-config.sxp \
        file://xenminiinit.sh"

SRC_URI[md5sum] = "73561faf3c1b5e36ec5c089b5db848ad"
SRC_URI[sha256sum] = "7d9c93057cf480d3f1efa792b19285a84fa3c06060ea5c5c453be00887389b0d"

S = "${WORKDIR}/xen-${PV}"

# Include python and xend support
require xen-python.inc
