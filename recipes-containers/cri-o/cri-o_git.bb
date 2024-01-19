HOMEPAGE = "https://github.com/kubernetes-sigs/cri-o"
SUMMARY = "Open Container Initiative-based implementation of Kubernetes Container Runtime Interface"
DESCRIPTION = "cri-o is meant to provide an integration path between OCI conformant \
runtimes and the kubelet. Specifically, it implements the Kubelet Container Runtime \
Interface (CRI) using OCI conformant runtimes. The scope of cri-o is tied to the scope of the CRI. \
. \
At a high level, we expect the scope of cri-o to be restricted to the following functionalities: \
. \
 - Support multiple image formats including the existing Docker image format \
 - Support for multiple means to download images including trust & image verification \
 - Container image management (managing image layers, overlay filesystems, etc) \
 - Container process lifecycle management \
 - Monitoring and logging required to satisfy the CRI \
 - Resource isolation as required by the CRI \
 "

SRCREV_cri-o = "5aff11c7c1afdc785adafd7da3c3f2a6ac51b88d"
SRC_URI = "\
	git://github.com/kubernetes-sigs/cri-o.git;branch=release-1.30;name=cri-o;protocol=https \
        file://crio.conf \
	"

# Apache-2.0 for docker
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

GO_IMPORT = "import"

PV = "1.30.0+git${SRCREV_cri-o}"

inherit features_check
REQUIRED_DISTRO_FEATURES ?= "seccomp"

DEPENDS = " \
    glib-2.0 \
    btrfs-tools \
    gpgme \
    ostree \
    libdevmapper \
    libseccomp \
    "
RDEPENDS:${PN} = " \
    cni \
    libdevmapper \
    "

PACKAGECONFIG ?= "${@bb.utils.filter('DISTRO_FEATURES', 'selinux', d)}"
PACKAGECONFIG[selinux] = ",,libselinux"

PACKAGES =+ "${PN}-config"

RDEPENDS:${PN} += " ${VIRTUAL-RUNTIME_container_runtime}"
RDEPENDS:${PN} += " e2fsprogs-mke2fs conmon util-linux iptables conntrack-tools"

inherit systemd
inherit go
inherit goarch
inherit pkgconfig
inherit container-host

EXTRA_OEMAKE="BUILDTAGS=''"

do_compile() {
	set +e

	cd ${S}/src/import

	oe_runmake local-cross
	oe_runmake binaries
}

SYSTEMD_PACKAGES = "${@bb.utils.contains('DISTRO_FEATURES','systemd','${PN}','',d)}"
SYSTEMD_SERVICE:${PN} = "${@bb.utils.contains('DISTRO_FEATURES','systemd','crio.service','',d)}"
SYSTEMD_AUTO_ENABLE:${PN} = "enable"

do_install() {
    set +e
    localbindir="/usr/local/bin"

    install -d ${D}${localbindir}
    install -d ${D}/${libexecdir}/crio
    install -d ${D}/${sysconfdir}/crio
    install -d ${D}${systemd_unitdir}/system/
    install -d ${D}/usr/share/containers/oci/hooks.d

    install ${WORKDIR}/crio.conf ${D}/${sysconfdir}/crio/crio.conf

    # sample config files, they'll go in the ${PN}-config below
    install -d ${D}/${sysconfdir}/crio/config/
    install -m 755 -D ${S}/src/import/test/testdata/* ${D}/${sysconfdir}/crio/config/

    install ${S}/src/import/bin/crio.cross.linux* ${D}/${localbindir}/crio
    install ${S}/src/import/bin/crio-status ${D}/${localbindir}/
    install ${S}/src/import/bin/pinns ${D}/${localbindir}/

    install -m 0644 ${S}/src/import/contrib/systemd/crio.service  ${D}${systemd_unitdir}/system/
    install -m 0644 ${S}/src/import/contrib/systemd/crio-shutdown.service  ${D}${systemd_unitdir}/system/
    install -m 0644 ${S}/src/import/contrib/systemd/crio-wipe.service  ${D}${systemd_unitdir}/system/

    install -d ${D}${localstatedir}/lib/crio
}

FILES:${PN}-config = "${sysconfdir}/crio/config/*"
FILES:${PN} += "${systemd_unitdir}/system/*"
FILES:${PN} += "/usr/local/bin/*"
FILES:${PN} += "/usr/share/containers/oci/hooks.d"

# don't clobber hooks.d
ALLOW_EMPTY:${PN} = "1"

INSANE_SKIP:${PN} += "ldflags already-stripped textrel"

deltask compile_ptest_base

COMPATIBLE_HOST = "^(?!(qemu)?mips).*"
