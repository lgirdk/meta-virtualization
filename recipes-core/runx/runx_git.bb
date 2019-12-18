HOMEPAGE = "https://github.com/lf-edge/runx"
SUMMARY = "runx stuff"
DESCRIPTION = "Xen Runtime for OCI"

SRCREV_runx = "a6fe5ca3081f44e9085972d424c74707d4f0fc71"
SRC_URI = "\
	  git://github.com/lf-edge/runx;nobranch=1;name=runx \
          https://www.kernel.org/pub/linux/kernel/v4.x/linux-4.15.tar.xz;destsuffix=git/kernel/build \
          file://0001-make-kernel-cross-compilation-tweaks.patch \
          file://0001-make-initrd-cross-install-tweaks.patch \
	  "
SRC_URI[md5sum] = "0d701ac1e2a67d47ce7127432df2c32b"
SRC_URI[sha256sum] = "5a26478906d5005f4f809402e981518d2b8844949199f60c4b6e1f986ca2a769"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=945fc9aa694796a6337395cc291ddd8c"

S = "${WORKDIR}/git"
PV = "0.1-git${SRCREV_runx}"

inherit distro_features_check
REQUIRED_DISTRO_FEATURES = "vmsep"


# TODO: for if we need a go shim
# GO_IMPORT = "import"
# inherit go
# inherit goarch
inherit pkgconfig

# for the kernel build
inherit kernel-arch

# we have a busybox bbappend that makes /bin available to the
# sysroot, and hence gets us the target binary that we need
DEPENDS = "busybox"

# for the kernel build phase
DEPENDS += "openssl-native coreutils-native util-linux-native xz-native bc-native"
DEPENDS += "qemu-native"

RDEPENDS_${PN} += " jq bash"
RDEPENDS_${PN} += " xen-xl"

do_compile() {
    # we'll need this for the initrd later, so lets error if it isn't what
    # we expect (statically linked)
    file ${STAGING_DIR_HOST}/bin/busybox.nosuid
    
    # prep steps to short circuit some of make-kernel's fetching and
    # building.
    mkdir -p ${S}/kernel/build
    mkdir -p ${S}/kernel/src
    cp ${DL_DIR}/linux-4.15.tar.xz ${S}/kernel/build/

    # In the future, we might want to link the extracted kernel source (if
    # we move patches to recipe space, but for now, we need make-kernel to
    # extract a copy and possibly patch it.
    # ln -sf ${WORKDIR}/linux-4.15 ${S}/kernel/src/

    # build the kernel
    echo "[INFO]: runx: building the kernel"

    export KERNEL_CC="${KERNEL_CC}"
    export KERNEL_LD="${KERNEL_LD}"
    export ARCH="${ARCH}"
    export HOSTCC="${BUILD_CC} ${BUILD_CFLAGS} ${BUILD_LDFLAGS}"
    export HOSTCPP="${BUILD_CPP}"
    export CROSS_COMPILE="${CROSS_COMPILE}"
    export build_vars="HOSTCC='$HOSTCC' STRIP='$STRIP' OBJCOPY='$OBJCOPY' ARCH=$ARCH CC='$KERNEL_CC' LD='$KERNEL_LD'"
        
    unset CFLAGS CPPFLAGS CXXFLAGS LDFLAGS MACHINE

    # We want make-kernel, to have the following build lines:
    #    make O=$kernel_builddir HOSTCC="${HOSTCC}" ARCH=$ARCH oldconfig
    #    make -j4 O=$kernel_builddir HOSTCC="${HOSTCC}" STRIP="$STRIP" OBJCOPY="$OBJCOPY" ARCH=$ARCH CC="$KERNEL_CC" LD="$KERNEL_LD" $image
    ${S}/kernel/make-kernel

    # construct the initrd
    echo "[INFO]: runx: constructing the initrd"

    cp ${STAGING_DIR_HOST}/bin/busybox.nosuid ${WORKDIR}/busybox
    export QEMU_USER=`which qemu-${HOST_ARCH}`
    export BUSYBOX="${WORKDIR}/busybox"
    export CROSS_COMPILE="t"
    ${S}/kernel/make-initrd
}

do_build_go_shim() {

    # placeholder for any go shim code we may need, i.e. console

    # export GOARCH="${TARGET_GOARCH}"
    # export GOROOT="${STAGING_LIBDIR_NATIVE}/${TARGET_SYS}/go"
    # export GOPATH="${S}/src/import:${S}/src/import/vendor"

    # # Pass the needed cflags/ldflags so that cgo
    # # can find the needed headers files and libraries
    # export CGO_ENABLED="1"
    # export CFLAGS=""
    # export LDFLAGS=""
    # export CGO_CFLAGS="${BUILDSDK_CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
    # export CGO_LDFLAGS="${BUILDSDK_LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

    # # link fixups for compilation
    # rm -f ${S}/src/import/vendor/src
    # ln -sf ./ ${S}/src/import/vendor/src

    # mkdir -p ${S}/src/import/vendor/github.com/hyperhq/runv

    # ln -sf src/import/cli
    # ln -sf ../../../../api ${S}/src/import/vendor/github.com/hyperhq/runv/api
    # ln -sf ../../../../cli ${S}/src/import/vendor/github.com/hyperhq/runv/cli
    # ln -sf ../../../../lib ${S}/src/import/vendor/github.com/hyperhq/runv/lib
    # ln -sf ../../../../driverloader ${S}/src/import/vendor/github.com/hyperhq/runv/driverloader
    # ln -sf ../../../../factory ${S}/src/import/vendor/github.com/hyperhq/runv/factory
    # ln -sf ../../../../hyperstart ${S}/src/import/vendor/github.com/hyperhq/runv/hyperstart
    # ln -sf ../../../../hypervisor ${S}/src/import/vendor/github.com/hyperhq/runv/hypervisor
    # ln -sf ../../../../template ${S}/src/import/vendor/github.com/hyperhq/runv/template

    # export GOPATH="${S}/src/import/.gopath:${S}/src/import/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go"
    # export GOROOT="${STAGING_DIR_NATIVE}/${nonarch_libdir}/${HOST_SYS}/go"

    # # Pass the needed cflags/ldflags so that cgo
    # # can find the needed headers files and libraries
    # export CGO_ENABLED="1"
    # export CGO_CFLAGS="${CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
    # export CGO_LDFLAGS="${LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

    # oe_runmake build-shim

    true
}

do_install() {
    install -d ${D}${bindir}
    install -m 755 ${S}/runX ${D}${bindir}
    
    install -d ${D}${datadir}/runX
    install -m 755 ${S}/kernel/out/kernel ${D}/${datadir}/runX
    install -m 755 ${S}/kernel/out/initrd ${D}/${datadir}/runX
    install -m 755 ${S}/files/start ${D}/${datadir}/runX
    install -m 755 ${S}/files/state ${D}/${datadir}/runX
    install -m 755 ${S}/files/delete ${D}/${datadir}/runX


}

deltask compile_ptest_base

FILES_${PN} += "${bindir}/* ${datadir}/runX/*"

INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP_${PN} += "ldflags already-stripped"
