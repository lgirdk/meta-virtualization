DESCRIPTION = "A toolkit to interact with the virtualization capabilities of recent versions of Linux." 
HOMEPAGE = "http://libvirt.org"
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=fb919cc88dbe06ec0b0bd50e001ccf1f"
SECTION = "console/tools"
PR = "r1"

DEPENDS="bridge-utils gnutls libxml2 lvm2 avahi polkit parted curl libpcap util-linux e2fsprogs xen pm-utils iptables ebtables dnsmasq"

RDEPENDS_libvirt-libvirtd = "bridge-utils iptables pm-utils dnsmasq xen"

SRC_URI = "http://libvirt.org/sources/libvirt-${PV}.tar.gz \
	file://libvirtd.sh \
	file://libvirtd.conf"

SRC_URI[md5sum] = "a424bb793521e637349da47e93dd5fff"
SRC_URI[sha256sum] = "5b81d9f054ee4b395b0ab4f59845d082baaa6d6c2a038c966309156dde16e11d"

inherit autotools gettext update-rc.d

# Trimmed down version for Xen daemon server
EXTRA_OECONF="--with-xenapi=no --with-libxl=${STAGING_DIR_TARGET}/lib --with-xen=yes --with-xen-inotify=yes --with-qemu=no --with-uml=no --with-openvz=no --with-vmware=no --with-phyp=no  --with-libvirtd -with-vbox=no --with-esx=no --with-hyperv=no --with-test=yes --with-remote=yes --with-macvtap=no"

CACHED_CONFIGUREVARS += "\
ac_cv_path_XMLLINT=/usr/bin/xmllint \
ac_cv_path_XMLCATLOG=/usr/bin/xmlcatalog \
ac_cv_path_AUGPARSE=/usr/bin/augparse \
ac_cv_path_DNSMASQ=/usr/bin/dnsmasq \
ac_cv_path_BRCTL=/usr/sbin/brctl \
ac_cv_path_TC=/sbin/tc \
ac_cv_path_UDEVADM=/sbin/udevadm \
ac_cv_path_MODPROBE=/sbin/modprobe \
ac_cv_path_IP_PATH=/bin/ip \
ac_cv_path_IPTABLES_PATH=/usr/sbin/iptables \
ac_cv_path_IP6TABLES_PATH=/usr/sbin/ip6tables \
ac_cv_path_MOUNT=/bin/mount \
ac_cv_path_UMOUNT=/bin/umount \
ac_cv_path_MKFS=/usr/sbin/mkfs \
ac_cv_path_SHOWMOUNT=/usr/sbin/showmount \
ac_cv_path_PVCREATE=/usr/sbin/pvcreate \
ac_cv_path_VGCREATE=/usr/sbin/vgcreate \
ac_cv_path_LVCREATE=/usr/sbin/lvcreate \
ac_cv_path_PVREMOVE=/usr/sbin/pvremove \
ac_cv_path_VGREMOVE=/usr/sbin/vgremove \
ac_cv_path_LVREMOVE=/usr/sbin/lvremove \
ac_cv_path_LVCHANGE=/usr/sbin/lvchange \
ac_cv_path_VGCHANGE=/usr/sbin/vgchange \
ac_cv_path_VGSCAN=/usr/sbin/vgscan \
ac_cv_path_PVS=/usr/sbin/pvs \
ac_cv_path_VGS=/usr/sbin/vgs \
ac_cv_path_LVS=/usr/sbin/lvs \
ac_cv_path_PARTED=/usr/sbin/parted \
ac_cv_path_DMSETUP=/usr/sbin/dmsetup"

# Some other possible paths we are not yet setting
#ac_cv_path_RPCGEN=
#ac_cv_path_XSLTPROC=
#ac_cv_path_RADVD=
#ac_cv_path_UDEVSETTLE=
#ac_cv_path_EBTABLES_PATH=
#ac_cv_path_PKG_CONFIG=
#ac_cv_path_ac_pt_PKG_CONFIG
#ac_cv_path_PKCHECK_PATH=
#ac_cv_path_POLKIT_AUTH=
#ac_cv_path_DTRACE=
#ac_cv_path_ISCSIADM=
#ac_cv_path_MSGFMT=
#ac_cv_path_GMSGFMT=
#ac_cv_path_XGETTEXT=
#ac_cv_path_MSGMERGE=
#ac_cv_path_SCRUB=
#ac_cv_path_PYTHON=

ALLOW_EMPTY_${PN} = "1"

PACKAGES =+ "${PN}-libvirtd ${PN}-virsh"

FILES_${PN}-libvirtd = "${sysconfdir}/init.d \
	${sysconfdir}/sysctl.d \
	${sysconfdir}/logrotate.d \
	${sysconfdir}/libvirt/libvirtd.conf \
	${sbindir}/libvirtd"

FILES_${PN}-virsh = "${bindir}/virsh"

INITSCRIPT_PACKAGES = "${PN}-libvirtd"
INITSCRIPT_NAME_${PN}-libvirtd = "libvirtd"
INITSCRIPT_PARAMS_${PN}-libvirtd = "defaults 72"

# Disable the Python tool support
#EXTRA_OECONF += " --with-python=no"
# Enable the Python tool support
require libvirt-python.inc

do_install_append() {
	install -d ${D}/etc/init.d
	install -d ${D}/etc/libvirt

	install -m 0755 ${WORKDIR}/libvirtd.sh ${D}/etc/init.d/libvirtd
	install -m 0644 ${WORKDIR}/libvirtd.conf ${D}/etc/libvirt/libvirtd.conf
}
