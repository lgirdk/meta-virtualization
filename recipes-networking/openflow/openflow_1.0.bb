SUMMARY = "OpenFlow"
DESCRIPTION = "Provide a generic framework for handling devices in userspace."
HOMEPAGE = "http://www.openflow.org"
SECTION = "networking"
LICENSE = "GPLv2"

LIC_FILES_CHKSUM = "file://COPYING;md5=e870c934e2c3d6ccf085fd7cf0a1e2e2"

SRCREV = "5ccca75a69f99791659bcfbcf35353ab1921320a"
PR = "r0"
PV = "1.0+git${SRCPV}"

SRC_URI = "git://gitosis.stanford.edu/openflow.git;protocol=git"

DEPENDS = "virtual/libc"

EXTRA_OECONF += "KARCH=${TARGET_ARCH}"

PACKAGECONFIG ??= "libssl"
PACKAGECONFIG[libssl] = "--enable-ssl,--disable-ssl, openssl, libssl"

S = "${WORKDIR}/git"

inherit autotools

do_install_append() {
	# Remove /var/run as it is created on startup
        rm -rf ${D}${localstatedir}/run
}
