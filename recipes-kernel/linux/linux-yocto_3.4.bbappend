FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://xt-checksum.scc \
            file://ebtables.scc \
	    file://vswitch.scc \
	    file://lxc.scc \
	    "

KERNEL_FEATURES_append = " features/kvm/qemu-kvm-enable.scc"

module_autoload_kvm = "kvm"
module_autoload_kvm-amd = "kvm-amd"
module_autoload_kvm-intel = "kvm-intel"
