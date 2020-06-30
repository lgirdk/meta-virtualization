do_deploy_append() {
    # We need the GIC enabled for Xen to work.
    if [ "${@bb.utils.contains('DISTRO_FEATURES', 'xen', 'yes', 'no', d)}" = "yes" ]; then
        echo "enable_gic=1" >> ${DEPLOYDIR}/bcm2835-bootfiles/config.txt
    fi
}
