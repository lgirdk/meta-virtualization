# We need to set the Xen meta-virt config components, only if "xen"
# is in the distro features.  Since we don't know the distro flags during
# layer.conf load time, we delay using a special bbclass that simply includes
# the META_VIRT_CONTAINER_CONFIG_PATH file.

# the defaults are valid if we do or don't have virtualization enabled, so
# we include it in either case below. But we leave the pattern in place, to
# match the other configs of the layer and in case the above statement isn't
# always true in the future.
include ${@bb.utils.contains('DISTRO_FEATURES', 'virtualization', '${META_VIRT_CONTAINER_CONFIG_PATH}', '${META_VIRT_CONTAINER_CONFIG_PATH}', d)}
