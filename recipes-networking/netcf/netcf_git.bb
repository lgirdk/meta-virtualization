SUMMARY = "netcf"
DESCRIPTION = "netcf is a cross-platform network configuration library."
HOMEPAGE = "https://fedorahosted.org/netcf/"
SECTION = "console/tools"
LICENSE = "LGPLv2.1"

LIC_FILES_CHKSUM = "file://COPYING;md5=bbb461211a33b134d42ed5ee802b37ff"

SRCREV = "2b0d9ca226c13d7150382367f62b256bdb2db5ef"
PR = "r0"
PV = "0.2.2+git${SRCPV}"

SRC_URI = "git://git.fedorahosted.org/netcf.git;protocol=git"

DEPENDS += "augeas libnl libxslt libxml2"

S = "${WORKDIR}/git"

inherit gettext autotools

do_configure_prepend() {
	cd ${S}
	./bootstrap
}

