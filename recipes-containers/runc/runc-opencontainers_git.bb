include runc.inc

SRCREV = "452f520c1023a2d4a201cc3f19ffa37e09fa1f0b"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.11"

CVE_PRODUCT = "runc"

LDFLAGS += "${@bb.utils.contains('DISTRO_FEATURES', 'ld-is-gold', ' -fuse-ld=bfd', '', d)}"
