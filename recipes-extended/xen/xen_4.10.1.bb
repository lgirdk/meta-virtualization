FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
require xen.inc

SRC_URI = " \
    https://downloads.xenproject.org/release/xen/${PV}/xen-${PV}.tar.gz \
    file://tools-libxc-fix-strncpy-size.patch \
    file://tools-misc-fix-hypothetical-buffer-overflow.patch \
    file://tools-xentop-vwprintw.patch \
    file://tools-xenpmd-fix-possible-0-truncation.patch \
    file://tools-gdbsx-fix-Wstringop-truncation-warning.patch \
    file://tools-kdd-mute-spurious-gcc-warning-part1.patch \
    file://tools-kdd-mute-spurious-gcc-warning-part2.patch \
    file://shim-don-t-let-build-modify-shim.config.patch \
    "

SRC_URI[md5sum] = "d1b1d14ce76622062c9977d9c8ba772e"
SRC_URI[sha256sum] = "570d654f357d4085accdf752989c1cbc33e2075feac8fcc505d68bdb81b1a0cf"

S = "${WORKDIR}/xen-${PV}"
