DESCRIPTION = "lxc aims to use these new functionnalities to provide an userspace container object"
SECTION = "console/utils"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
PRIORITY = "optional"
PR = "r1"
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
	file://lxc-0.9.0-disable-udhcp-from-busybox-template.patch \
	file://lxc-0.9.0-enable-chroot-chpasswd-functionality-for-busybox-hosts.patch \
	"
SRC_URI[md5sum] = "8552a4479090616f4bc04d8473765fc9"
SRC_URI[sha256sum] = "1e1767eae6cc5fbf892c0e193d25da420ba19f2db203716c38f7cdea3b654120"

S = "${WORKDIR}/${PN}-${PV}"

PACKAGECONFIG ??= ""
PACKAGECONFIG[doc] = "--enable-doc,--disable-doc"
PACKAGECONFIG[rpath] = "--enable-rpath,--disable-rpath"
PACKAGECONFIG[apparmour] = "--enable-apparmor,--disable-apparmor,apparmor,apparmor"

inherit autotools

FILES_${PN}-doc = "${mandir} ${infodir}"
# For LXC the docdir only contains example configuration files and should be included in the lxc package
FILES_${PN} += "${docdir}"
FILES_${PN}-dbg += "${libexecdir}/lxc/.debug"
