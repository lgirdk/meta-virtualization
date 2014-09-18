SUMMARY = "CRIU"
DESCRIPTION = "Checkpoint/Restore In Userspace, or CRIU, is a software \
tool for Linux operating system. Using this tool, you can freeze a running \
application (or part of it) and checkpoint it to a hard drive \
as a collection of files. You can then use the files to restore and run \
the application from the point it was frozen at. The distinctive feature \
of the CRIU project is that it is mainly implemented in user space"
HOMEPAGE = "http://criu.org"
SECTION = "console/tools"
LICENSE = "GPLv2"

LIC_FILES_CHKSUM = "file://COPYING;md5=5cc804625b8b491b6b4312f0c9cb5efa"

SRCREV = "v1.2"
PR = "r0"
PV = "1.2"

SRC_URI = "git://git.criu.org/crtools.git;protocol=git \
	file://0001-Makefile-Fix-hardcoding.patch"

DEPENDS += "protobuf-c-native protobuf-c"

S = "${WORKDIR}/git"

ARMV_armv7a = "ARMV=7"
ARMV_armv6 = "ARMV=6"
ARMV ?= ""
EXTRA_OEMAKE += "ARCH=${TARGET_ARCH} WERROR=0 ${ARMV}"

do_compile () {
	unset CFLAGS
	unset LDFLAGS
	oe_runmake
}

do_install () {
	mkdir -p ${D}/${bindir}
	install -m 755 ${S}/criu ${D}/${bindir}/criu
}
