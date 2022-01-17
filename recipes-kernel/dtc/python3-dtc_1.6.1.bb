SUMMARY = "Python Library for the Device Tree Compiler"
HOMEPAGE = "https://devicetree.org/"
DESCRIPTION = "A python library for the Device Tree Compiler, a tool used to manipulate Device Tree files which contain a data structure for describing hardware."
SECTION = "bootloader"
LICENSE = "GPLv2 | BSD-2-Clause"

DEPENDS = "flex-native bison-native swig-native python3-setuptools-scm-native libyaml dtc"

SRC_URI = "git://git.kernel.org/pub/scm/utils/dtc/dtc.git;branch=master \
          "

UPSTREAM_CHECK_GITTAGREGEX = "v(?P<pver>\d+(\.\d+)+)"

LIC_FILES_CHKSUM = "file://pylibfdt/libfdt.i;beginline=1;endline=6;md5=afda088c974174a29108c8d80b5dce90"

SRCREV = "4048aed12b81c5a0154b9af438edc99ec7d2b6a1"

S = "${WORKDIR}/git"

inherit setuptools3 pkgconfig

BBCLASSEXTEND = "native nativesdk"
