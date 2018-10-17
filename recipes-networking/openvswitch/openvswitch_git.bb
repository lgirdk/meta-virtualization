require openvswitch.inc

DEPENDS += "virtual/kernel"

PACKAGE_ARCH = "${MACHINE_ARCH}"

RDEPENDS_${PN}-ptest += "\
	python3-logging python3-syslog python3-io \
	python3-fcntl python3-shell python3-xml python3-math \
	python3-datetime python3-netclient python3 sed \
	ldd perl-module-socket perl-module-carp perl-module-exporter \
	perl-module-xsloader python3-netserver python3-threading \
	python3-resource findutils which \
	"

S = "${WORKDIR}/git"
PV = "2.10.0+${SRCREV}"

FILESEXTRAPATHS_append := "${THISDIR}/${PN}-git:"

SRCREV = "5563e309b80bbea9bff538e71ecfd7e5e538bab9"
SRC_URI = "file://openvswitch-switch \
           file://openvswitch-switch-setup \
           file://openvswitch-testcontroller \
           file://openvswitch-testcontroller-setup \
           git://github.com/openvswitch/ovs.git;protocol=git;branch=branch-2.10 \
           file://openvswitch-add-ptest-${SRCREV}.patch \
           file://run-ptest \
           file://disable_m4_check.patch \
           file://kernel_module.patch \
           file://python-make-remaining-scripts-use-usr-bin-env.patch \
           file://0002-Define-WAIT_ANY-if-not-provided-by-system.patch \
           file://python-switch-remaining-scripts-to-use-python3.patch \
           file://systemd-update-tool-paths.patch \
           file://systemd-create-runtime-dirs.patch \
           "

LIC_FILES_CHKSUM = "file://LICENSE;md5=1ce5d23a6429dff345518758f13aaeab"

DPDK_INSTALL_DIR ?= "/opt/dpdk"

PACKAGECONFIG ?= "libcap-ng"
PACKAGECONFIG[dpdk] = "--with-dpdk=${STAGING_DIR_TARGET}${DPDK_INSTALL_DIR}/share/${TARGET_ARCH}-native-linuxapp-gcc,,dpdk,dpdk"
PACKAGECONFIG[libcap-ng] = "--enable-libcapng,--disable-libcapng,libcap-ng,"
PACKAGECONFIG[ssl] = ",--disable-ssl,openssl,"

# Don't compile kernel modules by default since it heavily depends on
# kernel version. Use the in-kernel module for now.
# distro layers can enable with EXTRA_OECONF_pn_openvswitch += ""
# EXTRA_OECONF += "--with-linux=${STAGING_KERNEL_BUILDDIR} --with-linux-source=${STAGING_KERNEL_DIR} KARCH=${TARGET_ARCH}"

# silence a warning
FILES_${PN} += "/lib/modules"

inherit ptest

EXTRA_OEMAKE += "TEST_DEST=${D}${PTEST_PATH} TEST_ROOT=${PTEST_PATH}"

do_install_ptest() {
	oe_runmake test-install
}

do_install_append() {
	oe_runmake modules_install INSTALL_MOD_PATH=${D}
}
