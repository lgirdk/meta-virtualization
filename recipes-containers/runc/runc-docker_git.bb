include runc.inc

RRECOMMENDS_${PN} = "lxc docker"

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV_runc-docker = "4a600c04ed480084b2351b3e32c26cb4a2d5d533"
SRC_URI = "git://github.com/opencontainers/runc;nobranch=1;name=runc-docker \
           file://0001-runc-Add-console-socket-dev-null.patch \
           file://0001-build-drop-recvtty-and-use-GOBUILDFLAGS.patch \
           file://0001-runc-docker-SIGUSR1-daemonize.patch \
          "

RUNC_VERSION = "1.0.0-rc6"
