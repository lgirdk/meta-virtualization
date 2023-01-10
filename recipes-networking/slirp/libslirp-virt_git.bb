SUMMARY = "A general purpose TCP-IP emulator"
LICENSE = "BSD-3-Clause & MIT"
LIC_FILES_CHKSUM = "file://COPYRIGHT;md5=bca0186b14e6b05e338e729f106db727"

SRC_URI = "git://gitlab.freedesktop.org/slirp/libslirp.git;protocol=https;branch=master"
SRCREV = "888ddad6bde1dc6d7dbfc8daa7d015251b72e02c"
PV = "4.6.1+git${SRCPV}"
S = "${WORKDIR}/git"

DEPENDS = " \
    glib-2.0 \
"

inherit meson pkgconfig
