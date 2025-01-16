SUMMARY = "User-mode networking daemons for virtual machines and namespaces"
LICENSE = "GPL-2.0-or-later & BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-or-later.txt;md5=3d26203303a722dedc6bf909d95ba815 \
                    file://LICENSES/BSD-3-Clause.txt;md5=c6c623ff088c13278097b9f79637ca77"

DEPENDS += "coreutils-native"

EXTRA_OEMAKE += "\
    'DESTDIR=${D}' \
    'prefix=${prefix}' \
    'bindir=${bindir}' \
    'sharedir=${datadir}' \
    'sysconfdir=${sysconfdir}' \
    "

SRC_URI = "git://passt.top/passt;branch=master"

PV = "2024_12_11+git"
SRCREV = "1b95bd6fa1148f3609bebf7b2bcd6d47376e61a6"

S = "${WORKDIR}/git"

do_configure () {
	:
}

do_compile () {
	oe_runmake
}

do_install () {
	oe_runmake install
}

