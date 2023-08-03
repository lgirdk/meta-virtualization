include runc.inc

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV_runc-docker = "aa68c400a89db049e57d33c53cf14c5152066de4"
SRC_URI = "git://github.com/opencontainers/runc;branch=release-1.1;name=runc-docker;protocol=https \
           file://0001-runc-Add-console-socket-dev-null.patch \
           file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
           file://0001-runc-docker-SIGUSR1-daemonize.patch \
          "

RUNC_VERSION = "1.1.8"

CVE_PRODUCT = "runc"
