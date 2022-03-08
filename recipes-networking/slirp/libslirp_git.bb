SUMMARY = "A general purpose TCP-IP emulator"
LICENSE = "BSD-3-Clause & MIT"
LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=bca0186b14e6b05e338e729f106db727"

SRC_URI = "git://gitlab.freedesktop.org/slirp/libslirp.git;protocol=https;branch=master"
SRCREV = "bf917b89d64f57d9302aba4b2f027ea68fb78c13"
PV = "4.6.1"
S = "${WORKDIR}/git"

DEPENDS = " \
    glib-2.0 \
"

inherit meson pkgconfig
