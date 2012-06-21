DESCRIPTION = "Utility that enables basic Ethernet frame filtering on a Linux bridge, MAC NAT and brouting."
PRIORITY = "optional"
LICENSE = "GPL"
SECTION = "console/network"
PR = "r0"
LIC_FILES_CHKSUM = "file://COPYING;md5=53b4a999993871a28ab1488fdbd2e73e"

TARGET_CC_ARCH += "${LDFLAGS}"

SRC_URI = " \
	${SOURCEFORGE_MIRROR}/ebtables/ebtables-v${PV}.tar.gz \
	file://installnonroot.patch \
	file://01debian_defaultconfig.patch \
	file://04compensate-for-missing-aligned-u64.patch \
	file://ebtables.init \
	"

SRC_URI[md5sum] = "b880429a6424186728eb57ae80ef878a"
SRC_URI[sha256sum] = "98855f644d43c615a8e663197978e49c95642f46f2bbf8e6f3213af87f8ad6a3"

S = "${WORKDIR}/ebtables-v${PV}"

EXTRA_OEMAKE = " \
	BINDIR=${base_sbindir} \
	MANDIR=${mandir} \
	ETHERTYPESPATH=${sysconfdir} \
	INITDIR=${sysconfdir}/init.d \
	SYSCONFIGDIR=${sysconfdir}/default \
	LIBDIR=${base_libdir}/ebtables \
	'CC=${CC}' \
	'CFLAGS=${CFLAGS}' \
	'LD=${LD}' \
	"

do_install () {
	install -d ${D}${sysconfdir}/init.d
	install -d ${D}${sysconfdir}/default
	install -d ${D}${sysconfdir}/ebtables
	install -d ${D}/sbin
	oe_runmake DESTDIR='${D}' install
	install -m 0755 ${WORKDIR}/ebtables.init ${D}/${sysconfdir}/init.d/ebtables
	mv ${D}${sysconfdir}/default/ebtables-config ${D}${sysconfdir}/default/ebtables
}

CONFFILES_${PN} += "${sysconfdir}/default/ebtables"

inherit update-rc.d

INITSCRIPT_NAME = "ebtables"
INITSCRIPT_PARAMS = "start 41 S . stop 41 6 ."

FILES_${PN}-dbg += "${base_libdir}/ebtables/.debug"
FILES_${PN} += "${base_libdir}/ebtables/*.so"
