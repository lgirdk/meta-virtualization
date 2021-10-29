SUMMARY = "Python Library for the Device Tree Compiler"
HOMEPAGE = "https://devicetree.org/"
DESCRIPTION = "A python library for the Device Tree Compiler, a tool used to manipulate Device Tree files which contain a data structure for describing hardware."
SECTION = "bootloader"
LICENSE = "GPLv2 | BSD-2-Clause"

DEPENDS = "flex-native bison-native swig-native libyaml dtc"

SRC_URI = "git://git.kernel.org/pub/scm/utils/dtc/dtc.git;branch=master"

UPSTREAM_CHECK_GITTAGREGEX = "v(?P<pver>\d+(\.\d+)+)"

LIC_FILES_CHKSUM = "file://pylibfdt/libfdt.i;beginline=1;endline=6;md5=afda088c974174a29108c8d80b5dce90"

SRCREV = "ecaeb97fec013973360e94888a7de645f084345c"

S = "${WORKDIR}/git"

inherit distutils3

DISTUTILS_SETUP_PATH = "${S}/pylibfdt"

do_configure:prepend() {
    oe_runmake -C "${S}" version_gen.h
    mv "${S}/version_gen.h" "${DISTUTILS_SETUP_PATH}/"
}

BBCLASSEXTEND = "native nativesdk"
