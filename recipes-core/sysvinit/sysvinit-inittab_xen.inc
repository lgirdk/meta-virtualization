do_install_append() {
                echo "" >> ${D}${sysconfdir}/inittab
                echo "X0:12345:respawn:${base_sbindir}/getty-wrapper 115200 hvc0" >> ${D}${sysconfdir}/inittab
}
