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

SRC_URI[md5sum] = "0c72b97432465e7f81113630fcd6e460"
SRC_URI[sha256sum] = "be88cb2443761990efc1070d9718016561fe19066af232f9bfae572922897e59"

S = "${WORKDIR}/xen-${PV}"
