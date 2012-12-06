SUMMARY = "CRIU"
DESCRIPTION = "Checkpoint/Restore In Userspace, or CRIU, is a software tool for Linux operating system. Using this tool, you can freeze a running application (or part of it) and checkpoint it to a hard drive as a collection of files. You can then use the files to restore and run the application from the point it was frozen at. The distinctive feature of the CRIU project is that it is mainly implemented in user space"
HOMEPAGE = "http://criu.org"
SECTION = "console/tools"
LICENSE = "GPLv2"

LIC_FILES_CHKSUM = "file://COPYING;md5=12920dfe6b35a0758155f0e62878b366"

SRCREV = "d81c9a4618db2f618bdb8e207b7f0fec631c7142"
PR = "r0"
PV = "0.2+git${SRCPV}"

SRC_URI = "git://git.criu.org/crtools.git;protocol=git \
	file://0001-Fixed-hardcoding.patch"

DEPENDS += "protobuf-c-native protobuf-c"

S = "${WORKDIR}/git"

EXTRA_OEMAKE += "ARCH=${TARGET_ARCH} WERROR=0"

do_compile () {
	   oe_runmake
}

do_install () {
	   mkdir -p ${D}/${bindir}
	   install -m 755 ${S}/crtools ${D}/${bindir}/crtools
}