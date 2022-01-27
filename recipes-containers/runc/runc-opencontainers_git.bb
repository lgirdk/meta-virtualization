include runc.inc

SRCREV = "d7f7b22a85a2387557bdcda125710c2506f8d5c5"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.0"

CVE_PRODUCT = "runc"
