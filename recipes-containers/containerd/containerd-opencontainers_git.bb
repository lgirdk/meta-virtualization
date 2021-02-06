SRCREV = "33d90b72d1e44987118ac111d4f7a108d412099b"
SRC_URI = "git://github.com/containerd/containerd;branch=release/1.4 \
           file://0001-build-use-oe-provided-GO-and-flags.patch \
           file://0001-Add-build-option-GODEBUG-1.patch \
          "

include containerd.inc

LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=1269f40c0d099c21a871163984590d89"

CONTAINERD_VERSION = "v1.4.3"

EXTRA_OEMAKE += "GODEBUG=1"

PROVIDES += "virtual/containerd"
RPROVIDES_${PN} = "virtual/containerd"
