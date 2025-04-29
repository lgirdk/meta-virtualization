DESCRIPTION = "An introspection library, written in C, focused on reading \
               and writing memory from virtual machines (VM's)."
HOMEPAGE = "https://github.com/libvmi/libvmi"
LICENSE = "LGPL-3.0-only"
LIC_FILES_CHKSUM = "file://COPYING.LESSER;md5=e6a600fd5e1d9cbde2d983680233ad02"
SECTION = "console/tools"
PV = "0.14.0+git"

DEPENDS = "libvirt libcheck bison fuse bison-native flex-native autoconf-archive-native"

SRC_URI = "git://github.com/libvmi/libvmi.git;branch=master;protocol=https \
           file://0001-Build-vbd-only-when-xen-is-enabled.patch \
"

SRCREV = "f02aeb751fd27bd4ae753dcd5904a4ef3232821e"

S = "${WORKDIR}/git"

inherit autotools-brokensep pkgconfig

# Noramlly dynamic libs would be of the form libXX.so.1.0.0 in which case
# bitbake should be able to properly populate the -dev package and the main
# packages. Since libvmi uses the form libXX.1.0.0.so it breaks this automatic
# packaging so we need to be more explicit about what goes where.
FILES:${PN} += "${libdir}/libvmi-0.9.so"
FILES:${PN}-dev = "${includedir} ${libdir}/${BPN}.so ${libdir}/*.la \
                ${libdir}/*.o ${libdir}/pkgconfig ${datadir}/pkgconfig \
                ${datadir}/aclocal ${base_libdir}/*.o \
                ${libdir}/${BPN}/*.la ${base_libdir}/*.la"

PACKAGECONFIG ??= "json-c"
PACKAGECONFIG[xen] = "--enable-xen,--disable-xen,xen,"
PACKAGECONFIG[kvm] = "--disable-kvm-legacy,--enable-kvm-legacy,kvm,"
PACKAGECONFIG[json-c] = ",,json-c,"

# We include a sample conf file to which we have added
do_install:append () {
	mkdir ${D}${sysconfdir}
	cp etc/*.conf ${D}${sysconfdir}
}

# Construction of grammar.h is not parallel safe.
PARALLEL_MAKE = "-j1"

# http://errors.yoctoproject.org/Errors/Details/853259/
# tools/vmifs/vmifs.c:129:18: error: initialization of 'void (*)(void *)' from incompatible pointer type 'void (*)(void)' [-Wincompatible-pointer-types]
# examples/process-list.c:120:64: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:122:63: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:124:62: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:127:62: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:129:62: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:131:60: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:135:65: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:137:64: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:141:60: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/process-list.c:143:59: error: passing argument 3 of 'vmi_get_offset' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/dump-memory.c:185:20: error: passing argument 2 of 'signal' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/win-offsets.c:287:20: error: passing argument 2 of 'signal' from incompatible pointer type [-Wincompatible-pointer-types]
# examples/dmesg.c:146:80: error: passing argument 4 of 'vmi_get_struct_size_from_json' from incompatible pointer type [-Wincompatible-pointer-types]
CFLAGS += "-Wno-error=incompatible-pointer-types"
