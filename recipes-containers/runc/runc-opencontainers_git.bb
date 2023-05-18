include runc.inc

SRCREV = "b6109acd4d81e8a33dd07d94e6a7f9c706d8356c"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.7"

CVE_PRODUCT = "runc"
