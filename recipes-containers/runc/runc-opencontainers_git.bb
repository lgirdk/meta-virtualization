include runc.inc

SRCREV = "b507e2da6c6a3a328f208fa415a56ad7cd58761b"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.2"

CVE_PRODUCT = "runc"
