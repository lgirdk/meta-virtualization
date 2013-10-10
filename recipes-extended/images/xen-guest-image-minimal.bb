DESCRIPTION = "A Xen guest image."

inherit core-image

IMAGE_INSTALL += " \
    packagegroup-core-boot \
    kernel-module-xen-acpi-processor \
    "

IMAGE_INSTALL += "${@base_contains('DISTRO_FEATURES', 'x11', ' xf86-video-fbdev', '', d)}"
IMAGE_INSTALL += "${@base_contains('DISTRO_FEATURES', 'x11', ' xf86-video-vesa', '', d)}"

LICENSE = "MIT"

# Send console messages to xen console
APPEND += "console=hvc0"
