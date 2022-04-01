SRCREV = "3b3e9d5f62a114153829f9fbe2781d27b0a2ddac"
SRC_URI = "git://github.com/containerd/containerd;branch=release/1.2;protocol=https \
           file://0001-build-use-oe-provided-GO-and-flags.patch \
           file://0001-Add-build-option-GODEBUG-1.patch \
          "

include containerd.inc

LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=1269f40c0d099c21a871163984590d89"

CONTAINERD_VERSION = "v1.2.14"

# Work around internal error in gold triggered due to DWARF-5 by forcing to use bfd even with ld-is-gold:
# _/OE/lge/build/webosose/dunfell/BUILD/work/qemux86_64-webos-linux/containerd-opencontainers/v1.2.14+gitAUTOINC+3b3e9d5f62-r0/git/src/import/cmd/containerd-shim
# /OE/lge/build/webosose/dunfell/BUILD/work/qemux86_64-webos-linux/containerd-opencontainers/v1.2.14+gitAUTOINC+3b3e9d5f62-r0/recipe-sysroot-native/usr/lib/x86_64-webos-linux/go/pkg/tool/linux_amd64/link: running x86_64-webos-linux-gcc failed: exit status 1
# /OE/lge/build/webosose/dunfell/BUILD/work/qemux86_64-webos-linux/containerd-opencontainers/v1.2.14+gitAUTOINC+3b3e9d5f62-r0/recipe-sysroot-native/usr/bin/x86_64-webos-linux/../../libexec/x86_64-webos-linux/gcc/x86_64-webos-linux/9.3.0/ld: internal error in read_header_prolog, at ../../gold/dwarf_reader.cc:1678
# collect2: error: ld returned 1 exit status
# alternatively we can backport DWARF-5 support to binutils-2.34 used in dunfell like in:
# https://git.openembedded.org/openembedded-core/commit/?id=d07d4d739ae17787017f771dd2068fda0e836722
EXTRA_EXTLDFLAGS = "${@bb.utils.contains('DISTRO_FEATURES', 'ld-is-gold', ' -fuse-ld=bfd ', '', d)}"

EXTRA_OEMAKE += "GODEBUG=1 EXTRA_EXTLDFLAGS='${EXTRA_EXTLDFLAGS}'"

PROVIDES += "virtual/containerd"
RPROVIDES_${PN} = "virtual/containerd"

CVE_PRODUCT = "containerd"
