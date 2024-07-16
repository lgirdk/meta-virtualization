include runc.inc

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV_runc-docker = "3778ae603c706494fd1e2c2faf83b406e38d687d"
SRC_URI = "git://github.com/opencontainers/runc;branch=main;name=runc-docker;protocol=https;destsuffix=${GO_SRCURI_DESTSUFFIX} \
           file://0001-runc-Add-console-socket-dev-null.patch \
           file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
           file://0001-runc-docker-SIGUSR1-daemonize.patch \
          "

RUNC_VERSION = "1.2.0-rc.2"

CVE_PRODUCT = "runc"
