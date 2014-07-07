FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://xt-checksum.scc \
            file://ebtables.scc \
	    file://vswitch.scc \
	    file://lxc.scc \
	    "
module_autoload_openvswitch = "openvswitch"
KERNEL_FEATURES_append = " features/kvm/qemu-kvm-enable.scc"

KERNEL_MODULE_AUTOLOAD += "kvm"
KERNEL_MODULE_AUTOLOAD += "kvm-amd"
KERNEL_MODULE_AUTOLOAD += "kvm-intel"

# xen kernel support
SRC_URI += "${@base_contains('DISTRO_FEATURES', 'xen', ' file://xen.scc', '', d)}"
