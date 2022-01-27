include runc.inc

SRCREV = "652297c7c7e6c94e8d064ad5916c32891a6fd388"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=main;protocol=https \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    file://0001-Only-allow-proc-mount-if-it-is-procfs.patch \
    "
RUNC_VERSION = "1.0.0-rc8"

CVE_PRODUCT = "runc"
