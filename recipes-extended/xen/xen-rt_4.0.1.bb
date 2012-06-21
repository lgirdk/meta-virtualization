# Xen official download
# Using libxl instead of xend.  No longer require Python

require xen.inc

SRCREV = "3cf61880403b4e484539596a95937cc066243388"

SRC_URI = "http://bits.xensource.com/oss-xen/release/${PV}/xen-${PV}.tar.gz \
        git://xenbits.xensource.com/qemu-xen-4.1-testing.git \
        file://ioemu-cross-gl-check.patch \
	file://rt-xen_0.3_${PV}.patch"

#	file://allow_disable_xend.patch"

SRC_URI[md5sum] = "d197afad975ab2396a67323d57388c27"
SRC_URI[sha256sum] = "6e6d1d29400db93cb8095e034138aa8748b1bd4cffb4d3fd07af4ba15c918873"

S = "${WORKDIR}/xen-${PV}"

do_compile_prepend() {

	export XEN_DISABLE_XEND=1

}

