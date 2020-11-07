DESCRIPTION = "Init scripts for use on cloud images"
HOMEPAGE = "https://github.com/canonical/cloud-init"
SECTION = "devel/python"
LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c6dd79b6ec2130a3364f6fa9d6380408"

SRCREV = "1431c8a1bddaabf85e1bbb32bf316a3aef20036e"
SRC_URI = "git://github.com/canonical/cloud-init \
    file://cloud-init-source-local-lsb-functions.patch \
    file://0001-setup.py-check-for-install-anywhere-in-args.patch \
    file://0001-setup.py-respect-udevdir-variable.patch \
"

S = "${WORKDIR}/git"

DISTUTILS_INSTALL_ARGS_append = " ${@bb.utils.contains('DISTRO_FEATURES', 'sysvinit', '--init-system=sysvinit_deb', '', d)}"
DISTUTILS_INSTALL_ARGS_append = " ${@bb.utils.contains('DISTRO_FEATURES', 'systemd', '--init-system=systemd', '', d)}"

do_install_append() {
    ln -s ${libdir}/${BPN}/uncloud-init ${D}${sysconfdir}/cloud/uncloud-init
    ln -s ${libdir}/${BPN}/write-ssh-key-fingerprints ${D}${sysconfdir}/cloud/write-ssh-key-fingerprints
}

inherit pkgconfig
inherit setuptools3 
inherit update-rc.d
inherit systemd

# setup.py calls "pkg-config systemd --variable=systemdsystemunitdir" and needs to find our systemd
DEPENDS += "${@bb.utils.contains('DISTRO_FEATURES', 'systemd', 'systemd', '', d)}"

inherit python3native

PACKAGES += "${PN}-systemd"

FILES_${PN} += "${sysconfdir}/* \
                ${datadir}/*"

FILES_${PN}-systemd += "${systemd_unitdir}/*"
RDEPENDS_${PN}-systemd += " ${PN}"

INITSCRIPT_PACKAGES = "${PN}"
INITSCRIPT_NAME_${BPN} = "cloud-init"

DEPENDS += "python3-pyyaml-native \
            python3-requests-native \
            python3-jinja2-native \
           "

RDEPENDS_${PN} = "python3 \
                  python3-jinja2 \
                  python3-configobj \
                  python3-requests \
                  python3-jsonpatch \
                  python3-jsonschema \
                  python3-pyyaml \
                  python3-oauthlib \
                 "

