FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
require xen.inc

SRC_URI = " \
    https://downloads.xenproject.org/release/xen/${PV}/xen-${PV}.tar.gz \
    file://0001-python-pygrub-pass-DISTUTILS-xen.4.12.patch \
    "

SRC_URI[md5sum] = "7d24d4541e3025421e02384cabc3528b"
SRC_URI[sha256sum] = "6e5455e4a58dcb2339bfcd2a89842728068b530aa62501843793f7cf743c4d64"

S = "${WORKDIR}/xen-${PV}"
