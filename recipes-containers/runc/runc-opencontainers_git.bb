include runc.inc

SRCREV = "bd4d05c0caf340f2d1fd1625f5c1129ce01c97b5"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.4"

CVE_PRODUCT = "runc"
