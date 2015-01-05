DESCRIPTION = "Xen hypervisor"
HOMEPAGE = "http://xen.org"
LICENSE = "GPLv2"
SECTION = "console/tools"
PR = "r0"

LIC_FILES_CHKSUM = "file://COPYING;md5=e0f0f3ac55608719a82394cc353928df"

COMPATIBLE_HOST = '(x86_64.*).*-linux'

inherit autotools-brokensep gettext setuptools update-rc.d

require xen-arch.inc

PACKAGECONFIG ??= " \
    sdl \
    "

PACKAGECONFIG[sdl] = "--enable-sdl,--disable-sdl,virtual/libsdl,"
PACKAGECONFIG[xsm] = "--enable-xsmpolicy,--disable-xsmpolicy,checkpolicy-native,"

DEPENDS = " \
    bison-native \
    dev86-native \
    flex-native \
    file-native \
    iasl-native \
    util-linux-native \
    xz-native \
    bridge-utils \
    dtc \
    gettext \
    glib-2.0 \
    iproute2 \
    ncurses \
    openssl \
    pciutils \
    pixman \
    procps \
    python \
    libaio \
    lzo \
    util-linux \
    xz \
    yajl \
    zlib \
    "

# inherit setuptools adds python to RDEPENDS, override it
RDEPENDS_${PN} = ""

RDEPENDS_${PN}-base = "\
    libgcc udev bash perl xz \
    ${PN}-blktap \
    ${PN}-console \
    ${PN}-libblktapctl \
    ${PN}-libxenguest \
    ${PN}-libxenlight \
    ${PN}-libxenvchan \
    ${PN}-libxenctrl \
    ${PN}-libxlutil \
    ${PN}-libvhd \
    ${PN}-libxenstat \
    ${PN}-libxenstore \
    ${PN}-libfsimage \
    ${PN}-fsimage \
    ${PN}-hvmloader \
    ${PN}-scripts-block \
    ${PN}-scripts-network \
    ${PN}-udev \
    ${PN}-xenpaging \
    ${PN}-xen-watchdog \
    ${PN}-xencommons \
    ${PN}-xendomains \
    ${PN}-xenstore \
    ${PN}-xenstored \
    ${PN}-xl \
    "

RDEPENDS_${PN}-misc = " \
    perl \
    python \
    "

RDEPENDS_${PN}-remus = "python"

RDEPENDS_${PN}-scripts-block = "\
    bash \
    ${PN}-scripts-common \
    ${PN}-udev \
    ${PN}-volatiles \
    "

RDEPENDS_${PN}-scripts-common = "bash"

RDEPENDS_${PN}-scripts-network = "\
    bash \
    bridge-utils \
    ${PN}-scripts-common \
    ${PN}-udev \
    ${PN}-volatiles \
    "

RDEPENDS_${PN}-xencommons = "\
    bash \
    ${PN}-console \
    ${PN}-xenstore \
    ${PN}-xenstored \
    ${PN}-scripts-common \
    "

RDEPENDS_${PN}-xendomains = "\
    bash \
    ${PN}-console \
    ${PN}-scripts-block \
    ${PN}-scripts-common \
    ${PN}-xenstored \
    "

RDEPENDS_${PN}-xl = "libgcc"

RDEPENDS_${PN}-xentrace = "python"

RDEPENDS_${PN}-xen-watchdog = "bash"

PACKAGES = "\
    ${PN}-base \
    ${PN}-blktap \
    ${PN}-console \
    ${PN}-dbg \
    ${PN}-dev \
    ${PN}-doc \
    ${PN}-flask \
    ${PN}-fsimage \
    ${PN}-gdbsx \
    ${PN}-hvmloader \
    ${PN}-hypervisor \
    ${PN}-kdd \
    ${PN}-libblktap \
    ${PN}-libblktapctl \
    ${PN}-libblktapctl-dev \
    ${PN}-libblktap-dev \
    ${PN}-libfsimage \
    ${PN}-libfsimage-dev \
    ${PN}-libvhd \
    ${PN}-libvhd-dev \
    ${PN}-libxenctrl \
    ${PN}-libxenctrl-dev \
    ${PN}-libxenguest \
    ${PN}-libxenguest-dev \
    ${PN}-libxenlight \
    ${PN}-libxenlight-dev \
    ${PN}-libxenstat \
    ${PN}-libxenstat-dev \
    ${PN}-libxenstore \
    ${PN}-libxenstore-dev \
    ${PN}-libxenvchan \
    ${PN}-libxenvchan-dev \
    ${PN}-libxlutil \
    ${PN}-libxlutil-dev \
    ${PN}-misc \
    ${PN}-pygrub \
    ${PN}-python \
    ${PN}-qemu \
    ${PN}-remus \
    ${PN}-scripts-block \
    ${PN}-scripts-common \
    ${PN}-scripts-network \
    ${PN}-staticdev \
    ${PN}-udev \
    ${PN}-volatiles \
    ${PN}-xcutils \
    ${PN}-xencommons \
    ${PN}-xend \
    ${PN}-xend-examples \
    ${PN}-xendomains \
    ${PN}-xenmon \
    ${PN}-xenpaging \
    ${PN}-xenpmd \
    ${PN}-xenstat \
    ${PN}-xenstore \
    ${PN}-xenstored \
    ${PN}-xentrace \
    ${PN}-xen-watchdog \
    ${PN}-xl \
    ${PN}-xl-examples \
    ${PN}-xm \
    ${PN}-xm-examples \
    "

FILES_${PN}-dbg += "\
    ${libdir}/.debug \
    ${libdir}/xen/bin/.debug \
    ${libdir}/python2.7/site-packages/.debug \
    ${libdir}/python2.7/site-packages/xen/lowlevel/.debug \
    ${libdir}/fs/xfs/.debug \
    ${libdir}/fs/ufs/.debug \
    ${libdir}/fs/ext2fs-lib/.debug \
    ${libdir}/fs/fat/.debug \
    ${libdir}/fs/zfs/.debug \
    ${libdir}/fs/reiserfs/.debug \
    ${libdir}/fs/iso9660/.debug \
    ${libdir}/fs/*/.debug \
    ${sbindir}/.debug \
    ${libdir}exec/.debug \
    ${libdir}/xen/libexec/.debug \
    ${bindir}/.debug \
    ${libdir}/python2.7/dist-packages/.debug \
    ${libdir}/python2.7/dist-packages/xen/lowlevel/.debug \
    "

FILES_${PN}-dev = "\
    ${includedir} \
    "

FILES_${PN}-doc = "\
    ${sysconfdir}/xen/README \
    ${sysconfdir}/xen/README.incompatibilities \
    ${datadir}/doc \
    ${datadir}/man \
    "

FILES_${PN}-staticdev += "\
    ${libdir}/libblktapctl.a \
    ${libdir}/libxenguest.a \
    ${libdir}/libxenlight.a \
    ${libdir}/libxenvchan.a \
    ${libdir}/libxenctrl.a \
    ${libdir}/libxlutil.a \
    ${libdir}/libvhd.a \
    ${libdir}/libxenstat.a \
    ${libdir}/libxenstore.a \
    ${libdir}/libblktap.a \
    "

FILES_${PN}-libblktapctl = "${libdir}/libblktapctl.so.*"
FILES_${PN}-libblktapctl-dev = "${libdir}/libblktapctl.so"

FILES_${PN}-libxenguest = "${libdir}/libxenguest.so.*"
FILES_${PN}-libxenguest-dev = "${libdir}/libxenguest.so"

FILES_${PN}-libxenlight = "${libdir}/libxenlight.so.*"
FILES_${PN}-libxenlight-dev = "${libdir}/libxenlight.so"

FILES_${PN}-libxenvchan = "${libdir}/libxenvchan.so.*"
FILES_${PN}-libxenvchan-dev = "${libdir}/libxenvchan.so"

FILES_${PN}-libxenctrl = "${libdir}/libxenctrl.so.*"
FILES_${PN}-libxenctrl-dev = "${libdir}/libxenctrl.so"

FILES_${PN}-libxlutil = "${libdir}/libxlutil.so.*"
FILES_${PN}-libxlutil-dev = "${libdir}/libxlutil.so"

FILES_${PN}-libvhd = "${libdir}/libvhd.so.*"
FILES_${PN}-libvhd-dev = "${libdir}/libvhd.so"

FILES_${PN}-libxenstat = "${libdir}/libxenstat.so.*"
FILES_${PN}-libxenstat-dev = "${libdir}/libxenstat.so"

FILES_${PN}-libxenstore = "${libdir}/libxenstore.so.*"
FILES_${PN}-libxenstore-dev = "${libdir}/libxenstore.so"

FILES_${PN}-libblktap = "${libdir}/libblktap.so.*"
FILES_${PN}-libblktap-dev = "${libdir}/libblktap.so"

FILES_${PN}-libfsimage = "${libdir}/libfsimage.so.*"
FILES_${PN}-libfsimage-dev = "${libdir}/libfsimage.so"

FILES_${PN}-fsimage = "${libdir}/fs/*/*fsimage.so"

FILES_${PN}-hypervisor = "\
    /boot/xen-*.gz \
    /boot/xen.gz \
    /boot/xen-syms-* \
    "

FILES_${PN}-base = "\
    ${sysconfdir}/xen/auto \
    ${sysconfdir}/xen/cpupool \
    ${localstatedir}/xen/dump \
    "

FILES_${PN}-blktap = "\
    ${sbindir}/blktapctrl \
    ${sbindir}/img2qcow \
    ${sbindir}/lock-util \
    ${sbindir}/qcow2raw \
    ${sbindir}/qcow-create \
    ${sbindir}/tap-ctl \
    ${sbindir}/tapdisk \
    ${sbindir}/tapdisk2 \
    ${sbindir}/tapdisk-client \
    ${sbindir}/tapdisk-diff \
    ${sbindir}/tapdisk-stream \
    ${sbindir}/td-util \
    ${sbindir}/vhd-update \
    ${sbindir}/vhd-util \
    "

FILES_${PN}-console = "\
    ${libdir}/xen/bin/xenconsole \
    ${sbindir}/xenconsoled \
    "

FILES_${PN}-flask = "\
    ${sbindir}/flask-get-bool \
    ${sbindir}/flask-getenforce \
    ${sbindir}/flask-label-pci \
    ${sbindir}/flask-loadpolicy \
    ${sbindir}/flask-set-bool \
    ${sbindir}/flask-setenforce \
    /boot/xenpolicy.24 \
    "

FILES_${PN}-gdbsx = "\
    ${sbindir}/gdbsx \
    "

INSANE_SKIP_${PN}-hvmloader = "arch"
FILES_${PN}-hvmloader = "\
    ${libdir}/xen/boot/hvmloader \
    "

FILES_${PN}-kdd = "\
    ${sbindir}/kdd \
    "

FILES_${PN}-misc = "\
    ${bindir}/xencons \
    ${bindir}/xencov_split \
    ${bindir}/xen-detect \
    ${libdir}/xen/bin/xenpvnetboot \
    ${sbindir}/gtracestat \
    ${sbindir}/gtraceview \
    ${sbindir}/xen-bugtool \
    ${sbindir}/xencov \
    ${sbindir}/xenperf \
    ${sbindir}/xenpm \
    ${sbindir}/xsview \
    ${sbindir}/xen-tmem-list-parse \
    ${sbindir}/xen-python-path \
    ${sbindir}/xen-ringwatch \
    ${sbindir}/xen-hptool \
    ${sbindir}/xen-hvmcrash \
    ${sbindir}/xen-hvmctx \
    ${sbindir}/xenlockprof \
    ${sbindir}/xen-lowmemd \
    ${sbindir}/xen-mfndump \
    "

FILES_${PN}-pygrub = "\
    ${bindir}/pygrub \
    ${libdir}/xen/bin/pygrub \
    "

FILES_${PN}-python = "\
    ${libdir}/python2.7 \
    "

INSANE_SKIP_${PN} = "already-stripped"
INSANE_SKIP_${PN}-qemu = "arch"
FILES_${PN}-qemu = " \
    ${datadir}/xen/qemu \
    ${libdir}/xen/bin/qemu-system-i386 \
    ${libdir}/xen/bin/qemu-system-x86_64 \
    ${libdir}/xen/bin/qemu-img \
    ${libdir}/xen/bin/qemu-nbd \
    ${libdir}/xen/bin/qemu-ga \
    ${libdir}/xen/bin/qemu-io \
    ${libdir}/xen/bin/qemu-dm \
    ${libdir}/xen/bin/virtfs-proxy-helper \
    /usr/libexec/qemu-bridge-helper \
    ${libdir}/xen/libexec/qemu-bridge-helper \
    /usr/etc/qemu \
    /usr/etc/qemu/target-x86_64.conf \
    ${libdir}/xen/etc/qemu/target-x86_64.conf \
    ${datadir}/qemu-xen \
    ${datadir}/qemu-xen/qemu \
    ${datadir}/qemu-xen/qemu/bamboo.dtb \
    ${datadir}/qemu-xen/qemu/pxe-pcnet.rom \
    ${datadir}/qemu-xen/qemu/vgabios-vmware.bin \
    ${datadir}/qemu-xen/qemu/pxe-eepro100.rom \
    ${datadir}/qemu-xen/qemu/pxe-e1000.rom \
    ${datadir}/qemu-xen/qemu/openbios-ppc \
    ${datadir}/qemu-xen/qemu/multiboot.bin \
    ${datadir}/qemu-xen/qemu/vgabios-cirrus.bin \
    ${datadir}/qemu-xen/qemu/bios.bin \
    ${datadir}/qemu-xen/qemu/vgabios-stdvga.bin \
    ${datadir}/qemu-xen/qemu/palcode-clipper \
    ${datadir}/qemu-xen/qemu/pxe-ne2k_pci.rom \
    ${datadir}/qemu-xen/qemu/spapr-rtas.bin \
    ${datadir}/qemu-xen/qemu/slof.bin \
    ${datadir}/qemu-xen/qemu/vgabios-qxl.bin \
    ${datadir}/qemu-xen/qemu/pxe-rtl8139.rom \
    ${datadir}/qemu-xen/qemu/openbios-sparc64 \
    ${datadir}/qemu-xen/qemu/pxe-virtio.rom \
    ${datadir}/qemu-xen/qemu/kvmvapic.bin \
    ${datadir}/qemu-xen/qemu/openbios-sparc32 \
    ${datadir}/qemu-xen/qemu/petalogix-s3adsp1800.dtb \
    ${datadir}/qemu-xen/qemu/sgabios.bin \
    ${datadir}/qemu-xen/qemu/linuxboot.bin \
    ${datadir}/qemu-xen/qemu/qemu-icon.bmp \
    ${datadir}/qemu-xen/qemu/ppc_rom.bin \
    ${datadir}/qemu-xen/qemu/vgabios.bin \
    ${datadir}/qemu-xen/qemu/s390-zipl.rom \
    ${datadir}/qemu-xen/qemu/petalogix-ml605.dtb \
    ${datadir}/qemu-xen/qemu/keymaps \
    ${datadir}/qemu-xen/qemu/keymaps/common \
    ${datadir}/qemu-xen/qemu/keymaps/th \
    ${datadir}/qemu-xen/qemu/keymaps/is \
    ${datadir}/qemu-xen/qemu/keymaps/en-gb \
    ${datadir}/qemu-xen/qemu/keymaps/ar \
    ${datadir}/qemu-xen/qemu/keymaps/fr-be \
    ${datadir}/qemu-xen/qemu/keymaps/ru \
    ${datadir}/qemu-xen/qemu/keymaps/hu \
    ${datadir}/qemu-xen/qemu/keymaps/de-ch \
    ${datadir}/qemu-xen/qemu/keymaps/no \
    ${datadir}/qemu-xen/qemu/keymaps/fr \
    ${datadir}/qemu-xen/qemu/keymaps/pl \
    ${datadir}/qemu-xen/qemu/keymaps/fr-ca \
    ${datadir}/qemu-xen/qemu/keymaps/de \
    ${datadir}/qemu-xen/qemu/keymaps/fr-ch \
    ${datadir}/qemu-xen/qemu/keymaps/bepo \
    ${datadir}/qemu-xen/qemu/keymaps/lv \
    ${datadir}/qemu-xen/qemu/keymaps/ja \
    ${datadir}/qemu-xen/qemu/keymaps/da \
    ${datadir}/qemu-xen/qemu/keymaps/lt \
    ${datadir}/qemu-xen/qemu/keymaps/hr \
    ${datadir}/qemu-xen/qemu/keymaps/es \
    ${datadir}/qemu-xen/qemu/keymaps/modifiers \
    ${datadir}/qemu-xen/qemu/keymaps/sl \
    ${datadir}/qemu-xen/qemu/keymaps/it \
    ${datadir}/qemu-xen/qemu/keymaps/nl \
    ${datadir}/qemu-xen/qemu/keymaps/fo \
    ${datadir}/qemu-xen/qemu/keymaps/mk \
    ${datadir}/qemu-xen/qemu/keymaps/pt-br \
    ${datadir}/qemu-xen/qemu/keymaps/tr \
    ${datadir}/qemu-xen/qemu/keymaps/sv \
    ${datadir}/qemu-xen/qemu/keymaps/fi \
    ${datadir}/qemu-xen/qemu/keymaps/en-us \
    ${datadir}/qemu-xen/qemu/keymaps/et \
    ${datadir}/qemu-xen/qemu/keymaps/nl-be \
    ${datadir}/qemu-xen/qemu/keymaps/pt \
    ${bindir}/qemu-nbd-xen \
    ${bindir}/qemu-img-xen \
    "

FILES_${PN}-remus = "\
    ${bindir}/remus \
    "

FILES_${PN}-scripts-network = " \
    ${sysconfdir}/xen/scripts/network-bridge \
    ${sysconfdir}/xen/scripts/network-nat \
    ${sysconfdir}/xen/scripts/network-route \
    ${sysconfdir}/xen/scripts/qemu-ifup \
    ${sysconfdir}/xen/scripts/vif2 \
    ${sysconfdir}/xen/scripts/vif-bridge \
    ${sysconfdir}/xen/scripts/vif-common.sh \
    ${sysconfdir}/xen/scripts/vif-nat \
    ${sysconfdir}/xen/scripts/vif-openvswitch \
    ${sysconfdir}/xen/scripts/vif-route \
    ${sysconfdir}/xen/scripts/vif-setup \
    "

FILES_${PN}-scripts-block = " \
    ${sysconfdir}/xen/scripts/blktap \
    ${sysconfdir}/xen/scripts/block \
    ${sysconfdir}/xen/scripts/block-common.sh \
    ${sysconfdir}/xen/scripts/block-enbd \
    ${sysconfdir}/xen/scripts/block-iscsi \
    ${sysconfdir}/xen/scripts/block-nbd \
    ${sysconfdir}/xen/scripts/block-drbd-probe \
    ${sysconfdir}/xen/scripts/vscsi \
    "

FILES_${PN}-scripts-common = " \
    ${sysconfdir}/xen/scripts/external-device-migrate \
    ${sysconfdir}/xen/scripts/hotplugpath.sh \
    ${sysconfdir}/xen/scripts/locking.sh \
    ${sysconfdir}/xen/scripts/logging.sh \
    ${sysconfdir}/xen/scripts/xen-hotplug-cleanup \
    ${sysconfdir}/xen/scripts/xen-hotplug-common.sh \
    ${sysconfdir}/xen/scripts/xen-network-common.sh \
    ${sysconfdir}/xen/scripts/xen-script-common.sh \
    "

FILES_${PN}-udev = "\
    ${sysconfdir}/udev/rules.d/xen-backend.rules \
    ${sysconfdir}/udev/rules.d/xend.rules \
    "

FILES_${PN}-volatiles = "\
    ${sysconfdir}/default/volatiles/99_xen \
    "

FILES_${PN}-xcutils = "\
    ${libdir}/xen/bin/lsevtchn \
    ${libdir}/xen/bin/readnotes \
    ${libdir}/xen/bin/xc_restore \
    ${libdir}/xen/bin/xc_save \
    "

FILES_${PN}-xend-examples = "\
    ${sysconfdir}/xen/xend-config.sxp \
    ${sysconfdir}/xen/xend-pci-permissive.sxp \
    ${sysconfdir}/xen/xend-pci-quirks.sxp \
    "

FILES_${PN}-xenpaging = "\
    ${libdir}/xen/bin/xenpaging \
    ${localstatedir}/lib/xen/xenpaging \
    "

FILES_${PN}-xenpmd = "\
    ${sbindir}/xenpmd \
    "

FILES_${PN}-xenstat = "\
    ${sbindir}/xentop \
    "

FILES_${PN}-xenstore = "\
    ${bindir}/xenstore \
    ${bindir}/xenstore-chmod \
    ${bindir}/xenstore-control \
    ${bindir}/xenstore-exists \
    ${bindir}/xenstore-list \
    ${bindir}/xenstore-ls \
    ${bindir}/xenstore-read \
    ${bindir}/xenstore-rm \
    ${bindir}/xenstore-watch \
    ${bindir}/xenstore-write \
    "

FILES_${PN}-xenstored = "\
    ${sbindir}/xenstored \
    ${localstatedir}/lib/xenstored \
    "

FILES_${PN}-xentrace = "\
    ${bindir}/xentrace \
    ${bindir}/xentrace_format \
    ${bindir}/xentrace_setsize \
    ${libdir}/xen/bin/xenctx \
    "

FILES_${PN}-xen-watchdog = "\
    ${sbindir}/xenwatchdogd \
    ${sysconfdir}/init.d/xen-watchdog \
    "

FILES_${PN}-xl = "\
    ${sysconfdir}/bash_completion.d/xl.sh \
    ${sysconfdir}/xen/xl.conf \
    ${libdir}/xen/bin/libxl-save-helper \
    ${sbindir}/xl \
    ${libdir}/xen/bin/xen-init-dom0 \
    "

FILES_${PN}-xl-examples = "\
    ${sysconfdir}/xen/xlexample.hvm \
    ${sysconfdir}/xen/xlexample.pvlinux \
    "

FILES_${PN}-xm-examples = "\
    ${sysconfdir}/xen/xmexample1 \
    ${sysconfdir}/xen/xmexample2 \
    ${sysconfdir}/xen/xmexample3 \
    ${sysconfdir}/xen/xmexample.hvm \
    ${sysconfdir}/xen/xmexample.hvm-stubdom \
    ${sysconfdir}/xen/xmexample.nbd \
    ${sysconfdir}/xen/xmexample.pv-grub \
    ${sysconfdir}/xen/xmexample.vti \
    "

FILES_${PN}-xenmon = "\
    ${sbindir}/xenbaked \
    ${sbindir}/xentrace_setmask \
    ${sbindir}/xenmon.py \
    "

FILES_${PN}-xm = "\
    ${sysconfdir}/xen/xm-config.xml \
    ${datadir}/xen/create.dtd \
    ${sbindir}/xm \
    "

FILES_${PN}-xencommons += "\
    ${sysconfdir}/default/xencommons \
    ${sysconfdir}/init.d/xencommons \
    "

FILES_${PN}-xend += " \
    ${sysconfdir}/init.d/xend \
    ${sbindir}/xend \
    "

FILES_${PN}-xendomains += "\
    ${libdir}/xen/bin/xendomains \
    ${sysconfdir}/default/xendomains \
    ${sysconfdir}/init.d/xendomains \
    ${sysconfdir}/sysconfig/xendomains \
    "

# configure init.d scripts
INITSCRIPT_PACKAGES = "${PN}-xend ${PN}-xencommons ${PN}-xen-watchdog ${PN}-xendomains"
INITSCRIPT_NAME_${PN}-xencommons = "xencommons"
INITSCRIPT_PARAMS_${PN}-xencommons = "defaults 80"
INITSCRIPT_NAME_${PN}-xen-watchdog = "xen-watchdog"
INITSCRIPT_PARAMS_${PN}-xen-watchdog = "defaults 81"
INITSCRIPT_NAME_${PN}-xend = "xend"
INITSCRIPT_PARAMS_${PN}-xend = "defaults 82"
INITSCRIPT_NAME_${PN}-xendomains = "xendomains"
INITSCRIPT_PARAMS_${PN}-xendomains = "defaults 83"

#### REQUIRED ENVIRONMENT VARIABLES ####
export BUILD_SYS
export HOST_SYS
export STAGING_INCDIR
export STAGING_LIBDIR

# specify xen hypervisor to build/target
export XEN_TARGET_ARCH = "${@map_xen_arch(d.getVar('TARGET_ARCH', True), d)}"
export XEN_COMPILE_ARCH = "${@map_xen_arch(d.getVar('BUILD_ARCH', True), d)}"

# hardcoded as Linux, as the only compatible hosts are Linux.
export XEN_OS = "Linux"

# this is used for the header (#!${bindir}/python) of the install python scripts
export PYTHONPATH="${bindir}/python"

# seabios forcefully sets HOSTCC to CC - fixup to allow it to build native conf executable
export HOSTCC="${BUILD_CC}"

# make xen requires CROSS_COMPILE set by hand as it does not abide by ./configure
export CROSS_COMPILE="${TARGET_PREFIX}"

# overide LDFLAGS to allow xen to build without: "x86_64-oe-linux-ld: unrecognized option '-Wl,-O1'"
export LDFLAGS=""

EXTRA_OECONF += " \
    --exec-prefix=/usr \
    --prefix=/usr \
    --host=${HOST_SYS} \
    --disable-stubdom \
    --disable-ioemu-stubdom \
    --disable-pv-grub \
    --disable-xenstore-stubdom \
"

do_configure() {
    # no stubs-32.h in our 64-bit sysroot - hack it into tools/include/gnu
    test -d ${S}/tools/include/gnu || mkdir ${S}/tools/include/gnu
    if ! test -f ${STAGING_DIR_TARGET}/usr/include/gnu/stubs-32.h ; then
        cat ${STAGING_DIR_TARGET}/usr/include/gnu/stubs-64.h | grep -v stub_bdflush | grep -v stub_getmsg | grep -v stub_putmsg > ${S}/tools/include/gnu/stubs-32.h
        echo \#define __stub___kernel_cosl >> ${S}/tools/include/gnu/stubs-32.h
        echo \#define __stub___kernel_sinl >> ${S}/tools/include/gnu/stubs-32.h
        echo \#define __stub___kernel_tanl >> ${S}/tools/include/gnu/stubs-32.h
    fi

    # do configure
    oe_runconf

    # seabios needs a patch to specify correct compiler - pull and patch Makefile
    make -C ${S}/tools/firmware seabios-dir
    sed -i 's/export HOSTCC.*$(CC)/export HOSTCC ?= $(CC)/g' ${S}/tools/firmware/seabios-dir/Makefile
}

do_compile() {
    oe_runmake
}

do_install() {
    oe_runmake DESTDIR="${D}" install

    # remove installed volatiles
    rm -rf ${D}${localstatedir}/run \
        ${D}${localstatedir}/lock \
        ${D}${localstatedir}/log \
        ${D}${localstatedir}/volatile \
        ${D}${localstatedir}/lib/xen

    # install volatiles using populate_volatiles mechanism
    install -d ${D}${sysconfdir}/default/volatiles
    echo "d root root 0755 ${localstatedir}/run/xenstored none" \
         > ${D}${sysconfdir}/default/volatiles/99_xen
    echo "d root root 0755 ${localstatedir}/run/xend none" \
         >> ${D}${sysconfdir}/default/volatiles/99_xen
    echo "d root root 0755 ${localstatedir}/run/xend/boot none" \
         >> ${D}${sysconfdir}/default/volatiles/99_xen
    echo "d root root 0755 ${localstatedir}/run/xen none" \
         >> ${D}${sysconfdir}/default/volatiles/99_xen
    echo "d root root 0755 ${localstatedir}/log/xen none" \
         >> ${D}${sysconfdir}/default/volatiles/99_xen
    echo "d root root 0755 ${localstatedir}/lock/xen none" \
         >> ${D}${sysconfdir}/default/volatiles/99_xen
    echo "d root root 0755 ${localstatedir}/lock/subsys none" \
         >> ${D}${sysconfdir}/default/volatiles/99_xen
    echo "d root root 0755 ${localstatedir}/lib/xen none" \
         >> ${D}${sysconfdir}/default/volatiles/99_xen

    # workaround for xendomains script which searchs sysconfig if directory exists
    install -d ${D}${sysconfdir}/sysconfig
    ln -sf ${sysconfdir}/default/xendomains ${D}${sysconfdir}/sysconfig/xendomains
}

pkg_postinst_${PN}-volatiles() {
    if [ -z "$D" ] && [ -e ${sysconfdir}/init.d/populate-volatile.sh ] ; then
        ${sysconfdir}/init.d/populate-volatile.sh update
    fi
}

sysroot_stage_all_append() {
    sysroot_stage_dir ${D}/boot ${SYSROOT_DESTDIR}/kernel

    install -d ${DEPLOY_DIR_IMAGE}
    install -m 0644 ${D}/boot/xen.gz ${DEPLOY_DIR_IMAGE}/xen-${MACHINE}.gz
}
