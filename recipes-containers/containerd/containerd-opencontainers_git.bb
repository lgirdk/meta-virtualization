SRCREV = "409c87ba59dd96965239573aa9458a3585c05468"
SRC_URI = "git://github.com/containerd/containerd;branch=release/1.4 \
           file://0001-build-use-oe-provided-GO-and-flags.patch \
           file://0001-Add-build-option-GODEBUG-1.patch \
          "

include containerd.inc

LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=1269f40c0d099c21a871163984590d89"

CONTAINERD_VERSION = "v1.4.4"

EXTRA_OEMAKE += "GODEBUG=1"

PROVIDES += "virtual/containerd"
RPROVIDES_${PN} = "virtual/containerd"

CVE_PRODUCT = "containerd"
