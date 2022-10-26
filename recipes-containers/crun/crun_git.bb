DESCRIPTION = "A fast and low-memory footprint OCI Container Runtime fully written in C."
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PRIORITY = "optional"

SRCREV_crun = "4907f10ce567822e5c101d248278bbe9fed24170"
SRCREV_libocispec = "23aed835eed8d81d124977583551a81abe595a0c"
SRCREV_ispec = "4df8887994e871a59f9e30e8dd811d060f6a39ef"
SRCREV_rspec = "494a5a6aca782455c0fbfc35af8e12f04e98a55e"
SRCREV_yajl = "f344d21280c3e4094919fd318bc5ce75da91fc06"

SRCREV_FORMAT = "crun_rspec"
SRC_URI = "git://github.com/containers/crun.git;branch=main;name=crun;protocol=https \
           git://github.com/containers/libocispec.git;branch=main;name=libocispec;destsuffix=git/libocispec;protocol=https \
           git://github.com/opencontainers/runtime-spec.git;branch=main;name=rspec;destsuffix=git/libocispec/runtime-spec;protocol=https \
           git://github.com/opencontainers/image-spec.git;branch=main;name=ispec;destsuffix=git/libocispec/image-spec;protocol=https \
           git://github.com/containers/yajl.git;branch=main;name=yajl;destsuffix=git/libocispec/yajl;protocol=https \
          "

PV = "1.6.0+git${SRCREV_crun}"
S = "${WORKDIR}/git"

REQUIRED_DISTRO_FEATURES ?= "systemd"

inherit autotools-brokensep pkgconfig features_check

PACKAGECONFIG ??= ""

inherit features_check
REQUIRED_DISTRO_FEATURES ?= "seccomp"

DEPENDS = "yajl libcap go-md2man-native m4-native"
# TODO: is there a packageconfig to turn this off ?
DEPENDS += "libseccomp"
DEPENDS += "systemd"
DEPENDS += "oci-image-spec oci-runtime-spec"

do_configure:prepend () {
    # extracted from autogen.sh in crun source. This avoids
    # git submodule fetching.
    mkdir -p m4
    autoreconf -fi
}

do_install() {
    oe_runmake 'DESTDIR=${D}' install
}
