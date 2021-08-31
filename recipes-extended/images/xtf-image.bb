require recipes-extended/images/xen-image-minimal.bb
DESCRIPTION = "A minimal Xen Test Framework (XTF) image for testing the Xen hypervisor"

# To run XTF tests with an image built for the qemux86-64 MACHINE:
#
#   runqemu xtf-image nographic slirp
#       (login as root)
#       # xtf-runner expects to be run from the top of the tests directory:
#       cd /usr/libexec/xtf
#       # list the tests available for PV guest types:
#       ./xtf-runner --list pv
#       # run an example test:
#       ./xtf-runner test-pv64-livepatch-priv-check

IMAGE_NAME="xtf"

IMAGE_INSTALL:append = " xtf"

QB_DEFAULT_FSTYPE_x86-64 = "wic"

# Set the dom0 memory level lower than that assigned to qemu so that Xen has
# some available memory for allocating to the XTF microkernel guests to run:
QB_MEM = "-m 400"
SYSLINUX_XEN_ARGS:append = " dom0_mem=256M"
