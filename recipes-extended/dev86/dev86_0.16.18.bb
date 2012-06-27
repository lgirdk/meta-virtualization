DESCRIPTION = "This is a cross development C compiler, assembler and linker environment for the production of 8086 executables (Optionally MSDOS COM)"
HOMEPAGE = "http://www.debath.co.uk/dev86/"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
SECTION = "console/tools"
PR="r0"

SRC_URI="http://www.debath.co.uk/dev86/Dev86src-${PV}.tar.gz"

SRC_URI[md5sum] = "f2e06b547397383b2b2650b9c4fd9bab"
SRC_URI[sha256sum] = "049852a83898d3ee0ba97b88e526897ec6eaf0a051f4af1e9e073b1151178ff1"

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


