# Enable booting Xen with qemuboot / runqemu: u-boot configuration
#
# Copyright (c) 2021-2022 Star Lab Corp. All rights reserved.
#
# Author: Christopher Clark <christopher.clark@starlab.io>

# Interface variables:
#
# QB_XEN_U_BOOT_SCR :
# If this variable is set, this class will generate the u-boot script image file
# It must be set to the name of the compiled command file that u-boot will tftp
# from the image deploy directory during boot, currently: "boot.scr.uimg"
#
# QB_XEN_CMDLINE_EXTRA :
# A string to be appended to the default Xen hypervisor boot command line,
# for supplying Xen boot options.
# The device tree that this bbclass generates will contain Xen command
# line options to connect the Xen console to the Qemu serial port.
#
# QB_XEN_LOAD_ADDR :
# The hypervisor load address
#
# QB_XEN_DOM0_BOOTARGS :
# A string for specifying Dom0 boot options for the Xen section of the device
# tree.
#
# QB_XEN_UBOOT_SCR_TASK_DEPENDS:
# The task dependencies for the u-boot script generation. A default is provided.
#
# QB_XEN_DOMAIN_MODULES:
# A space-separated list of colon-separated entries:
#   "<file for the module>:<load memory address>:<module compatibility string>"

# Set the default value for this variable to empty: no file generated.
QB_XEN_U_BOOT_SCR ??= ""

write_add_chosen_module() {
    CMD_FILE="$1"
    ADDR="$2"
    SIZE="$3"
    MODULE_TYPE="$4"
    cat <<EOF >>"${CMD_FILE}"
fdt mknod /chosen module@${ADDR}
fdt set /chosen/module@${ADDR} compatible "multiboot,module" "${MODULE_TYPE}"
fdt set /chosen/module@${ADDR} reg <${ADDR} ${SIZE}>
EOF
}

generate_xen_u_boot_conf() {
    CMD_FILE="${B}/qemuboot-xen.cmd"
    cat <<EOF >"${CMD_FILE}"
echo "Running u-boot launch script"
fdt addr 0x40000000
fdt resize
echo "Device tree resized"

fdt set /chosen \#address-cells <1>
fdt set /chosen \#size-cells <1>

fdt set /chosen xen,xen-bootargs "console=dtuart dtuart=/pl011@9000000 ${QB_XEN_CMDLINE_EXTRA}"
fdt set /chosen xen,dom0-bootargs "${QB_XEN_DOM0_BOOTARGS}"
EOF

    if [ -z "${QB_XEN_DOMAIN_MODULES}" ]; then
        bbwarn "No domain modules: please set QB_XEN_DOMAIN_MODULES"
    fi

    for DOMAIN_MODULE in ${QB_XEN_DOMAIN_MODULES}
    do
        MODULE_FILE="$(echo ${DOMAIN_MODULE} | cut -f1 -d:)"
        ADDR="$(echo ${DOMAIN_MODULE} | cut -f2 -d:)"
        MODULE_TYPE="$(echo ${DOMAIN_MODULE} | cut -f3 -d:)"
        RESOLVED_FILE="$(readlink -f ${MODULE_FILE})"
        SIZE=$(printf '0x%x\n' $(stat -c '%s' "${RESOLVED_FILE}"))
        [ "x${SIZE}" != "x0x0" ] || bbfatal No module: "${MODULE_FILE}"
        write_add_chosen_module "${CMD_FILE}" "${ADDR}" "${SIZE}" "${MODULE_TYPE}"
    done

    cat <<EOF >>"${CMD_FILE}"
fdt print /chosen

echo Boot Xen
bootz ${QB_XEN_LOAD_ADDR} - 0x40000000
EOF

    uboot-mkimage -A "${UBOOT_ARCH}" -T script -C none \
                  -a 0x20000 -e 0x20000 \
                  -d "${CMD_FILE}" "${CMD_FILE}.uimg"

    # u-boot tftps this filename from DEPLOY_DIR_IMAGE:
    install -m 0644 "${CMD_FILE}.uimg" "${DEPLOY_DIR_IMAGE}/${QB_XEN_U_BOOT_SCR}"
}

do_write_qemuboot_xen_u_boot_conf() {
    # Not all architectures qemuboot with u-boot, so check to see if this
    # is needed. This allows this bbclass file to be used in the same image
    # recipe for multiple architectures.

    if [ -n "${QB_XEN_U_BOOT_SCR}" ] && [ -n "${QB_SYSTEM_NAME}" ] ; then
        generate_xen_u_boot_conf
    fi
}

addtask do_write_qemuboot_xen_u_boot_conf after do_write_qemuboot_conf before do_image
# Task dependency:
# An expected common case is that the kernel for at least one of the initial
# domains (eg. dom0) is deployed from the virtual/kernel recipe, so
# add that as a task dependency here since the kernel size needs to be known
# for generating the device tree.
# Dependencies are only introduced if a device tree will be generated.
QB_XEN_UBOOT_SCR_TASK_DEPENDS ?= " \
    ${@[ ' \
        u-boot-tools-native:do_populate_sysroot \
        u-boot:do_deploy \
        virtual/kernel:do_deploy \
    ', ''][d.getVar('QB_XEN_U_BOOT_SCR') == '']} \
    "
do_write_qemuboot_xen_u_boot_conf[depends] = "${QB_XEN_UBOOT_SCR_TASK_DEPENDS}"

def qemuboot_xen_u_boot_vars(d):
    build_vars = ['MACHINE', 'TUNE_ARCH', 'DEPLOY_DIR_IMAGE',
                'KERNEL_IMAGETYPE', 'IMAGE_NAME', 'IMAGE_LINK_NAME',
                'STAGING_DIR_NATIVE', 'STAGING_BINDIR_NATIVE',
                'STAGING_DIR_HOST', 'SERIAL_CONSOLES']
    return build_vars + [k for k in d.keys() if k.startswith('QB_')]

do_write_qemuboot_xen_u_boot[vardeps] += "${@' '.join(qemuboot_xen_u_boot_vars(d))}"
do_write_qemuboot_xen_u_boot[vardepsexclude] += "TOPDIR"
