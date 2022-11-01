SUMMARY = "Virtual Machine Viewer"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552"

# for ovirt support librest-0.7 and libgovirt would be needed
DEPENDS = " \
	desktop-file-utils-native \
	glib-2.0 \
	gtk+3 \
	libxml2 \
"

SRC_URI = "git://gitlab.com/virt-viewer/virt-viewer.git;protocol=https;branch=master"

SRCREV = "1e99e5e4f409da91638eb79067ec738994c28ef5"
PV = "11.0+git${SRCPV}"
S = "${WORKDIR}/git"

PACKAGECONFIG ?= "libvirt spice vte"

PACKAGECONFIG[libvirt] = "-Dlibvirt=enabled,-Dlibvirt=disabled,libvirt libvirt-glib"
PACKAGECONFIG[spice] = "-Dspice=enabled,-Dspice=disabled,spice-gtk spice-protocol"
PACKAGECONFIG[vnc] = "-Dvnc=enabled,-Dvnc=disabled,gtk-vnc"
PACKAGECONFIG[vte] = "-Dvte=enabled,-Dvte=disabled,vte"

inherit meson pkgconfig gtk-icon-cache mime mime-xdg gobject-introspection

FILES:${PN} += "${datadir}"
GIR_MESON_OPTION = ''
