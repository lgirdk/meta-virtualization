DESCRIPTION = "Open source network boot firmware"
HOMEPAGE = "http://ipxe.org"
LICENSE = "GPLv2"
DEPENDS = "binutils-native perl-native syslinux mtools-native cdrtools-native xz"
LIC_FILES_CHKSUM = "file://../COPYING.GPLv2;md5=b234ee4d69f5fce4486a80fdaf4a4263"

SRCREV = "18dc73d27edb55ebe9cb13c58d59af3da3bd374b"
PV = "gitr${SRCPV}"
PR = "r0"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI = " \
    git://git.ipxe.org/ipxe.git;protocol=https;branch=master \
    file://ipxe-fix-hostcc-nopie-cflags.patch \
    "

FILES_${PN} = "/usr/share/firmware/*.rom"

EXTRA_OEMAKE = " \
    ISOLINUX_BIN="${STAGING_DIR_TARGET}/usr/share/syslinux/isolinux.bin" \
    CROSS_COMPILE="${TARGET_PREFIX}" \
    EXTRA_HOST_CFLAGS="${BUILD_CFLAGS}" \
    EXTRA_HOST_LDFLAGS="${BUILD_LDFLAGS}""

S = "${WORKDIR}/git/src"

do_compile() {
   oe_runmake
}

do_install() {
    install -d ${D}/usr/share/firmware
    install ${S}/bin/*.rom ${D}/usr/share/firmware/
}
