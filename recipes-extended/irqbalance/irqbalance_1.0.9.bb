#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

SRC_URI[md5sum] = "30174d3941c5452a1e4ecee394a76ff8"
SRC_URI[sha256sum] = "f1b8115948bb9f0bc36b9d7143ee8be751a294bc189d311408e753acc37169c3"

SRC_URI = "https://github.com/Irqbalance/irqbalance/archive/v1.0.9.tar.gz;downloadfilename=irqbalance-1.0.9.tar.gz \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://fix-configure-libcap-ng.patch \
           file://irqbalanced.service \
          "
