include runc.inc

SRCREV = "b7da16731c8b55e0e38070ac1d84a56b15f6db37"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=main;protocol=https;destsuffix=${GO_SRCURI_DESTSUFFIX} \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.2.0-rc.3"

CVE_PRODUCT = "runc"

LDFLAGS += "${@bb.utils.contains('DISTRO_FEATURES', 'ld-is-gold', ' -fuse-ld=bfd', '', d)}"
