include runc.inc

SRCREV = "fce58ab2d5c488bc573d02712db476a6daa9a60c"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=master \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.0.0-rc93"
