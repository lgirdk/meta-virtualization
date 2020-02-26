FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
require xen.inc

SRC_URI = " \
    https://downloads.xenproject.org/release/xen/${PV}/xen-${PV}.tar.gz \
    file://0001-python-pygrub-pass-DISTUTILS-xen.4.12.patch \
    "

SRC_URI[md5sum] = "57084e3f55bbec063d38b464e1b7e4f2"
SRC_URI[sha256sum] = "1c75cbe728dfabf02b7f9a17ce96ee7d202d2fd4b4689490018d3a28b63f9fa3"

S = "${WORKDIR}/xen-${PV}"
