FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

# Disable busybox config changes - to be controlled from distro layer instead.

# SRC_URI += " \
# 	    file://lspci.cfg \
# 	    file://lsusb.cfg \
# 	    file://mdev.cfg \
# 	    file://mount-cifs.cfg \
# 	    file://ps-extras.cfg \
# 	    file://getopt.cfg \
#            "
