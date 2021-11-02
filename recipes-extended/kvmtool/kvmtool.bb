SUMMARY = "Native Linux KVM tool"
DESCRIPTION = "kvmtool is a lightweight tool for hosting KVM guests."

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=fcb02dc552a041dee27e4b85c7396067"

DEPENDS = "dtc libaio zlib"
do_configure[depends] += "virtual/kernel:do_shared_workdir"

inherit kernel-arch

SRC_URI = "git://git.kernel.org/pub/scm/linux/kernel/git/will/kvmtool.git;branch=master \
           file://external-crosscompiler.patch \
           file://0001-Avoid-pointers-for-address-of-packed-members.patch \
           file://0001-kvmtool-9p-fixed-compilation-error.patch \
           file://0002-kvmtool-add-EXTRA_CFLAGS-variable.patch \
           file://0003-kvmtool-Werror-disabled.patch \
           "

SRCREV = "0e1882a49f81cb15d328ef83a78849c0ea26eecc"
PV = "4.14.0+git${SRCPV}"

S = "${WORKDIR}/git"

EXTRA_OEMAKE='V=1 EXTRA_CFLAGS="-I${STAGING_KERNEL_BUILDDIR}/include/generated -I${STAGING_KERNEL_BUILDDIR}/arch/${ARCH}/include/generated"'

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/lkvm ${D}${bindir}/
}
