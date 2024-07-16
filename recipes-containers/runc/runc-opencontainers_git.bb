include runc.inc

SRCREV = "3778ae603c706494fd1e2c2faf83b406e38d687d"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=main;protocol=https;destsuffix=${GO_SRCURI_DESTSUFFIX} \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.2.0-rc.2"

CVE_PRODUCT = "runc"

LDFLAGS += "${@bb.utils.contains('DISTRO_FEATURES', 'ld-is-gold', ' -fuse-ld=bfd', '', d)}"
