#
# Copyright (C) 2013 Wind River Systems, Inc.
#

require irqbalance.inc

PR = "r1"

SRC_URI[md5sum] = "f7ca283c46331db73f27e686a643dcfb"
SRC_URI[sha256su] = "15725edf4a6f20258620cbd05ebf02d0c25aadd5ffa4871ef8507c9215021c43"

EXTRA_OECONF += "--with-sysroot=${STAGING_DIR_TARGET}"

SRC_URI = "http://irqbalance.googlecode.com/files/irqbalance-${PV}.tar.bz2 \
           file://add-initscript.patch \
          "
