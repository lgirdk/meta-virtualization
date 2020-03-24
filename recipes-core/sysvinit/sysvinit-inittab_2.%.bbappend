require ${@bb.utils.contains('DISTRO_FEATURES', 'xen', 'sysvinit-inittab_xen.inc', '', d)}

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI += "file://getty-wrapper"

do_install_append() {
    install -d ${D}${base_sbindir}
    install -m 0755 ${WORKDIR}/getty-wrapper ${D}${base_sbindir}/getty-wrapper
}
FILES_${PN} += "${base_sbindir}/getty-wrapper"
