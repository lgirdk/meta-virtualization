SRCREV = "0190e5f3900227fc739afbc8f4a03df968dc337b"
SRC_URI = "git://github.com/containerd/containerd;nobranch=1 \
           file://0001-build-use-oe-provided-GO-and-flags.patch \
          "

include containerd.inc

LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=1269f40c0d099c21a871163984590d89"

CONTAINERD_VERSION = "v1.2.0"

PROVIDES += "virtual/containerd"
RPROVIDES_${PN} = "virtual/containerd"
