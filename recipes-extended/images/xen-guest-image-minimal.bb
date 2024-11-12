DESCRIPTION = "A Xen guest image."

inherit core-image features_check deploy
inherit kernel-artifact-names

IMAGE_INSTALL += " \
    packagegroup-core-boot \
    ${@bb.utils.contains('MACHINE_FEATURES', 'acpi', '${XEN_ACPI_PROCESSOR_MODULE}', '', d)} \
    "

XEN_ACPI_PROCESSOR_MODULE = ""
XEN_ACPI_PROCESSOR_MODULE:x86    = "kernel-module-xen-acpi-processor"
XEN_ACPI_PROCESSOR_MODULE:x86-64 = "kernel-module-xen-acpi-processor"

IMAGE_INSTALL += "${@bb.utils.contains('IMAGE_FEATURES', 'x11', ' xf86-video-fbdev', '', d)}"

# Install xf86-video-vesa on x86 platforms.
IMAGE_INSTALL:append:x86-64 = "${@bb.utils.contains('IMAGE_FEATURES', 'x11', ' xf86-video-vesa', '', d)}"
IMAGE_INSTALL:append:x86    = "${@bb.utils.contains('IMAGE_FEATURES', 'x11', ' xf86-video-vesa', '', d)}"

REQUIRED_DISTRO_FEATURES += "${@bb.utils.contains('IMAGE_FEATURES', 'x11', ' x11', '', d)} xen"

LICENSE = "MIT"

# Send console messages to xen console
APPEND += "console=hvc0"

IMAGE_FSTYPES = "tar.bz2 ext4 ext4.qcow2"

XEN_GUEST_AUTO_BUNDLE ?= ""

# When a xen-guest-image-minimal is built with the
# XEN_GUEST_AUTO_BUNDLE varaible set to True, a configuration file for
# automatic guest bundling will be generated and the guest bundled
# automatically when a xen  host image is built.
do_deploy() {
    if [ -n "${XEN_GUEST_AUTO_BUNDLE}" ]; then
	outname="xen-guest-bundle-${IMAGE_BASENAME}${IMAGE_MACHINE_SUFFIX}-${IMAGE_VERSION_SUFFIX}.cfg"
cat <<EOF >>${DEPLOYDIR}/$outname
name = "xen-guest"
memory = 512
vcpus = 1
disk = ['file:${IMAGE_LINK_NAME}.ext4,xvda,rw']
vif = ['bridge=xenbr0']
kernel = "${KERNEL_IMAGETYPE}"
extra = "root=/dev/xvda ro ip=dhcp"
EOF
    fi
}

addtask deploy after do_compile
