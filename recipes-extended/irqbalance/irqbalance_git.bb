#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

# commit tagged as version 1.7.0
#
SRCREV = "bd5aaf5a8613c8eadfbf9f0908fd8260125aae28"
PV = "1.8.0"

SRC_URI = "git://github.com/Irqbalance/irqbalance;branch=master;protocol=https \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://irqbalanced.service \
          "

S = "${WORKDIR}/git"
