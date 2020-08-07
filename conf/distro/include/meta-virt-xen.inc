# Make sure Xen mode is enabled in qemu
PACKAGECONFIG_append_pn-qemu = " xen"

# For builds for ARM platforms, enable fdt
PACKAGECONFIG_append_pn-qemu_arm = " fdt"
PACKAGECONFIG_append_pn-qemu_aarch64 = " fdt"

# Raspberry Pi settings
# Xen uses u-boot for configuration and uses the uart
RPI_USE_U_BOOT_raspberrypi4-64 = "1"
ENABLE_UART_raspberrypi4-64 = "1"
# Build the bootable SD card image
IMAGE_CLASSES_append_raspberrypi4-64 = " sdcard_image-rpi"
IMAGE_FSTYPES_append_raspberrypi4-64 = " rpi-sdimg"
# Add Xen to the bootable SD card image
RPI_SDIMG_EXTRA_DEPENDS_append_raspberrypi4-64 = " xen:do_deploy"
DEPLOYPAYLOAD_raspberrypi4-64 = "xen-${MACHINE}:xen"
# We need the GIC enabled for Xen to work
RPI_EXTRA_CONFIG_append_raspberrypi4-64  = "\nenable_gic=1"
# Increase boot partition for space for kernel and Xen
BOOT_SPACE_raspberrypi4-64 = "61440"
# Override the meta-raspberrypi default kernel preference
PREFERRED_PROVIDER_virtual/kernel_raspberrypi4-64 = "linux-yocto-dev"
