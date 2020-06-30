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
