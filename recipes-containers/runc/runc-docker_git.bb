include runc.inc

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV_runc-docker = "425e105d5a03fabd737a126ad93d62a9eeede87f"
SRC_URI = "git://github.com/opencontainers/runc;nobranch=1;name=runc-docker;protocol=https \
           file://0001-runc-Add-console-socket-dev-null.patch \
           file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
           file://0001-runc-docker-SIGUSR1-daemonize.patch \
           file://0001-Only-allow-proc-mount-if-it-is-procfs.patch \
          "

RUNC_VERSION = "1.0.0-rc8"

CVE_PRODUCT = "runc"
