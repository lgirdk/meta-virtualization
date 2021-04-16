SUMMARY = "Xen Test Framework"
HOMEPAGE = "https://xenbits.xenproject.org/docs/xtf/"
LICENSE = "BSD-2-Clause"

# For additional reference on XTF, please see:
# https://static.sched.com/hosted_files/xendeveloperanddesignsummit2017/79/xtf.pdf

SRC_URI = "git://xenbits.xen.org/xtf"
SRCREV = "8ab15139728a8efd3ebbb60beb16a958a6a93fa1"

COMPATIBLE_HOST = '(x86_64.*).*-linux'

LIC_FILES_CHKSUM = "file://COPYING;md5=a5680865974e05cf0510615ee1d745d8"

PV = "0+git${SRCPV}"

S = "${WORKDIR}/git"

inherit python3native

# To build 32-bit binaries some files from 32-bit glibc are needed.
# To enable multilib, please add the following to your local.conf -:
#
#    require conf/multilib.conf
#    MULTILIBS = "multilib:lib32"
#    DEFAULTTUNE_virtclass-multilib-lib32 = "x86"

# Use this multilib prefix for x86 32-bit to match local.conf:
MLPREFIX32 = "lib32-"
# Add the multilib 32-bit glibc to DEPENDS only when necessary:
# The DEPENDS on a multilib 32-bit glibc is only added when target is x86-64
# This x86-64 override is never intended for native use, so clear that.
GLIBC32 = ""
GLIBC32_x86-64 = "${MLPREFIX32}glibc"
GLIBC32_class-native = ""
DEPENDS += "${GLIBC32}"

PACKAGES = "${PN}"

FILES_${PN} = " \
    ${libexecdir}/* \
    "

RDEPENDS_${PN} = " \
    xen-tools-xl \
    python3 \
    "

do_compile() {
    oe_runmake CC="${TARGET_PREFIX}gcc ${TOOLCHAIN_OPTIONS} -I${RECIPE_SYSROOT}/../${MLPREFIX32}recipe-sysroot/usr/include" \
               CPP="${CPP}" \
               OBJCOPY="${OBJCOPY}" \
               PYTHON="${PYTHON}"
    # switch the shebang to python3
    sed 's,^\(#!/usr/bin/env python\)$,\13,' -i "${B}/xtf-runner"
}

do_install() {
    # packaging: rpmbuild can package the XTF test unikernels when they are
    # installed as non-executable files (they are run within VMs anyway).
    oe_runmake install DESTDIR="${D}" \
                       xtfdir="${libexecdir}/${BPN}" \
                       PYTHON="${PYTHON}" \
                       INSTALL_PROGRAM="install -m 644 -p"
    install -m 755 -p "${B}/xtf-runner" "${D}${libexecdir}/${BPN}/xtf-runner"
}

INSANE_SKIP = "arch"
# xen-tools-xl is a runtime but not build time dependency
INSANE_SKIP_${PN} = "build-deps"
INHIBIT_PACKAGE_STRIP = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
