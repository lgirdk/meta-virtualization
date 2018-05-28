#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

SRC_URI[md5sum] = "26ee6db57c4509737e541e98773a39f5"
SRC_URI[sha256sum] = "62de71510a2496fcf027efb0b288dd48e53e9efc931fa573c95580cad6264d07"

SRC_URI = "https://github.com/Irqbalance/irqbalance/archive/v${PV}.tar.gz;downloadfilename=irqbalance-${PV}.tar.gz \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://fix-configure-libcap-ng.patch \
           file://irqbalanced.service \
          "
