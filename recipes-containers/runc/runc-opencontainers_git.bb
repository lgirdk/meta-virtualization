include runc.inc

SRCREV = "b4cb54c2ea78b90f9d8284316aeaeff876f61dfc"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=master \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.0.0-rc93"
