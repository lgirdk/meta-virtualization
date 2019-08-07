include runc.inc

SRCREV = "652297c7c7e6c94e8d064ad5916c32891a6fd388"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=master \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.0.0-rc8"
