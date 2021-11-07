#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

SRCREV = "a97266548398870c2dde034e48a8c9e3c1893acb"
PV = "1.8.0+git${SRCPV}"

SRC_URI = "git://github.com/Irqbalance/irqbalance;branch=master;protocol=https \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://irqbalanced.service \
          "

S = "${WORKDIR}/git"

CFLAGS += "-Wno-error=format-security"
