DESCRIPTION = "This is a cross development C compiler, assembler and linker environment for the production of 8086 executables (Optionally MSDOS COM)"
HOMEPAGE = "http://www.debath.co.uk/dev86/"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
SECTION = "console/tools"

SRCREV = "c6f36cbafa979710b809f117562773dbd6825918"
SRC_URI = "git://github.com/lkundrak/${BPN}.git;protocol=https"

S = "${WORKDIR}/git"

DEPENDS = "gperf-native"

BBCLASSEXTEND = "native"
EXTRA_OEMAKE = "VERSION=${PV} PREFIX=${prefix} DIST=${D} LDFLAGS='${LDFLAGS}'"

do_compile() {
	# ${S}/Makefile does respect LDFLAGS, but ${S}/cpp/Makefile doesn't when building bcc-cpp
	sed -i 's#$(CC) $(CFLAGS) -o bcc-cpp#$(CC) $(CFLAGS) $(LDFLAGS) -o bcc-cpp#g' ${S}/cpp/Makefile
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
