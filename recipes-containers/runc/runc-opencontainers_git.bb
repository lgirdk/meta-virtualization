include runc.inc

SRCREV = "974efd2dfca0abec041a3708a2b66bfac6bd2484"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.4"

CVE_PRODUCT = "runc"
