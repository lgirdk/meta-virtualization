DESCRIPTION = "DMI (Desktop Management Interface) table related utilities"
HOMEPAGE = "http://www.nongnu.org/dmidecode/"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=393a5ca445f6965873eca0259a17f833"
SECTION = "console/tools"

PR = "r0"

SRC_URI = "http://download.savannah.gnu.org/releases/${PN}/${PN}-${PV}.tar.gz"

SRC_URI[md5sum] = "9fddbbc3e330bee5950b8b5d424a57cb"
SRC_URI[sha256sum] = "d99ee210ecbd6caff2cf6d95dec6d88818c16cec1a08ed0963fd8702f6af8b59"

EXTRA_OEMAKE =+ "prefix=${prefix}  \
                 includedir=${includedir} \
                 libdir=${libdir} \
                 sbindir=${sbindir} \
                 DESTDIR=${D} \
                 'CC=${CC}' \
                 'CFLAGS=${CFLAGS}' \
                 "

do_install() {
    oe_runmake install
    install -d ${D}${sbindir}
}
