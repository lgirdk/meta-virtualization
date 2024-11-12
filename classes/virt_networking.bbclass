# Similarly to the cni_networking.bbclass this class should be
# inherted by recipes to produce a package that contains their
# desired networking configuration.
#
# Currently only systemd networking is supported, but this will
# be extended in the future
#
# By simply specifying the configuration / networking files,
# they will be package and then eventually installed to the
# correct target location.
#
PACKAGES:prepend = "${PN}-net-conf "
FILES:${PN}-net-conf = "${sysconfdir}/systemd/network/*"

do_install:append() {
    if [ -z "${VIRT_NETWORKING_FILES}" ]; then
	bbfatal "virt-networking was inherited, but no networking configuration was provided via VIRT_NETWORKING_FILES"
    fi

    # TODO: possibily make the systemd configuration conditional on the init manager
    install -d "${D}/${sysconfdir}/systemd/network/"
    for f in ${VIRT_NETWORKING_FILES}; do
	conf_name="$(basename $f)"
	install -D -m 0644 "$f" "${D}/${sysconfdir}/systemd/network/$conf_name"
    done
}
