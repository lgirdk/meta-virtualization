SERIAL_CONSOLES_append = "${@bb.utils.contains('DISTRO_FEATURES', 'xen', ' 115200;hvc0', '', d)}"
