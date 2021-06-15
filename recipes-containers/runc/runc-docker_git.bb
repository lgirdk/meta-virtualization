include runc.inc

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV_runc-docker = "bfcbc947d5d11327f2680047e2e6e94f4ee93d2a"
SRC_URI = "git://github.com/opencontainers/runc;branch=master;name=runc-docker \
           file://0001-runc-Add-console-socket-dev-null.patch \
           file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
           file://0001-runc-docker-SIGUSR1-daemonize.patch \
          "

RUNC_VERSION = "1.0.0-rc95"

CVE_PRODUCT = "runc"
