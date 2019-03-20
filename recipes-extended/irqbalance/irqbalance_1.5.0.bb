#
# Copyright (C) 2015 Wind River Systems, Inc.
#

require irqbalance.inc

SRC_URI[md5sum] = "3daa34066d28e2ff44fdac9c39952822"
SRC_URI[sha256sum] = "3318eddc03782cfdad22b20eff18eaf378c498c5de286e8cbaa5521ddf4f810b"

SRC_URI = "https://github.com/Irqbalance/irqbalance/archive/v${PV}.tar.gz;downloadfilename=irqbalance-${PV}.tar.gz \
           file://add-initscript.patch \
           file://irqbalance-Add-status-and-reload-commands.patch \
           file://irqbalanced.service \
          "
