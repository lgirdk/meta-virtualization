SUMMARY = "Xen hypervisor"
DESCRIPTION = "The Xen hypervisor"

# This recipe is for just the Xen hypervisor.
# Separate recipes are used to build Xen and its components:
# this allows for varying the target architecture or toolchain used
# to build the different components. eg. 32-bit tools and a 64-bit hypervisor.

# The Xen hypervisor has a narrower compatible platform range than the Xen tools
COMPATIBLE_HOST = '(x86_64.*).*-linux|aarch64.*-linux|arm-.*-linux-gnueabi'

inherit deploy python3native

PACKAGES = " \
    ${PN} \
    ${PN}-dbg \
    ${PN}-efi \
    "

FILES_${PN} = " \
    /boot/xen-* \
    /boot/xen \
    /boot/xen-*.gz \
    /boot/xen.gz \
    /boot/xen-syms-* \
    "

FILES_${PN}-dbg += "${libdir}/debug/*"

FILES_${PN}-efi = " \
    /boot/xen.efi \
    ${exec_prefix}/lib64/efi/xen* \
    "

do_configure() {
    do_configure_common
}

do_compile() {
    oe_runmake xen PYTHON="${PYTHON}"
}

do_install() {
    oe_runmake DESTDIR="${D}" install-xen
}

do_deploy() {
    install -d ${DEPLOYDIR}

    if [ -f ${B}/xen/xen ]; then
        install -m 0644 ${B}/xen/xen ${DEPLOYDIR}/xen-${MACHINE}
    fi

    if [ -f ${B}/xen/xen.gz ]; then
        install -m 0644 ${B}/xen/xen.gz ${DEPLOYDIR}/xen-${MACHINE}.gz
    fi

    if [ -f ${B}/xen/xen.efi ]; then
        install -m 0644 ${B}/xen/xen.efi ${DEPLOYDIR}/xen-${MACHINE}.efi
    fi
}
# Scheduling the do_deploy task:
# - deploy copies files from ${B} that are written during do_compile so must
#   at least run afer that task has completed
# - the hypervisor binaries may be included in the image filesystem, so we
#   must ensure that the binaries deployed match what is staged in the sysroot:
#   so do deploy must run after do_populate_sysroot -- which is always after
#   do_compile, so that handles 'after do_compile' too
# - add the task before do_build to ensure that deployment has completed when
#   the recipe build done stamp is written
addtask deploy after do_populate_sysroot before do_build
# To ensure that a deployed hypervisor has matching tools, add a dependency to
# make sure that the tools have built and been staged:
do_deploy[depends] += "xen-tools:do_populate_sysroot"
# Also ensure anything that the tools recipe needs to deploy, such as a
# XSM policy file, has been deployed first:
do_deploy[depends] += "xen-tools:do_deploy"

# Enable use of menuconfig directly from bitbake and also within the devshell
OE_TERMINAL_EXPORTS += "HOST_EXTRACFLAGS HOSTLDFLAGS TERMINFO"
HOST_EXTRACFLAGS = "${BUILD_CFLAGS} ${BUILD_LDFLAGS}"
HOSTLDFLAGS = "${BUILD_LDFLAGS}"
TERMINFO = "${STAGING_DATADIR_NATIVE}/terminfo"
do_devshell[depends] += "ncurses-native:do_populate_sysroot"

KCONFIG_CONFIG_COMMAND ??= "menuconfig"
python do_menuconfig() {
    import shutil

    try:
        mtime = os.path.getmtime("xen/.config")
        shutil.copy("xen/.config", "xen/.config.orig")
    except OSError:
        mtime = 0

    oe_terminal("${SHELL} -c \"cd xen; XEN_CONFIG_EXPERT=y make %s; if [ \$? -ne 0 ]; then echo 'Command failed.'; printf 'Press any key to continue... '; read r; fi\"" % d.getVar('KCONFIG_CONFIG_COMMAND'),
        d.getVar('PN') + ' Configuration', d)

    try:
        newmtime = os.path.getmtime("xen/.config")
    except OSError:
        newmtime = 0

    if newmtime > mtime:
        bb.note("Configuration changed, recompile will be forced")
        bb.build.write_taint('do_compile', d)
}
do_menuconfig[depends] += "ncurses-native:do_populate_sysroot"
do_menuconfig[nostamp] = "1"
do_menuconfig[dirs] = "${B}"
addtask menuconfig after do_configure
