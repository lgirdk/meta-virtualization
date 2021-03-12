include runc.inc

SRCREV = "249bca0a1316129dcd5bd38b5d75572274181cb5"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=master \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.0.0-rc93"
