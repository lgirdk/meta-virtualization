DESCRIPTION = "OpenBSD Netcat"
HOMEPAGE = "http://code.google.com/p/openbsd-netcat/"
SECTION = "console/network"
LICENSE = "BSD-3-Clause"
PR = "r0"

SRCREV = "5"

SRC_URI = "svn://openbsd-netcat.googlecode.com/svn;module=trunk;protocol=http"
S = "${WORKDIR}/trunk"

inherit update-alternatives gettext

do_configure[noexec] = "1"

do_compile() {
	cd ${S}
	oe_runmake
}

do_install() {
	install -d ${D}${bindir}
	install -m 755 ${S}/nc ${D}${bindir}/nc.${BPN}
}

ALTERNATIVE_${PN} = "nc"
ALTERNATIVE_PRIORITY = "101"

BBCLASSEXTEND = "nativesdk"
