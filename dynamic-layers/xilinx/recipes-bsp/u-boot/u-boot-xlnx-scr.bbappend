# Include xen-boot-cmd.inc only if xen distro features is enabled.
include ${@bb.utils.contains('DISTRO_FEATURES', 'xen', 'xen-boot-cmd.inc', '', d)}
