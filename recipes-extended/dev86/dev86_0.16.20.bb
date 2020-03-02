DESCRIPTION = "This is a cross development C compiler, assembler and linker environment for the production of 8086 executables (Optionally MSDOS COM)"
HOMEPAGE = "http://www.debath.co.uk/dev86/"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
SECTION = "console/tools"
PR="r0"

SRC_URI="https://github.com/lkundrak/dev86/archive/v${PV}.tar.gz"

SRC_URI[md5sum] = "288af53f256300777efc91d97c082fda"
SRC_URI[sha256sum] = "533f2a0d2ed61223040f27e5cd007a11d969aaf34f6b709ece122b1e6fc50580"

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
INSANE_SKIP_${PN} = "already-stripped"
