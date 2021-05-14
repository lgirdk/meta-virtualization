DESCRIPTION = "This is a cross development C compiler, assembler and linker environment for the production of 8086 executables (Optionally MSDOS COM)"
HOMEPAGE = "http://www.debath.co.uk/dev86/"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b"
SECTION = "console/tools"

BASE_PV="0.16.21"
PV = "${BASE_PV}+git${SRCPV}"
SRCREV = "e254e0b19651d3b8a20225b40281c9974a95dec4"
SRC_URI = "git://github.com/jbruchon/${BPN}.git;protocol=https \
    file://0001-cpp-Makefile-respect-LDFLAGS-when-building-bcc-cpp.patch \
    file://0003-cpp-update-token1.tok-to-make-new-gperf-happy-regen..patch \
    file://0004-regen-token2.h-token1.h-with-gperf-3.1.patch \
"
SRC_URI_append_class-target = " \
    file://0002-Makefile-use-ifdefg-from-dev86-native-instead-of-tar.patch \
"

S = "${WORKDIR}/git"

DEPENDS = "gperf-native dev86-native"

BBCLASSEXTEND = "native"
EXTRA_OEMAKE = "VERSION=${BASE_PV} PREFIX=${prefix} DIST=${D} LDFLAGS='${LDFLAGS}'"

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

do_install_append_class-native() {
        install -v -m 755 ${B}/ifdefg ${D}${bindir}
}

COMPATIBLE_HOST = "(i.86|x86_64).*-linux"
FILES_${PN} += "${libdir}/bcc"

INSANE_SKIP_${PN} = "already-stripped"
