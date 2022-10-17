PACKAGECONFIG ?= "aardvark-dns"

# From the documentation of netavark
# https://github.com/containers/netavark/blob/v1.1.0/DISTRO_PACKAGE.md#dependency-on-aardvark-dns
# The aardvark-dns will be installed by default with netavark, but
# netavark will be functional without it.
PACKAGECONFIG[aardvark-dns]= " , , , aardvark-dns"


# Cargo installs the binary to bin so move it to where podman expects it
do_install:append() {
    install -d ${D}${libexecdir}/podman/
    mv ${D}${bindir}/* ${D}${libexecdir}/podman/
    rm -rf ${D}${bindir}/
}
