# The recipe for init-ifupdown in core has a special-case for all
# the Qemu MACHINES: it removes all external network interfaces
# by default. However, eth0 is needed for testimage, so enable it here.
enable_runqemu_network() {
    : # no-op for non-qemu MACHINES
}
enable_runqemu_network:qemuall() {
    if ! grep -q eth0 "${IMAGE_ROOTFS}${sysconfdir}/network/interfaces" ; then
        cat <<EOF >>${IMAGE_ROOTFS}${sysconfdir}/network/interfaces

# Network for testimage
auto eth0
iface eth0 inet dhcp
EOF
    fi
}
ROOTFS_POSTPROCESS_COMMAND += 'enable_runqemu_network;'
