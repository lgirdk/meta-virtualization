include runc.inc

SRCREV = "c6781d100a73d2dcef84e9376d85fff02235a2ed"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.4"

CVE_PRODUCT = "runc"
