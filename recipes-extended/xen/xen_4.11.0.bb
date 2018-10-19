FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
require xen.inc

SRC_URI = " \
    https://downloads.xenproject.org/release/xen/${PV}/xen-${PV}.tar.gz \
    file://tools-xentop-vwprintw.patch \
    file://xen-4.11-arm-acpi-fix-string-lengths.patch \
    file://xen-tools-xenpmd-snprintf.patch \
    file://xen-disable-sse-before-inlines.patch \
    file://0001-python-pygrub-pass-DISTUTILS-env-vars-as-setup.py-ar.patch \
    "

SRC_URI[md5sum] = "cbec0600284921744bc14119f4ed3fff"
SRC_URI[sha256sum] = "826e3a9f6d0eac94a825d272cc2c1294e22640ae75af906eb13920f9ad667643"

S = "${WORKDIR}/xen-${PV}"
