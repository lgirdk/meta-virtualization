FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}_${PV}:${THISDIR}/${PN}-${PV}/${MACHINE}:${THISDIR}/${PN}/${MACHINE}:${THISDIR}/${PN}-${PV}:${THISDIR}/${PN}:"

SRC_URI += "file://busybox-awk-make--F-STR-interpret-escape.patch"
