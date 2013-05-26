DESCRIPTION = "This is a cross development C compiler, assembler and linker environment for the production of 8086 executables (Optionally MSDOS COM)"
HOMEPAGE = "http://www.debath.co.uk/dev86/"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
SECTION = "console/tools"
PR="r0"

SRC_URI="http://www.debath.co.uk/dev86/Dev86src-${PV}.tar.gz"

SRC_URI[md5sum] = "442e98e1afa23fe00d40c5a996385942"
SRC_URI[sha256sum] = "33398b87ca85e2b69e4062cf59f2f7354af46da5edcba036c6f97bae17b8d00e"

S = "${WORKDIR}/dev86-${PV}"

BBCLASSEXTEND = "native"
EXTRA_OEMAKE = "VERSION=${PV} PREFIX=${prefix} DIST=${D}"

do_compile() {

	oe_runmake make.fil
	oe_runmake -f make.fil bcc86 as86 ld86

}

do_install() {

	if [ "${prefix}"=="" ] ; then
		export prefix=/usr
	fi

	oe_runmake install-bcc
	ln -s ../lib/bcc/bcc-cpp ${D}${prefix}/bin/bcc-cpp
	ln -s ../lib/bcc/bcc-cc1 ${D}${prefix}/bin/bcc-cc1

}
COMPATIBLE_HOST = "(i.86|x86_64).*-linux"
FILES_${PN} += "${libdir}/bcc"
