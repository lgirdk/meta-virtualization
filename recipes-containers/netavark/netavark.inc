inherit ptest

PACKAGECONFIG ?= "aardvark-dns"

# From the documentation of netavark
# https://github.com/containers/netavark/blob/v1.1.0/DISTRO_PACKAGE.md#dependency-on-aardvark-dns
# The aardvark-dns will be installed by default with netavark, but
# netavark will be functional without it.
PACKAGECONFIG[aardvark-dns]= " , , , aardvark-dns"

# Rdepends on aardvark-dns which rdepends on slirp4netns
inherit features_check
REQUIRED_DISTRO_FEATURES ?= "seccomp"

SRC_URI += " \
    file://run-ptest \
    file://tests.patch \
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
    dbus-daemon-proxy \
    util-linux-unshare \
    nmap \
    procps-ps \
    util-linux-nsenter \
    bind-utils \
"


# bind-utils is used to install dig
# procps is necessary because the ps from busybox is
# not having the same behavior
