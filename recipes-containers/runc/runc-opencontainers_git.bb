include runc.inc

SRCREV = "49a73463331bd8ff44bb8349e33f4b2e1ae34b4f"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=master \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.0.0-rc92"
