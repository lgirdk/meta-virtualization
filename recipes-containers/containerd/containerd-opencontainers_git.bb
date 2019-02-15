SRCREV = "e6b3f5632f50dbc4e9cb6288d911bf4f5e95b18e"
SRC_URI = "git://github.com/containerd/containerd;branch=release/1.2 \
           file://0001-build-use-oe-provided-GO-and-flags.patch \
          "

include containerd.inc

LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=1269f40c0d099c21a871163984590d89"

CONTAINERD_VERSION = "v1.2.4"

PROVIDES += "virtual/containerd"
RPROVIDES_${PN} = "virtual/containerd"
