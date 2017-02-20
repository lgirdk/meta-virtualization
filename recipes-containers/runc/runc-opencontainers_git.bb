include runc.inc

SRCREV = "1cdaa709f151b61cee2bdaa09d8e5d2b58a8ba72"
SRC_URI = "git://github.com/opencontainers/runc;branch=master \
          "
RUNC_VERSION = "1.0.0-rc1"
PROVIDES += "virtual/runc"
RPROVIDES_${PN} = "virtual/runc"
