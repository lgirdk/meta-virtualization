include runc.inc

SRCREV = "b9460f26b49efa086b99f32557219d0f24bd23ae"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.0"

CVE_PRODUCT = "runc"
