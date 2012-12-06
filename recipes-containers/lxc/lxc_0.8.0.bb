DESCRIPTION = "lxc aims to use these new functionnalities to provide an userspace container object"
SECTION = "console/utils"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=fbc093901857fcd118f065f900982c24"
PRIORITY = "optional"
PR = "r2"
DEPENDS = "libxml2 libcap"
RDEPENDS_${PN} = " \
		rsync \
		gzip \
		libcap-bin \
		bridge-utils \
		dnsmasq \
		perl-module-strict \
		perl-module-getopt-long \
		perl-module-vars \
		perl-module-warnings-register \
		perl-module-exporter \
		perl-module-constant \
		perl-module-overload \
		perl-module-exporter-heavy \
"

SRC_URI = "http://lxc.sourceforge.net/download/lxc/${PN}-${PV}.tar.gz \
	file://noldconfig.patch \
	"
SRC_URI[md5sum] = "7304fa57146ce687f749b5df876bb20d"
SRC_URI[sha256sum] = "eac833730b94e423d4bef6834bc4a716437d2abd6ab8b24334c506aaaa08692c"

S = "${WORKDIR}/${PN}-${PV}"

PACKAGECONFIG ??= ""
PACKAGECONFIG[doc] = "--enable-doc,--disable-doc"
PACKAGECONFIG[rpath] = "--enable-rpath,--disable-rpath"
PACKAGECONFIG[apparmour] = "--enable-apparmor,--disable-apparmor,apparmor,apparmor"

inherit autotools

FILES_${PN}-dbg += "${libexecdir}/lxc/.debug"
