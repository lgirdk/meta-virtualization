include runc.inc

SRCREV = "25d476443207db333bcc6dd076db7cd3a9eea1d7"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=main;protocol=https;destsuffix=${GO_SRCURI_DESTSUFFIX} \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.2.0"

# for compatibility with existing RDEPENDS that have existed since
# runc-docker and runc-opencontainers were separate
RPROVIDES:${PN} += "runc-docker"

CVE_PRODUCT = "runc"

LDFLAGS += "${@bb.utils.contains('DISTRO_FEATURES', 'ld-is-gold', ' -fuse-ld=bfd', '', d)}"
