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
