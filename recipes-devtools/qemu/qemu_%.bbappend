PACKAGECONFIG[xen] = "--enable-xen,--disable-xen,xen-tools,xen-tools-libxenstore xen-tools-libxenctrl xen-tools-libxenguest"

require ${@bb.utils.contains('DISTRO_FEATURES', 'vmsep', '${BPN}-package-split.inc', '', d)}
