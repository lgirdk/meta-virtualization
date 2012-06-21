DESCRIPTION = "A minimal xen image"
IMAGE_INSTALL = "task-core-boot xen-minimal dropbear mdadm"

IMAGE_LINGUAS = " "
LICENSE = "MIT"

inherit core-image

IMAGE_ROOTFS_SIZE = "8192"

# remove not needed ipkg informations
ROOTFS_POSTPROCESS_COMMAND += "remove_packaging_data_files ; "

require xen-bootimg.inc
