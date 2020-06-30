# Make sure Xen mode is enabled in qemu
PACKAGECONFIG_append_pn-qemu = " xen"

# For builds for ARM platforms, enable fdt
PACKAGECONFIG_append_pn-qemu_arm = " fdt"
PACKAGECONFIG_append_pn-qemu_aarch64 = " fdt"

# Raspberry Pi settings
#  - Xen guest console
KERNEL_CONSOLE = "hvc0"
SERIAL_CONSOLES = "115200;hvc0"
#  - Xen uses u-boot for configuration and uses the uart
RPI_USE_U_BOOT = "1"
ENABLE_UART = "1"
# Build the bootable SD card image
IMAGE_CLASSES_append_raspberrypi4-64 = " sdcard_image-rpi-xen"
IMAGE_FSTYPES_append_raspberrypi4-64 = " rpi-xen-sdimg"
# Align kernel version with current meta-virtualization kernel version
PREFERRED_VERSION_linux-raspberrypi ?= "5.4.%"
