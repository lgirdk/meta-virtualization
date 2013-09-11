FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://xt-checksum.scc \
            file://ebtables.scc \
	    file://vswitch.scc \
	    file://lxc.scc \
	    "
module_autoload_openvswitch = "openvswitch"
KERNEL_FEATURES_append = " features/kvm/qemu-kvm-enable.scc"

module_autoload_kvm = "kvm"
module_autoload_kvm-amd = "kvm-amd"
module_autoload_kvm-intel = "kvm-intel"

# aufs kernel support required for xen-image-minimal
KERNEL_FEATURES_append += "${@base_contains('DISTRO_FEATURES', 'aufs', ' features/aufs/aufs-enable.scc', '', d)}"

# xen dom0 kernel support
SRC_URI += "${@base_contains('DISTRO_FEATURES', 'xen', ' file://xen.scc', '', d)}"
