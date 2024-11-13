DESCRIPTION = "A minimal xen image"

inherit features_check

REQUIRED_DISTRO_FEATURES ?= "xen systemd"

INITRD_IMAGE = "core-image-minimal-initramfs"

XEN_KERNEL_MODULES ?= "kernel-module-xen-blkback kernel-module-xen-gntalloc \
                       kernel-module-xen-gntdev kernel-module-xen-netback kernel-module-xen-wdt \
                       kernel-module-xt-comment kernel-module-xt-masquerade \
                       ${@bb.utils.contains('MACHINE_FEATURES', 'pci', "${XEN_PCIBACK_MODULE}", '', d)} \
                       ${@bb.utils.contains('MACHINE_FEATURES', 'acpi', '${XEN_ACPI_PROCESSOR_MODULE}', '', d)} \
                      "

IMAGE_INSTALL += " \
    packagegroup-core-boot \
    packagegroup-core-ssh-openssh \
    ${XEN_KERNEL_MODULES} \
    xen-tools \
    qemu \
    kernel-image \
    kernel-vmlinux \
    rsync \
    "

# The hypervisor may not be within the dom0 filesystem image but at least
# ensure that it is deployable:
do_build[depends] += "xen:do_deploy"

# Networking for HVM-mode guests (x86/64 only) requires the tun kernel module
IMAGE_INSTALL:append:x86    = " kernel-module-tun"
IMAGE_INSTALL:append:x86-64 = " kernel-module-tun"

# Linux kernel option CONFIG_XEN_PCIDEV_BACKEND depends on X86
XEN_PCIBACK_MODULE = ""
XEN_PCIBACK_MODULE:x86    = "kernel-module-xen-pciback"
XEN_PCIBACK_MODULE:x86-64 = "kernel-module-xen-pciback"
XEN_ACPI_PROCESSOR_MODULE = ""
XEN_ACPI_PROCESSOR_MODULE:x86    = "kernel-module-xen-acpi-processor"
XEN_ACPI_PROCESSOR_MODULE:x86-64 = "kernel-module-xen-acpi-processor"

LICENSE = "MIT"

QB_NETWORK_XEN_BRIDGE = "1"

inherit core-image
# Only inherit the qemuboot classes when building for a qemu machine
QB_QEMU_CLASSES = ""
QB_QEMU_CLASSES:qemuall = "qemuboot-xen-defaults qemuboot-xen-dtb qemuboot-testimage-network"
inherit ${QB_QEMU_CLASSES}

# note: this may be unused, see the wic plugin
syslinux_iso_populate:append() {
	install -m 0444 ${STAGING_DATADIR}/syslinux/libcom32.c32 ${ISODIR}${ISOLINUXDIR}
	install -m 0444 ${STAGING_DATADIR}/syslinux/mboot.c32 ${ISODIR}${ISOLINUXDIR}
}

# note: this may be unused, see the wic plugin
syslinux_hddimg_populate:append() {
	install -m 0444 ${STAGING_DATADIR}/syslinux/libcom32.c32 ${HDDDIR}${SYSLINUXDIR}
	install -m 0444 ${STAGING_DATADIR}/syslinux/mboot.c32 ${HDDDIR}${SYSLINUXDIR}
}

# note: this may be unused, see the wic plugin
grubefi_populate:append() {
	install -m 0644 ${DEPLOY_DIR_IMAGE}/xen-${MACHINE}.gz ${DEST}${EFIDIR}/xen.gz
}

# note: this may be unused, see the wic plugin
syslinux_populate:append() {
	install -m 0644 ${DEPLOY_DIR_IMAGE}/xen-${MACHINE}.gz ${DEST}/xen.gz
}

SYSLINUX_XEN_ARGS ?= "loglvl=all guest_loglvl=all console=com1,vga com1=115200,8n1"
SYSLINUX_KERNEL_ARGS ?= "ramdisk_size=32768 root=/dev/ram0 rw console=hvc0 earlyprintk=xen console=tty0 panic=10 LABEL=boot debugshell=5"

# note: this may be unused, see the wic plugin
build_syslinux_cfg () {
	echo "ALLOWOPTIONS 1" > ${SYSLINUX_CFG}
	echo "DEFAULT boot" >> ${SYSLINUX_CFG}
	echo "TIMEOUT 10" >> ${SYSLINUX_CFG}
	echo "PROMPT 1" >> ${SYSLINUX_CFG}
	echo "LABEL boot" >> ${SYSLINUX_CFG}
	echo "  KERNEL mboot.c32" >> ${SYSLINUX_CFG}
	echo "  APPEND /xen.gz ${SYSLINUX_XEN_ARGS} --- /vmlinuz ${SYSLINUX_KERNEL_ARGS} --- /initrd" >> ${SYSLINUX_CFG}
}

# Function to parse the config file and get values for specific keys
get_config_value() {
    config_file="$1"
    key="$2"
    line=$(grep -w "$key" $config_file)
    value=$(echo "$line" | cut -d '=' -f 2-)
    # Remove quotes, leading/trailing whitespace, and content after the first comma
    echo "${value#*=}" | sed "s/'//g; s/^\s*|\s*$//g; s/\[//g;s/\"//g;s/^ *//g;" | cut -d ',' -f 1
}

generate_guest_config() {
    name=$1
    kernel=$2
    disk=$3
    outname=$name.cfg

    cat <<EOF >${DEPLOY_DIR_IMAGE}/$outname
name = "$name"
memory = 512
vcpus = 1
disk = ['file:$disk,xvda,rw']
vif = ['bridge=xenbr0']
kernel = "$kernel"
extra = "root=/dev/xvda ro ip=dhcp"
EOF
}

# Guests can be bundled automatically through the following mechanisms:
#
#   - via the variable XEN_BUNDLED_GUESTS
#   - via a xen configuration file in the deploy directory of the format
#     xen-guest-bundle-*.cfg
#
# The guests can be built via OE, or be 3rd party guests. They just
# must be in the deploy directory so they can be copied into the rootfs
# of the xen host image
#
# Type 1) XEN_BUNDLED_GUESTS
#
# If XEN_BUNDLED_GUESTS is used, it is simply a colon separated list of
# rootfs:kernels. Normal variable rules apply, so it can be set in a
# local.conf, or in a bbappend to the image recipe.
#
# An example would be:
#
#  XEN_BUNDLED_GUESTS = "xen-guest-image-minimal-qemuarm64.rootfs.ext4:Image"
#
# These point at symlinks created in the image deploy directory, or they
# can be specific images/kernels without the symlink.
#
# Type 2) A Xen guest configuration file
#
# If xen guest configuration files are found in the deploy directories
# the kernel and disk information contained within them will be processed
# and modified for the xen host. The kernel and guest image will be
# copied to the appropriate location, and the config made to match.
#
# These files following the naming convention: xen-guest-bundle*.cfg
#
# Guests of type #1 generate a configuration file that is picked up as
# type #2.
#
# An example config file follows:
#
## name = "xen-guest"
## memory = 512
## vcpus = 1
## disk = ['file:xen-guest-image-minimal-qemuarm64.rootfs.ext4,xvda,rw']
## vif = ['bridge=xenbr0']
## kernel = "Image"
## extra = "root=/dev/xvda ro console=hvc0 ip=dhcp"
#
# It should also be noted that when a xen-guest-image-minimal is built
# with the XEN_GUEST_AUTO_BUNDLE varaible set to True, a configuration
# file for type #2 will be generated and the guest bundled automatically
# when the host image is built.
#
# kernel and rootfs are copied to the target in /var/lib/xen/images/
#
# configuration files are copied to: /etc/xen
#
# Guests can be launched after boot with: xl create -c /etc/xen/<config file>
#
bundle_xen_guests() {
    set +e

    if [ -n "${XEN_BUNDLED_GUESTS}" ]; then
	echo "Processing Xen bundled guests variable: ${XEN_BUNDLED_GUESTS}"
	# these are a colon separated list of rootfs:kernel
	count=1
	for g in ${XEN_BUNDLED_GUESTS}; do
	    echo "Guest line: $g"
	    rootfs=$(echo "$g" | cut -d":" -f1)
	    kernel=$(echo "$g" | cut -d":" -f2)
	    name="xen-guest-bundle-$count"

	    if ! [ -e ${DEPLOY_DIR_IMAGE}/$rootfs ]; then
		echo "rootfs '${DEPLOY_DIR_IMAGE}/$rootfs' not found, skipping ...."
		continue
	    fi
	    if ! [ -e ${DEPLOY_DIR_IMAGE}/$kernel ]; then
		echo "kernel '${DEPLOY_DIR_IMAGE}/$kernel' not found, skipping ...."
		continue
	    fi

	    generate_guest_config $name $kernel $rootfs

	    count=$(expr $count + 1)
	done
    fi

    echo ls ${DEPLOY_DIR_IMAGE}/xen-guest-bundle*.cfg
    ls ${DEPLOY_DIR_IMAGE}/xen-guest-bundle*.cfg >/dev/null 2>/dev/null
    if [ $? -eq 0 ]; then
	for guest_cfg in $(ls ${DEPLOY_DIR_IMAGE}/xen-guest-bundle*.cfg); do
	    echo "Bundling guest: $guest_cfg"

	    CONFIG_FILE_BASE=$(basename $guest_cfg .cfg)
	    CONFIG_FILE="${DEPLOY_DIR_IMAGE}/$CONFIG_FILE_BASE.cfg"
	    DEST_DIR="${IMAGE_ROOTFS}/var/lib/xen/images"
	    MODIFIED_CONFIG_FILE="${DEPLOY_DIR_IMAGE}/$CONFIG_FILE_BASE-modified.cfg"

	    # Extract values from the configuration file
	    DISK_ORIG=$(get_config_value $CONFIG_FILE "disk" | sed 's/file://g')
	    DISK=$(readlink -f ${DEPLOY_DIR_IMAGE}/$DISK_ORIG)
	    DISK_NAME=$(basename $DISK)
	    KERNEL_ORIG=$(get_config_value $CONFIG_FILE "kernel")
	    KERNEL=$(readlink -f ${DEPLOY_DIR_IMAGE}/$KERNEL_ORIG)
	    KERNEL_NAME=$(basename $KERNEL)

	    if [ -z "$DISK" ]; then
		echo "rootfs '$DISK' not found, skipping ...."
		continue
	    fi
	    if [ -z "$KERNEL" ]; then
		echo "kernel '$KERNEL' not found, skipping ...."
		continue
	    fi

	    mkdir -p "$DEST_DIR"
	    # Copy the disk and kernel to the destination directory
	    echo "Copying disk and kernel files..."
	    echo cp "$DISK" "$DEST_DIR"
	    echo cp "$KERNEL" "$DEST_DIR"
	    cp "$DISK" "$DEST_DIR"
	    cp "$KERNEL" "$DEST_DIR"

	    # Create a modified config file with updated paths
	    sed -E \
		-e "s#^(disk = \[)[^,]+#\1'file:/var/lib/xen/images/$DISK_NAME#" \
		-e "s#^(kernel = )\"[^\"]+\"#\1\"/var/lib/xen/images/$KERNEL_NAME\"#" \
		"$CONFIG_FILE" > "$MODIFIED_CONFIG_FILE"

	    mkdir -p ${IMAGE_ROOTFS}/etc/xen
	    cp $MODIFIED_CONFIG_FILE ${IMAGE_ROOTFS}/etc/xen/$CONFIG_FILE_BASE.cfg
	    rm -f $MODIFIED_CONFIG_FILE
	done
    fi
    # exit 1
}
ROOTFS_POSTPROCESS_COMMAND += "bundle_xen_guests;"

# Enable runqemu. eg: runqemu xen-image-minimal nographic slirp
WKS_FILE:x86-64 = "directdisk-xen.wks"
WKS_FILE_DEPENDS_DEFAULT:x86-64 = "syslinux-native"
WKS_FILE:qemux86-64 = "qemuboot-xen-x86-64.wks"
WKS_FILE_DEPENDS_DEFAULT:qemux86-64 = "syslinux-native"
QB_MEM ?= "-m 400"
QB_DEFAULT_KERNEL ?= "none"
QB_DEFAULT_FSTYPE ?= "wic"
QB_DEFAULT_FSTYPE:qemux86-64 = "wic"
QB_FSINFO ?= "wic:kernel-in-fs"
QB_SERIAL_OPT = "-serial mon:stdio"
# qemux86-64 machine does not include 'wic' in IMAGE_FSTYPES, which is needed
# to boot this image, so add it here:
IMAGE_FSTYPES:qemux86-64 += "wic"
do_image_wic[depends] += "xen:do_deploy"
# Networking: the qemuboot.bbclass default virtio network device works ok
# and so does the emulated e1000 -- choose according to the network device
# drivers that are present in your dom0 Linux kernel. To switch to e1000:
# QB_NETWORK_DEVICE = "-device e1000,netdev=net0,mac=@MAC@"


IMAGE_ROOTFS_SIZE = "8192"
# we always need extra space to install VMs, so add 2GB
IMAGE_ROOTFS_EXTRA_SPACE = "2000000"
