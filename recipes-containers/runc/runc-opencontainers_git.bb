include runc.inc

SRCREV = "17a2d451d635e5eda2e4902324428f1bc65b0364"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=release-1.1;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.1.5"

CVE_PRODUCT = "runc"
