# Enable use of the linux-yocto 5.10 kernel for the Raspberry Pi 4
KBRANCH_raspberrypi4-64 ?= "v5.10/standard/bcm-2xxx-rpi"
KMACHINE_raspberrypi4-64 ?= "bcm-2xxx-rpi4"
COMPATIBLE_MACHINE_raspberrypi4-64 = "(raspberrypi4-64)"

require linux-yocto_xen-rpi.inc
