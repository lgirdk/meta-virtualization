# For a Xen-enabled distro on the Raspberry Pi, override the contents of cmdline.txt
# with Xen-on-ARM-specific command line options

KBRANCH_raspberrypi4-64 ?= "standard/bcm-2xxx-rpi"
KMACHINE_raspberrypi4-64 ?= "bcm-2xxx-rpi4"
COMPATIBLE_MACHINE_raspberrypi4-64 = "(raspberrypi4-64)"

require linux-yocto_xen-rpi.inc
