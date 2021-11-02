#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

# commit tagged as version 1.6.0
#
SRCREV = "b47eea84cbb93f533b0cba2f1aaf9ca4da8706b9"
PV = "1.6.0"

SRC_URI = "git://github.com/Irqbalance/irqbalance;branch=master;protocol=https \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://irqbalanced.service \
          "

S = "${WORKDIR}/git"
