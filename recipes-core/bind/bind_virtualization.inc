# Tell named not to bother listening on the IP address that lxc and libvirtd handles itself.
do_install:append() {
	sed -i -e 's,^\( *options *{\)$,\1\n\t// lxc and libvirtd would take care of this address itself\n\tlisten-on { ! 10.0.3.1; ! 192.168.122.1; any;};\n,' ${D}${sysconfdir}/bind/named.conf.options
}
