FILESEXTRAPATHS:prepend := "${THISDIR}/busybox-initrd:${COREBASE}/meta/recipes-core/busybox/busybox:${COREBASE}/meta/recipes-core/busybox/files:"

def get_busybox_pv(d):
    import re
    corebase = d.getVar('COREBASE')
    bb_dir = os.path.join(corebase, 'meta', 'recipes-core', 'busybox')
    if os.path.isdir(bb_dir):
        re_bb_name = re.compile(r"busybox_([0-9.]*)\.bb")
        for bb_file in os.listdir(bb_dir):
            result = re_bb_name.match(bb_file)
            if result:
                return result.group(1)
    bb.fatal("Cannot find busybox recipe in %s" % bb_dir)

PV := "${@get_busybox_pv(d)}"

require recipes-core/busybox/busybox_${PV}.bb

SRC_URI += "file://init.cfg \
            file://mdev.cfg \
            file://runx.cfg \
            ${@bb.utils.contains('DISTRO_FEATURES', 'vmsep', 'file://static.cfg', '', d)} \
            file://initrd.cfg"

S = "${WORKDIR}/busybox-${PV}"

# override security-flags settings, we have some warnings to ignore
SECURITY_STRINGFORMAT = ""

# we do this to get the target binary available to recipes that
# depend on busybox
SYSROOT_DIRS += "/bin"
BUSYBOX_SPLIT_SUID = "0"

FILES:${PN} += "${sysconfdir}/init.d/*"
