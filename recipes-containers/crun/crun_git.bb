DESCRIPTION = "A fast and low-memory footprint OCI Container Runtime fully written in C."
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PRIORITY = "optional"

SRCREV_crun = "360f5d02c37d5f7a67d38622010228ae2eeb80f1"
SRCREV_libocispec = "c9b8b9524814550a489aa6d38b2dec95633ffa15"
SRCREV_ispec = "79b036d80240ae530a8de15e1d21c7ab9292c693"
SRCREV_rspec = "7413a7f753e1bd9a6a9c6dc7f96f55888cbbd476"

SRCREV_FORMAT = "crun_rspec"
SRC_URI = "git://github.com/containers/crun.git;branch=main;name=crun \
           git://github.com/containers/libocispec.git;branch=main;name=libocispec;destsuffix=git/libocispec \
           git://github.com/opencontainers/runtime-spec.git;branch=master;name=rspec;destsuffix=git/libocispec/runtime-spec \
           git://github.com/opencontainers/image-spec.git;branch=main;name=ispec;destsuffix=git/libocispec/image-spec \
          "

PV = "0.18+git${SRCREV_crun}"
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
    ./autogen.sh
}

do_install() {
    oe_runmake 'DESTDIR=${D}' install
}
