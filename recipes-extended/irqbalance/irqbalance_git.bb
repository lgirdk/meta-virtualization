#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

# commit tagged as version 1.7.0
#
SRCREV = "641edc6f5d56f1b3eb8be0fa8a8e9b6a22e53218"
PV = "1.7.0"

SRC_URI = "git://github.com/Irqbalance/irqbalance;branch=master \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://irqbalanced.service \
          "

S = "${WORKDIR}/git"
