# Make sure Xen mode is enabled in qemu
PACKAGECONFIG_append_pn-qemu = " xen"

# For builds for ARM platforms, enable fdt
PACKAGECONFIG_append_pn-qemu_arm = " fdt"
PACKAGECONFIG_append_pn-qemu_aarch64 = " fdt"

# Xen on Raspberry Pi 4 64-bit support
XEN_RPI4_64_CONFIG_PATH ??= \
    'dynamic-layers/raspberrypi/conf/distro/include/xen-raspberrypi4-64.inc'
include ${@bb.utils.contains('MACHINE', 'raspberrypi4-64', \
    '${XEN_RPI4_64_CONFIG_PATH}', '', d)}
