include runc.inc

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV_runc-docker = "26a98ea20ee1e946f07fc8a9ba9f11b84b39e4a0"
SRC_URI = "git://github.com/opencontainers/runc;branch=release-1.1;name=runc-docker;protocol=https \
           file://0001-runc-Add-console-socket-dev-null.patch \
           file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
           file://0001-runc-docker-SIGUSR1-daemonize.patch \
          "

RUNC_VERSION = "1.1.9"

CVE_PRODUCT = "runc"
