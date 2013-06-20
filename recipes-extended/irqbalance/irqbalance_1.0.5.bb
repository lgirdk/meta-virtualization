#
# Copyright (C) 2013 Wind River Systems, Inc.
#

require irqbalance.inc

PR = "r0"

SRC_URI[md5sum] = "b6403fa067c96adce448a48c9993654d"
SRC_URI[sha256sum] = "1123e75224b9c0b63ac85892e920bc4a9c76211278ea3d5d4bcbbde44815685c"

SRC_URI = "http://irqbalance.googlecode.com/files/irqbalance-${PV}.tar.gz \
           file://add-initscript.patch \
          "
