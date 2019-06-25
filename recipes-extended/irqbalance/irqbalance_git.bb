#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

# commit tagged as version 1.5.0
#
SRCREV = "e783d132e96a7ccc2a60ac8b87802ab782bb27be"
PV = "1.5.0"

SRC_URI = "git://github.com/Irqbalance/irqbalance \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://irqbalanced.service \
          "

S = "${WORKDIR}/git"
