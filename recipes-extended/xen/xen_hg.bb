# A build of Xen Unstable from Mercurial

# Build is not yet verified as functional
# Setting BROKEN for now
BROKEN = "1"

inherit autotools

require xen.inc

DEPENDS += "yajl"

LIC_FILES_CHKSUM = "file://COPYING;md5=e0f0f3ac55608719a82394cc353928df"

SRCREV = "82db8de16530f016809264d3179823999d702849"

SRC_URI = "hg://xenbits.xen.org;module=xen-unstable.hg;rev=d690c7e896a2 \
        git://xenbits.xensource.com/qemu-xen-unstable.git \
        file://ioemu-cross-gl-check.patch \
	file://tools_qemu_xen_remove_CFLAGS.patch"

SRC_URI[md5sum] = "2f3e36c96fe13cebc7475652c2803e14"
SRC_URI[sha256sum] = "b63bc8d48aaf2688cff1417f99a140943e71de0777b28ed8cbba8aa018b4117c"

S = "${WORKDIR}/xen-unstable.hg"

#EXTRA_OECONF="--disable-pythontools"
require xen-python.inc

