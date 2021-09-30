# Enable use of the linux-yocto 5.10 kernel for the Raspberry Pi 4
KBRANCH:raspberrypi4-64 ?= "v5.10/standard/bcm-2xxx-rpi"
KMACHINE:raspberrypi4-64 ?= "bcm-2xxx-rpi4"
COMPATIBLE_MACHINE:raspberrypi4-64 = "(raspberrypi4-64)"

require linux-yocto_xen-rpi.inc
