DESCRIPTION = "A fast and low-memory footprint OCI Container Runtime fully written in C."
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
PRIORITY = "optional"

SRCREV_crun = "0e9229ae34caaebcb86f1fde18de3acaf18c6d9a"
SRCREV_libocispec = "ece5f6aede6488396f9c84bc985df09f95204e1d"
SRCREV_ispec = "79b036d80240ae530a8de15e1d21c7ab9292c693"
SRCREV_rspec = "7413a7f753e1bd9a6a9c6dc7f96f55888cbbd476"

SRCREV_FORMAT = "crun_rspec"
SRC_URI = "git://github.com/containers/crun.git;branch=master;name=crun \
           git://github.com/containers/libocispec.git;branch=master;name=libocispec;destsuffix=git/libocispec \
           git://github.com/opencontainers/runtime-spec.git;branch=master;name=rspec;destsuffix=git/libocispec/runtime-spec \
           git://github.com/opencontainers/image-spec.git;branch=master;name=ispec;destsuffix=git/libocispec/image-spec \
          "

PV = "0.17+git${SRCREV_crun}"
S = "${WORKDIR}/git"

inherit autotools-brokensep pkgconfig

PACKAGECONFIG ??= ""

DEPENDS = "yajl libcap go-md2man-native"
# TODO: is there a packageconfig to turn this off ?
DEPENDS += "libseccomp"
DEPENDS += "systemd"
DEPENDS += "oci-image-spec oci-runtime-spec"

do_install() {
    oe_runmake 'DESTDIR=${D}' install
}
