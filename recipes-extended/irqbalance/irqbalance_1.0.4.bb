#
# Copyright (C) 2013 Wind River Systems, Inc.
#
SUMMARY = "IRQ allocation daemon"
DESCRIPTION = "A daemon to balance interrupts across multiple CPUs, \
which can lead to better performance and IO balance on SMP systems."

HOMEPAGE = "http://code.google.com/p/irqbalance/"
BUGTRACKER = "http://code.google.com/p/irqbalance/issues/list"

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f \
		    file://irqbalance.c;beginline=6;endline=8;md5=b94e153694672307b503b1bc87dc9e24 \
		   "

DEPENDS = "glib-2.0"
SRC_URI = "http://irqbalance.googlecode.com/files/irqbalance-${PV}.tar.bz2 \
	   file://add-initscript.patch \
	  "

SRC_URI[md5sum] = "f7ca283c46331db73f27e686a643dcfb"
SRC_URI[sha256sum] = "15725edf4a6f20258620cbd05ebf02d0c25aadd5ffa4871ef8507c9215021c43"

INITSCRIPT_NAME = "irqbalanced"
INITSCRIPT_PARAMS = "defaults"

inherit autotools
inherit update-rc.d

EXTRA_OECONF = "--program-transform-name= \
	        --with-sysroot=${STAGING_DIR_TARGET} \
	       "

do_install () {
        oe_runmake 'DESTDIR=${D}' install
        install -d ${D}${sysconfdir}/init.d
        cat ${S}/irqbalance.init | sed -e's,/usr/sbin,${sbindir},g' > ${D}${sysconfdir}/init.d/irqbalanced
        chmod 755 ${D}${sysconfdir}/init.d/irqbalanced
}
