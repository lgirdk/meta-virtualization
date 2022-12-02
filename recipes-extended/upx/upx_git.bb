HOMEPAGE = "http://upx.sourceforge.net"
SUMMARY = "Ultimate executable compressor."

SRCREV_upx = "8d1a98e03bf281b2cee459b6c27347e56d13c6a8"
SRCREV_vendor_doctest = "666e648b68fda2deb141a1fe93e3fd1e2795dd0f"
SRCREV_vendor_lzma_sdk = "9ebf8f468c689d83504e6c08c6bc26c4a1cf180f"
SRCREV_vendor_ucl = "4b58d592199dc1e5db691e1a54fb0e5e9af0ecaf"
SRCREV_vendor_zlib = "2a5b338eb173a701ed179e951d4c390e75e8d4c7"
SRCREV_FORMAT = "upx"
SRC_URI = "git://github.com/upx/upx;name=upx;branch=devel;protocol=https \
           git://github.com/upx/upx-vendor-doctest;name=vendor_doctest;subdir=git/vendor/doctest;branch=upx-vendor;protocol=https \
           git://github.com/upx/upx-vendor-lzma-sdk;name=vendor_lzma_sdk;subdir=git/vendor/lzma-sdk;branch=upx-vendor;protocol=https \
           git://github.com/upx/upx-vendor-ucl;name=vendor_ucl;subdir=git/vendor/ucl;branch=upx-vendor;protocol=https \
           git://github.com/upx/upx-vendor-zlib;name=vendor_zlib;subdir=git/vendor/zlib;branch=upx-vendor;protocol=https \
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
