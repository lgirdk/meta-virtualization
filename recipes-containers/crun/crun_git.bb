DESCRIPTION = "A fast and low-memory footprint OCI Container Runtime fully written in C."
LICENSE = "GPLv3"
LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504"
PRIORITY = "optional"

SRCREV_crun = "a43f72196f7aaf713dc997eaddd0f08612f60ac0"
SRCREV_libocispec = "01c8f977ff5ed1e8010f40c2572343be1a70a51b"
SRCREV_ispec = "775207bd45b6cb8153ce218cc59351799217451f"
SRCREV_rspec = "19e92ca817772b4466f2ed2b8d808dfb7a8ab4be"

SRCREV_FORMAT = "crun_rspec"
SRC_URI = "git://github.com/containers/crun.git;branch=main;name=crun;protocol=https \
           git://github.com/containers/libocispec.git;branch=main;name=libocispec;destsuffix=git/libocispec;protocol=https \
           git://github.com/opencontainers/runtime-spec.git;branch=main;name=rspec;destsuffix=git/libocispec/runtime-spec;protocol=https \
           git://github.com/opencontainers/image-spec.git;branch=main;name=ispec;destsuffix=git/libocispec/image-spec;protocol=https \
          "

PV = "0.10.2+git${SRCREV_crun}"
S = "${WORKDIR}/git"

inherit autotools-brokensep pkgconfig

PACKAGECONFIG ??= ""

DEPENDS = "yajl libcap go-md2man-native"
# TODO: is there a packageconfig to turn this off ?
DEPENDS += "libseccomp"
DEPENDS += "oci-image-spec oci-runtime-spec"

do_install() {
    oe_runmake 'DESTDIR=${D}' install
}
