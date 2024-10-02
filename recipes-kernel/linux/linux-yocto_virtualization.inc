FILESEXTRAPATHS:prepend := "${THISDIR}/linux-yocto:"

KERNEL_FEATURES:append = " ${@bb.utils.contains('DISTRO_FEATURES', 'kvm', ' features/kvm/qemu-kvm-enable.scc', '', d)}"

KERNEL_MODULE_AUTOLOAD += "nf_conntrack_ipv6 openvswitch"
KERNEL_MODULE_AUTOLOAD += "${@bb.utils.contains('DISTRO_FEATURES', 'kvm', 'kvm', '', d)}"

# aufs kernel support required for xen-image-minimal
KERNEL_FEATURES:append = "${@bb.utils.contains('DISTRO_FEATURES', 'aufs', ' features/aufs/aufs-enable.scc', '', d)}"

# Always add a local/layer fragment for easy debug and enabling of options
SRC_URI += "file://extra-configs.cfg"

# if the kernel-yocto meta-data routine automatically starts to add the
# recipe-sysroot-native, we can do away with this conditional, since all
# features will be found at the same relative offset from a search
# directory
def kernel_cache_cond_feature(src_uri,feature):
    import re
    kernel_cache = re.search("kernel-cache", src_uri )
    if kernel_cache:
       return feature

    return "../recipe-sysroot-native/kcfg/" + feature

# no conditional, just use the yocto-kernel-cache addition, yes
# the src_uri isn't used, but we may need to check it in the future
def kernel_cache_feature(src_uri,feature):
    return "../recipe-sysroot-native/kcfg/" + feature

def distro_cond_feature(feature_fragment,distro_feature,d):
    import bb
    feat = kernel_cache_feature("",feature_fragment)
    return bb.utils.contains('DISTRO_FEATURES', distro_feature, ' ' + feat, ' ', d)

KERNEL_CACHE_FEATURES ?= "${@kernel_cache_feature(d.getVar('SRC_URI'),'cfg/virtio.scc')} \
                          ${@kernel_cache_feature(d.getVar('SRC_URI'),'cfg/xt-checksum.scc')} \
                          ${@kernel_cache_feature(d.getVar('SRC_URI'),'cfg/vswitch.scc')} \
                          ${@kernel_cache_feature(d.getVar('SRC_URI'),'cfg/lxc.scc')} \
                          ${@kernel_cache_feature(d.getVar('SRC_URI'),'cfg/docker.scc')} \
                          ${@kernel_cache_feature(d.getVar('SRC_URI'),'cfg/cgroup-hugetlb.scc')} \
                          ${@kernel_cache_feature(d.getVar('SRC_URI'),'cfg/criu.scc')} \
                          "
KERNEL_FEATURES:append = " ${KERNEL_CACHE_FEATURES}"

# if kernel-yocto has been inherited (how we can check for configuration
# fragment merging suport at the moment, then add a dependency on the
# configuration fragment repository. This allows us to be sure that our
# features can be enabled via the fragments
do_kernel_metadata[depends] += "${@['', 'yocto-cfg-fragments-native:do_populate_sysroot'][(bb.data.inherits_class('kernel-yocto', d))]}"

# if externalsrc is enabled, do_kernel_metadata dependency on
# yocto-cfg-fragments-native won't be run to populate
# recipe-sysroot-native/kcfg because do_patch is not run.  Manually add
# the dependency to do_kernel_configme for this special case
do_kernel_configme[depends] += "${@['', d.getVar('PN') + ':do_kernel_metadata'][(bb.data.inherits_class('externalsrc', d))]}"

# xen kernel support
# SRC_URI += "${@bb.utils.contains('DISTRO_FEATURES', 'xen', ' file://xen.scc', '', d)}"
KERNEL_FEATURES:append = "${@distro_cond_feature('cfg/xen.scc', 'xen', d )}"

# k8s and k3s kernel support
# SRC_URI += "${@bb.utils.contains('DISTRO_FEATURES', 'k8s', ' file://kubernetes.scc', '', d)}"
# SRC_URI += "${@bb.utils.contains('DISTRO_FEATURES', 'k3s', ' file://kubernetes.scc', '', d)}"
KERNEL_FEATURES:append = "${@distro_cond_feature('cfg/kubernetes.scc', 'k8s', d )}"
KERNEL_FEATURES:append = "${@distro_cond_feature('cfg/kubernetes.scc', 'k3s', d )}"

