FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_append_raspberrypi4-64 = " \
    file://defconfig_raspberrypi4-64 \
    "

do_post_patch_append_raspberrypi4-64() {
    if [ ! -e "${WORKDIR}/defconfig" ] ; then
        cp "${WORKDIR}/defconfig_raspberrypi4-64" "${WORKDIR}/defconfig"
    fi
}
