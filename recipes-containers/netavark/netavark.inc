# Cargo installs the binary to bin so move it to where podman expects it
do_install:append() {
    install -d ${D}${libexecdir}/podman/
    mv ${D}${bindir}/* ${D}${libexecdir}/podman/
    rm -rf ${D}${bindir}/
}
