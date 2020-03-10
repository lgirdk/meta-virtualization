# if vmsep is in distro features, we need a static libxycryp, so we can build
# a static busybox. The end result of this is:
#    EXTRA_OECONF_remove = "--disable-static"
EXTRA_OECONF_remove = "${@bb.utils.contains('DISTRO_FEATURES', 'vmsep', '--disable-static', '', d)}"
