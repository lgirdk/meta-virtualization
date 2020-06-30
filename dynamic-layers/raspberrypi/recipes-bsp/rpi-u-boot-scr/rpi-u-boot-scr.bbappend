FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

RPI_DOM0_MEM ??= "256M"
RPI_DEBUG_XEN_ARGS ??= "sync_console bootscrub=0"

SRC_URI += "file://boot.cmd.xen.in"

# If the distro is Xen enabled, override the default boot.cmd.in with the
# alternative boot.cmd.xen.in from this layer, with variables subsitution here
do_compile_append() {
    if [ "${@bb.utils.contains('DISTRO_FEATURES', 'xen', 'yes', 'no', d)}" = "yes" ]; then
        sed -e 's/@@RPI_DOM0_MEM@@/${RPI_DOM0_MEM}/' \
            -e 's/@@RPI_DEBUG_XEN_ARGS@@/${RPI_DEBUG_XEN_ARGS}/' \
                "${WORKDIR}/boot.cmd.xen.in" > "${WORKDIR}/boot.cmd"
        mkimage -A arm -T script -C none -n "Boot script" -d "${WORKDIR}/boot.cmd" boot.scr
    fi
}
