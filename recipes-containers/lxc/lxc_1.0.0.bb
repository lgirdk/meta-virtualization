DESCRIPTION = "lxc aims to use these new functionnalities to provide an userspace container object"
SECTION = "console/utils"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
PRIORITY = "optional"
PR = "r4"
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

SRC_URI = "http://linuxcontainers.org/downloads/${BPN}-${PV}.tar.gz \
	file://lxc-1.0.0-disable-udhcp-from-busybox-template.patch \
	file://config_network_type-set-macvlan-default-mode-to-priv.patch \
	file://lxc-busybox-follow-symlinks-when-inspecting-busybox-.patch \
	file://network.c-Add-missing-LXC_NET_NONE-option-refactor.patch \
	"
SRC_URI[md5sum] = "87a9d168a6e55326303cce3b2cb7f82e"
SRC_URI[sha256sum] = "0992212ddaad01dfe8c048e130566b73dd5f34191585f36bdac07a4f8a91f3bd"

S = "${WORKDIR}/${BPN}-${PV}"

# Let's not configure for the host distro.
#
EXTRA_OECONF += "--with-distro=${DISTRO}"

PACKAGECONFIG ??= ""
PACKAGECONFIG[doc] = "--enable-doc,--disable-doc,,"
PACKAGECONFIG[rpath] = "--enable-rpath,--disable-rpath,,"
PACKAGECONFIG[apparmour] = "--enable-apparmor,--disable-apparmor,apparmor,apparmor"

inherit autotools pkgconfig

FILES_${PN}-doc = "${mandir} ${infodir}"
# For LXC the docdir only contains example configuration files and should be included in the lxc package
FILES_${PN} += "${docdir}"
FILES_${PN}-dbg += "${libexecdir}/lxc/.debug"

do_install_append() {
	# The /var/cache/lxc directory created by the Makefile
	# is wiped out in volatile, we need to create this at boot.
	rm -rf ${D}${localstatedir}/cache
	install -d ${D}${sysconfdir}/default/volatiles
	echo "d root root 0755 ${localstatedir}/cache/lxc none" \
	     > ${D}${sysconfdir}/default/volatiles/99_lxc

}

pkg_postinst_${PN}() {
	if [ -z "$D" ] && [ -e /etc/init.d/populate-volatile.sh ] ; then
		/etc/init.d/populate-volatile.sh update
	fi
}
