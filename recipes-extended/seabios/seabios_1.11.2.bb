DESCRIPTION = "SeaBIOS"
HOMEPAGE = "http://www.coreboot.org/SeaBIOS"
LICENSE = "LGPLv3"
SECTION = "firmware"

SRC_URI = " \
    https://github.com/qemu/seabios/archive/rel-${PV}.tar.gz \
    file://hostcc.patch \
    "
S = "${WORKDIR}/${PN}-rel-${PV}"

LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504         \
                    file://COPYING.LESSER;md5=6a6a8e020838b23406c81b19c1d46df6  \
                    "

SRC_URI[md5sum] = "3f78065837dbd8873513a1b7d5276e78"
SRC_URI[sha256sum] = "73e73c8e406d97265782f6c942b3c1d178ed4f4afc9f381b22336c3968291693"

FILES_${PN} = "/usr/share/firmware"

DEPENDS = "util-linux-native file-native bison-native flex-native gettext-native acpica-native python-native"

TUNE_CCARGS = ""
EXTRA_OEMAKE += "HOSTCC='${BUILD_CC}'"
EXTRA_OEMAKE += "CROSS_PREFIX=${TARGET_PREFIX}"

COMPATIBLE_HOST = "(i.86|x86_64).*-linux"

do_configure() {
    oe_runmake defconfig
}

do_compile() {
    unset CPP
    unset CPPFLAGS
    oe_runmake
}

do_install() {
    oe_runmake
    install -d ${D}/usr/share/firmware
    install -m 0644 out/bios.bin ${D}/usr/share/firmware/
}

