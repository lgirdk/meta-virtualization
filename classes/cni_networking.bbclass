DEPENDS_append_class-target = " cni"

PACKAGES_prepend = "${PN}-cni "

FILES_${PN}-cni = "${sysconfdir}/cni/net.d/*"

RDEPENDS_${PN}-cni = "cni"

do_install_append() {
    if [ -z "${CNI_NETWORKING_FILES}" ]; then
	bbfatal "cni-networking was inherited, but no networking configuration was provided via CNI_NETWORKING_FILES"
    fi
    install -d "${D}/${sysconfdir}/cni/net.d/"
    for f in ${CNI_NETWORKING_FILES}; do
	conf_name="$(basename $f)"
	install -D -m 0644 "$f" "${D}/${sysconfdir}/cni/net.d/$conf_name"
    done
}
