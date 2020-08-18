include runc.inc

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV_runc-docker = "49a73463331bd8ff44bb8349e33f4b2e1ae34b4f"
SRC_URI = "git://github.com/opencontainers/runc;nobranch=1;name=runc-docker \
           file://0001-runc-Add-console-socket-dev-null.patch \
           file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
           file://0001-runc-docker-SIGUSR1-daemonize.patch \
          "

RUNC_VERSION = "1.0.0-rc92"
