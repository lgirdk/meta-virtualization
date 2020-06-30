inherit sdcard_image-rpi

# This image class should be retired and folded into sdcard_image-rpi.bbclass
# when it has support for adding binaries to the boot partition that are not
# present in the root partition filesystem: ie. the hypervisor (xen) image.

do_image_rpi_xen_sdimg[depends] = " \
    parted-native:do_populate_sysroot \
    mtools-native:do_populate_sysroot \
    dosfstools-native:do_populate_sysroot \
    virtual/kernel:do_deploy \
    ${IMAGE_BOOTLOADER}:do_deploy \
    rpi-config:do_deploy \
    ${@bb.utils.contains('MACHINE_FEATURES', 'armstub', 'armstubs:do_deploy', '' ,d)} \
    ${@bb.utils.contains('RPI_USE_U_BOOT', '1', 'u-boot:do_deploy', '',d)} \
    ${@bb.utils.contains('RPI_USE_U_BOOT', '1', 'u-boot-default-script:do_deploy', '',d)} \
    xen:do_deploy \
    "

do_image_rpi_xen_sdimg[recrdeps] = "do_build"

IMAGE_TYPEDEP_rpi-xen-sdimg = "${SDIMG_ROOTFS_TYPE}"

SDIMG = "${IMGDEPLOYDIR}/${IMAGE_NAME}${IMAGE_NAME_SUFFIX}.rpi-xen-sdimg"

# Take from: IMAGE_CMD_rpi-sdimg from meta-raspberrypi, current as of: 44d7dd0e
# with modification to include the Xen hypervisor binary in the boot partition.
IMAGE_CMD_rpi-xen-sdimg () {

    # Align partitions
    BOOT_SPACE_ALIGNED=$(expr ${BOOT_SPACE} + ${IMAGE_ROOTFS_ALIGNMENT} - 1)
    BOOT_SPACE_ALIGNED=$(expr ${BOOT_SPACE_ALIGNED} - ${BOOT_SPACE_ALIGNED} % ${IMAGE_ROOTFS_ALIGNMENT})
    SDIMG_SIZE=$(expr ${IMAGE_ROOTFS_ALIGNMENT} + ${BOOT_SPACE_ALIGNED} + $ROOTFS_SIZE)

    echo "Creating filesystem with Boot partition ${BOOT_SPACE_ALIGNED} KiB and RootFS $ROOTFS_SIZE KiB"

    # Check if we are building with device tree support
    DTS="${KERNEL_DEVICETREE}"

    # Initialize sdcard image file
    dd if=/dev/zero of=${SDIMG} bs=1024 count=0 seek=${SDIMG_SIZE}

    # Create partition table
    parted -s ${SDIMG} mklabel msdos
    # Create boot partition and mark it as bootable
    parted -s ${SDIMG} unit KiB mkpart primary fat32 ${IMAGE_ROOTFS_ALIGNMENT} $(expr ${BOOT_SPACE_ALIGNED} \+ ${IMAGE_ROOTFS_ALIGNMENT})
    parted -s ${SDIMG} set 1 boot on
    # Create rootfs partition to the end of disk
    parted -s ${SDIMG} -- unit KiB mkpart primary ext2 $(expr ${BOOT_SPACE_ALIGNED} \+ ${IMAGE_ROOTFS_ALIGNMENT}) -1s
    parted ${SDIMG} print

    # Create a vfat image with boot files
    BOOT_BLOCKS=$(LC_ALL=C parted -s ${SDIMG} unit b print | awk '/ 1 / { print substr($4, 1, length($4 -1)) / 512 /2 }')
    rm -f ${WORKDIR}/boot.img
    mkfs.vfat -F32 -n "${BOOTDD_VOLUME_ID}" -S 512 -C ${WORKDIR}/boot.img $BOOT_BLOCKS
    mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/bcm2835-bootfiles/* ::/ || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/bcm2835-bootfiles/* into boot.img"
    if [ "${@bb.utils.contains("MACHINE_FEATURES", "armstub", "1", "0", d)}" = "1" ]; then
        mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/armstubs/${ARMSTUB} ::/ || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/armstubs/${ARMSTUB} into boot.img"
    fi
    if test -n "${DTS}"; then
        # Copy board device trees to root folder
        for dtbf in ${@split_overlays(d, True)}; do
            dtb=`basename $dtbf`
            mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/$dtb ::$dtb || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/$dtb into boot.img"
        done

        # Copy device tree overlays to dedicated folder
        mmd -i ${WORKDIR}/boot.img overlays
        for dtbf in ${@split_overlays(d, False)}; do
            dtb=`basename $dtbf`
            mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/$dtb ::overlays/$dtb || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/$dtb into boot.img"
        done
    fi
    if [ "${RPI_USE_U_BOOT}" = "1" ]; then
        mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/u-boot.bin ::${SDIMG_KERNELIMAGE} || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/u-boot.bin into boot.img"
        mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/boot.scr ::boot.scr || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/boot.scr into boot.img"
        if [ ! -z "${INITRAMFS_IMAGE}" -a "${INITRAMFS_IMAGE_BUNDLE}" = "1" ]; then
            mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE}-${INITRAMFS_LINK_NAME}.bin ::${KERNEL_IMAGETYPE} || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE}-${INITRAMFS_LINK_NAME}.bin into boot.img"
        else
            mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE} ::${KERNEL_IMAGETYPE} || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE} into boot.img"
        fi
    else
        if [ ! -z "${INITRAMFS_IMAGE}" -a "${INITRAMFS_IMAGE_BUNDLE}" = "1" ]; then
            mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE}-${INITRAMFS_LINK_NAME}.bin ::${SDIMG_KERNELIMAGE} || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE}-${INITRAMFS_LINK_NAME}.bin into boot.img"
        else
            mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE} ::${SDIMG_KERNELIMAGE} || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/${KERNEL_IMAGETYPE} into boot.img"
        fi
    fi
    # -- Begin Xen deploy modification
    mcopy -v -i ${WORKDIR}/boot.img -s ${DEPLOY_DIR_IMAGE}/xen-${MACHINE} ::xen || bbfatal "mcopy cannot copy ${DEPLOY_DIR_IMAGE}/xen-${MACHINE} into boot.img"
    # -- End Xen deploy modification

    if [ -n "${FATPAYLOAD}" ] ; then
        echo "Copying payload into VFAT"
        for entry in ${FATPAYLOAD} ; do
            # use bbwarn instead of bbfatal to stop aborting on vfat issues like not supporting .~lock files
            mcopy -v -i ${WORKDIR}/boot.img -s ${IMAGE_ROOTFS}$entry :: || bbwarn "mcopy cannot copy ${IMAGE_ROOTFS}$entry into boot.img"
        done
    fi

    # Add stamp file
    echo "${IMAGE_NAME}" > ${WORKDIR}/image-version-info
    mcopy -v -i ${WORKDIR}/boot.img ${WORKDIR}/image-version-info :: || bbfatal "mcopy cannot copy ${WORKDIR}/image-version-info into boot.img"

    # Deploy vfat partition
    if [ "${SDIMG_VFAT_DEPLOY}" = "1" ]; then
        cp ${WORKDIR}/boot.img ${IMGDEPLOYDIR}/${SDIMG_VFAT}
        ln -sf ${SDIMG_VFAT} ${SDIMG_LINK_VFAT}
    fi

    # Burn Partitions
    dd if=${WORKDIR}/boot.img of=${SDIMG} conv=notrunc seek=1 bs=$(expr ${IMAGE_ROOTFS_ALIGNMENT} \* 1024)
    # If SDIMG_ROOTFS_TYPE is a .xz file use xzcat
    if echo "${SDIMG_ROOTFS_TYPE}" | egrep -q "*\.xz"
    then
        xzcat ${SDIMG_ROOTFS} | dd of=${SDIMG} conv=notrunc seek=1 bs=$(expr 1024 \* ${BOOT_SPACE_ALIGNED} + ${IMAGE_ROOTFS_ALIGNMENT} \* 1024)
    else
        dd if=${SDIMG_ROOTFS} of=${SDIMG} conv=notrunc seek=1 bs=$(expr 1024 \* ${BOOT_SPACE_ALIGNED} + ${IMAGE_ROOTFS_ALIGNMENT} \* 1024)
    fi
}
