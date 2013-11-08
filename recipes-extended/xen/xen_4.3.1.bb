require xen.inc

SRC_URI = " \
    http://bits.xensource.com/oss-xen/release/${PV}/xen-${PV}.tar.gz \
    file://flask-avoid-installing-policy-file-as-boot.patch \
    "

SRC_URI[md5sum] = "7616b8704e1ab89c81f011f0e3703bc8"
SRC_URI[sha256sum] = "3b5b7cc508b1739753585b5c25635471cdcef680e8770a78bf6ef9333d26a9fd"

S = "${WORKDIR}/xen-${PV}"

do_configure_prepend() {
    # fixup qemu-xen-traditional pciutils check hardcoded to test /usr/include/pci
    sed -i 's/\/usr\/include\/pci/$(STAGING_INCDIR)\/pci/g' ${S}/tools/qemu-xen-traditional/xen-hooks.mak

    # fixup for qemu to cross compile
    sed -i 's/configure --d/configure --cross-prefix=${TARGET_PREFIX} --d/g' ${S}/tools/qemu-xen-traditional/xen-setup
}
