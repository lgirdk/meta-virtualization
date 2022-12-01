HOMEPAGE = "http://upx.sourceforge.net"
SUMMARY = "Ultimate executable compressor."

SRCREV = "8d1a98e03bf281b2cee459b6c27347e56d13c6a8"
SRC_URI = "gitsm://github.com/upx/upx;branch=devel;protocol=https \
"

LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=353753597aa110e0ded3508408c6374a"

DEPENDS = "zlib libucl xz cmake-native"

# inherit cmake

S = "${WORKDIR}/git"

PV = "3.96+${SRCPV}"

EXTRA_OEMAKE += " \
    UPX_UCLDIR=${STAGING_DIR_TARGET} \
    UPX_LZMADIR=${STAGING_DIR_TARGET} \
"

# FIXME: The build fails if security flags are enabled
SECURITY_CFLAGS = ""

do_compile() {
    oe_runmake -C src all
}

do_install:append() {
    install -d ${D}${bindir}
    install -m 755 ${B}/build/release/upx ${D}${bindir}/upx
}

BBCLASSEXTEND = "native"
