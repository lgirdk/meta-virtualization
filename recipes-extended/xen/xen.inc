DESCRIPTION = "Xen is a virtual-machine monitor providing services that allow multiple computer operating systems to execute on the same computer hardware concurrently." 
HOMEPAGE = "http://xen.org"
LICENSE = "GPLv2"
SECTION = "console/tools"
PR = "r0"

# Disable xend and python support
XEN_DISABLE_XEND = "1"

DEPENDS = "util-linux util-linux-native file-native zlib ncurses openssl bison-native flex-native gettext dev86-native iasl-native pciutils virtual/libgl virtual/libsdl bridge-utils iproute2 procps"

# RDEPENDS_xen = "libgcc pciutils bridge-utils iproute2 util-linux udev procps bash"
RDEPENDS_xen-minimal = "libgcc xen-keymaps-base xen-xenstore xen-xenconsole xen-xenlight xen-hvmloader xen-qemu-dm"
RDEPENDS_xen = "libgcc xen-keymaps-base xen-xenstore xen-xenconsole xen-xenlight xen-hvmloader xen-qemu-dm xen-keymaps"
RDEPENDS_xen-networking = "bridge-utils"
RDEPENDS_xen-domains = "bash procps coreutils"
RDEPENDS_xen-commons = "bash procps coreutils"
RDEPENDS_xen-watchdog = "bash procps coreutils"

COMPATIBLE_HOST = '(x86_64.*|i.86.*).*-linux'

ALLOW_EMPTY_${PN} = "1"

PACKAGES = "\
	${PN}-boot ${PN}-watchdog ${PN}-examples ${PN}-debugging ${PN}-tools ${PN}-pm ${PN}-domains ${PN}-commons \
	${PN}-bios-ppc ${PN}-bios-sparc ${PN}-networking \
	${PN}-doc ${PN}-dbg ${PN}-staticdev ${PN}-minimal ${PN}-keymaps-base ${PN}-keymaps \
	${PN}-xenstore ${PN}-xenconsole ${PN}-xenlight ${PN}-hvmloader ${PN}-qemu-dm \
	libxenlight libfsimage libflask libxenguest libblktap libblktapctl libvhd libxlutil libxenstore libxenctrl \
	libxenlight-dev libfsimage-dev libflask-dev libxenguest-dev libblktap-dev libblktapctl-dev libvhd-dev libxlutil-dev libxenstore-dev libxenctrl-dev \
	${PN}-dev ${PN} \
	"

FILES_${PN} += "\
	${libdir}/xen \
	${libdir}/fs \
	/usr/lib64 \
	"

FILES_${PN}-minimal = "\
	${sysconfdir}/init.d/xenminiinit \
	"

FILES_${PN}-qemu-dm = "\
        ${libdir}/xen/bin/qemu-dm \
        /var/lib/xen \
        "

FILES_${PN}-keymaps-base = "\
	/usr/share/xen/qemu/keymaps/common \
	/usr/share/xen/qemu/keymaps/modifiers \
	/usr/share/xen/qemu/keymaps/en-us \
	"

FILES_${PN}-keymaps = "\
	/usr/share/xen/qemu/keymaps \
	"

FILES_${PN}-xenlight = "\
	${sbindir}/xl \
	${sysconfdir}/xen/xl.conf \
	${sysconfdir}/bash_completion.d/xl.sh \
	"

FILES_${PN}-xenconsole = "\
	${sbindir}/xenconsoled \
	${libdir}/xen/bin/xc_restore \
	${libdir}/xen/bin/xc_save \
	${libdir}/xen/bin/xenconsole \
	"

FILES_${PN}-xenstore = "\
	${bindir}/xenstore \
	${bindir}/xenstore-* \
	${sbindir}/xenstored \
	/var/run/xenstored \
	"

FILES_${PN}-hvmloader = "\
	${libdir}/xen/boot/hvmloader \
	"

FILES_libxenlight = "${libdir}/libxenlight.so.*"
FILES_libxenlight-dev = "${libdir}/libxenlight.so {libdir}/libxenlight.a"
FILES_libfsimage = "${libdir}/libfsimage.so.*"
FILES_libfsimage-dev = "${libdir}/libfsimage.so {libdir}/libfsimage.a"
FILES_libflask = "${libdir}/libflask.so.*"
FILES_libflask-dev = "${libdir}/libflask.so ${libdir}/libflask.a"
FILES_libxenguest = "${libdir}/libxenguest.so.*"
FILES_libxenguest-dev = "${libdir}/libxenguest.so ${libdir}/libxenguest.a"
FILES_libblktap = "${libdir}/libblktap.so.*"
FILES_libblktap-dev = "${libdir}/libblktap.so ${libdir}/libblktap.a"
FILES_libblktapctl = "${libdir}/libblktapctl.so.*"
FILES_libblktapctl-dev = "${libdir}/libblktapctl.so ${libdir}/libblktapctl.a"
FILES_libxlutil = "${libdir}/libxlutil.so.*"
FILES_libxlutil-dev = "${libdir}/libxlutil.so ${libdir}/libxlutil.a"
FILES_libvhd = "${libdir}/libvhd.so.*"
FILES_libvhd-dev = "${libdir}/libvhd.so ${libdir}/libvhd.a"
FILES_libxenstore = "${libdir}/libxenstore.so.*"
FILES_libxenstore-dev = "${libdir}/libxenstore.so ${libdir}/libxenstore.a"
FILES_libxenctrl = "${libdir}/libxenctrl.so.*"
FILES_libxenctrl-dev = "${libdir}/libxenctrl.so ${libdir}/libxenctrl.a"

FILES_${PN}-doc += "\
	/usr/share/xen/man \
	${sysconfdir}/xen/README* \
	"

FILES_${PN}-dbg += "\
	${libdir}/xen/bin/.debug \
	${libdir}/fs/ufs/.debug \
	${libdir}/fs/zfs/.debug \
	${libdir}/fs/ext2fs-lib/.debug \
	${libdir}/fs/fat/.debug \
	${libdir}/fs/iso9660/.debug \
	${libdir}/fs/reiserfs/.debug \
	"

FILES_${PN}-boot = "/boot"

FILES_${PN}-domains = "\
	${sysconfdir}/default/xendomains \
	${sysconfdir}/init.d/xendomains \
	"

FILES_${PN}-commons = "\
	${sysconfdir}/default/xencommons \
	${sysconfdir}/init.d/xencommons \
	"

FILES_${PN}-bios-sparc = "\
	/usr/share/xen/qemu/openbios-sparc32 \
	/usr/share/xen/qemu/openbios-sparc64 \
	"

FILES_${PN}-bios-ppc = "\
	/usr/share/xen/qemu/openbios-ppc \
	/usr/share/xen/qemu/ppc_rom.bin \
	"

FILES_${PN}-networking = "\
	${sysconfdir}/xen/scripts/network-nat \
	${sysconfdir}/xen/scripts/network-route \
	${sysconfdir}/xen/scripts/qemu-ifup \
	${sysconfdir}/xen/scripts/vif2 \
	${sysconfdir}/xen/scripts/vif-bridge \
	${sysconfdir}/xen/scripts/vif-route \
	${sysconfdir}/xen/scripts/vif-setup \
	${sysconfdir}/xen/scripts/vif-common \
	${sysconfdir}/xen/scripts/vif-nat \
	${sysconfdir}/xen/scripts/xen-network-common \
	/usr/share/xen/qemu/pxe-e1000.bin \
	/usr/share/xen/qemu/pxe-ne2k_pci.bin \
	/usr/share/xen/qemu/pxe-pcnet.bin \
	/usr/share/xen/qemu/pxe-rtl8139.bin \
	"

FILES_${PN}-pm = "\
	${sbindir}/xenpmd \
	${sbindir}/xenpm \
	"

FILES_${PN}-watchdog = "\
	${sysconfdir}/init.d/xen-watchdog \
	${sbindir}/xenwatchdogd \
	"

FILES_${PN}-examples = "\
	${sysconfdir}/xen/xmexample* \
	"

FILES_${PN}-debugging = "\
	${sbindir}/gdbsx \
	${sbindir}/kdd \
	${sbindir}/xen-hvmcrash \
	${sbindir}/gtraceview \
	${sbindir}/gtracestat \
	"

FILES_${PN}-tools = "\
	${bindir}/xen-detect \
	${bindir}/xentrace \
	${bindir}/xentrace_* \
	${bindir}/qemu-img-xen \
	${sbindir}/tap-ctl \
	${sbindir}/xentrace_* \
	${sbindir}/tapdisk \
	${sbindir}/tapdisk2 \
	${sbindir}/tapdisk-* \
	${sbindir}/flask-genenforce \
	${sbindir}/qcow-create \
	${sbindir}/qcow2raw \
	${sbindir}/xen-hptool \
	${sbindir}/blktapctrl \
	${sbindir}/xsview \
	${sbindir}/xen-hvmctx \
	${sbindir}/lock-util \
	${sbindir}/tapdisk-stream \
	${sbindir}/vhd-update \
	${sbindir}/xenpaging \
	${sbindir}/xenperf \
	${sbindir}/xenlockprof \
	${sbindir}/td-util \
	${sbindir}/flask-loadpolicy \
	${sbindir}/xentop \
	${sbindir}/img2qcow \
	${sbindir}/flask-setenforce \
	${sbindir}/xen-tmem-list-parse \
	${sbindir}/vhd-util \
	${sbindir}/xenbaked \
	"

# Don't run architecture tests on xen packages
QAPATHTEST[arch]=""

inherit update-rc.d

INITSCRIPT_PACKAGES = "${PN}-commons ${PN}-watchdog ${PN}-domains"
INITSCRIPT_NAME_${PN}-commons = "xencommons"
INITSCRIPT_PARAMS_${PN}-commons = "defaults 62"
INITSCRIPT_NAME_${PN}-watchdog = "xen-watchdog"
INITSCRIPT_PARAMS_${PN}-watchdog = "defaults 66"
INITSCRIPT_NAME_${PN}-domains = "xendomains"
INITSCRIPT_PARAMS_${PN}-domains = "defaults 68"
NITSCRIPT_NAME_${PN}-minimal = "xenminiinit"
INITSCRIPT_PARAMS_${PN}-minimal = "defaults 69"

do_compile() {

	# Hack to get around missing/failed multilib support
	export LIBLEAFDIR_x86_64=lib
	test -d ${S}/tools/firmware/rombios/gnu || mkdir ${S}/tools/firmware/rombios/gnu
	test -e ${S}/tools/firmware/rombios/32bit/gnu || ln -s ../gnu ${S}/tools/firmware/rombios/32bit/gnu
	test -e ${S}/tools/firmware/hvmloader/gnu || ln -s ../rombios/gnu ${S}/tools/firmware/hvmloader/gnu
	test -e ${S}/tools/firmware/hvmloader/acpi/gnu || ln -s ../../rombios/gnu ${S}/tools/firmware/hvmloader/acpi/gnu
	test -d ${S}/tools/include || mkdir -p ${S}/tools/include
	test -e ${S}/tools/include/gnu || ln -s ../firmware/rombios/gnu ${S}/tools/include/gnu

	if ! test -f ${STAGING_DIR_TARGET}/usr/include/gnu/stubs-32.h ; then
		cat ${STAGING_DIR_TARGET}/usr/include/gnu/stubs-64.h | grep -v stub_bdflush | grep -v stub_getmsg | grep -v stub_putmsg > ${S}/tools/firmware/rombios/gnu/stubs-32.h
		echo \#define __stub___kernel_cosl >> ${S}/tools/firmware/rombios/gnu/stubs-32.h
		echo \#define __stub___kernel_sinl >> ${S}/tools/firmware/rombios/gnu/stubs-32.h
		echo \#define __stub___kernel_tanl >> ${S}/tools/firmware/rombios/gnu/stubs-32.h
	fi
	# End multilib hack
	
	export CONFIG_QEMU=${WORKDIR}/git

	export XEN_TARGET_ARCH=${TARGET_ARCH}
	export XEN_OS=Linux
	export XEN_DISABLE_XEND=${XEN_DISABLE_XEND}

	export EXTRA_PREFIX=${STAGING_DIR_TARGET}
	export CROSS_COMPILE=${TARGET_PREFIX}
	export CROSS_BIN_PATH=${STAGING_DIR_NATIVE}/usr/bin
	export CROSS_SYS_ROOT=${STAGING_DIR_TARGET}

	# These are needed by sysconfig.py
	export BUILD_SYS=${BUILD_SYS}
	export HOST_SYS=${HOST_SYS}
	export STAGING_INCDIR=${STAGING_INCDIR}
	export STAGING_LIBDIR=${STAGING_LIBDIR}

	export CFLAGS=
	export LDFLAGS=

	# These two checks are for binaries that are not installed yet
	rm -f ${S}/tools/check/check_python_devel
	rm -f ${S}/tools/check/check_xgettext

	# These checks are for libraries utilizing ldconfig
	rm -f ${S}/tools/check/check_zlib_lib
	rm -f ${S}/tools/check/check_crypto_lib

	#stubdom image builds are being a pain
	oe_runmake dist-xen dist-tools dist-kernels dist-docs
}

do_install() {

	for foo in `find ${S}/dist/install -type f` ; do
		if file $foo | grep text 2>&1 ; then
			echo Fixing paths in $foo
			sed -e "s%${STAGING_DIR_NATIVE}%%g" -i $foo
			sed -e "s%${STAGING_DIR_TARGET}%%g" -i $foo
		fi
	done
	
	cp -av ${S}/dist/install/* ${D}/
	install -d ${D}/etc/xen
	install -d ${D}/etc/init.d

	install -m 0755 ${WORKDIR}/xenminiinit.sh ${D}/etc/init.d/xenminiinit
	install -m 0644 ${WORKDIR}/xend-config.sxp ${D}/etc/xen/xend-config.sxp
	test -e ${D}/usr/lib64 || ln -s lib ${D}/usr/lib64

}

sysroot_stage_all_append() {
        sysroot_stage_dir ${D}/boot ${SYSROOT_DESTDIR}/kernel

	install -d ${DEPLOY_DIR_IMAGE}
	install -m 0644 ${D}/boot/xen.gz ${DEPLOY_DIR_IMAGE}/xen-${MACHINE}.gz 
}

