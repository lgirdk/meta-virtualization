inherit ptest

SRC_URI += " \
    file://run-ptest \
"

# Cargo installs the binary to bin so move it to where podman expects it
do_install:append() {
    install -d ${D}${libexecdir}/podman/
    mv ${D}${bindir}/* ${D}${libexecdir}/podman/
    rm -rf ${D}${bindir}/
}


do_install_ptest () {
	cp -r ${S}/test ${D}${PTEST_PATH}
}

RDEPENDS:${PN}-ptest += " \
    bats \
    bash \
    coreutils \
    jq \
    iproute2 \
    slirp4netns \
    dbus-daemon-proxy \
    util-linux-unshare \
    bind-utils \
    ipcalc \
"
