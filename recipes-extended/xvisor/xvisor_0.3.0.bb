SUMMARY = "Xvisor is an open-source type-1 hypervisor, which aims at providing a monolithic, light-weight, portable, and flexible virtualization solution."
DESCRIPTION = "Xvisor primarily supports Full virtualization hence, supports a wide range of unmodified guest operating systems. Paravirtualization is optional for Xvisor and will be supported in an architecture independent manner (such as VirtIO PCI/MMIO devices) to ensure no-change in guest OS for using paravirtualization."
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
DEPENDS += "dtc-native dosfstools-native mtools-native"

require xvisor-configs.inc

inherit autotools-brokensep

SRCREV = "58592ef18c71526a0045935d1e8eed5e8553b7d6"
SRC_URI = "git://github.com/xvisor/xvisor.git;branch=master;protocol=https \
           file://0001-TESTS-Don-t-specify-mabi-or-march-for-RISC-V.patch \
          "

S = "${WORKDIR}/git"

EXTRA_OEMAKE += "ARCH=\"${@map_xvisor_arch(d.getVar('TARGET_ARCH'), d)}\" I=${D}"

CONFIG = "${@get_oemake_config(d)}"

do_configure() {
    oe_runmake ${CONFIG}
}

do_install_append() {
    install -d ${D}
    install -m 755 ${B}/build/vmm.* ${D}/

    # We don't need this
    rm ${D}/system.map
}

do_deploy () {
    install -d ${DEPLOY_DIR_IMAGE}
    install -m 755 ${D}/vmm.* ${DEPLOY_DIR_IMAGE}/
}

addtask deploy after do_install

FILES_${PN} += "/vmm.*"

COMPATIBLE_HOST = "(riscv64|riscv32).*"
INHIBIT_PACKAGE_STRIP = "1"
