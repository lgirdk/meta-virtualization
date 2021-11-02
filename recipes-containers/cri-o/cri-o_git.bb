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

SRCREV_cri-o = "6d0ffae63b9b7d8f07e7f9cf50736a67fb31faf3"
SRC_URI = "\
	git://github.com/kubernetes-sigs/cri-o.git;branch=release-1.17;name=cri-o;protocol=https \
	file://0001-Makefile-force-symlinks.patch \
        file://crio.conf \
	"

# Apache-2.0 for docker
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

GO_IMPORT = "import"

PV = "1.17.0+git${SRCREV_cri-o}"

DEPENDS = " \
    glib-2.0 \
    btrfs-tools \
    gpgme \
    ostree \
    libdevmapper \
    libseccomp \
    libselinux \
    "
RDEPENDS_${PN} = " \
    cni \
    libdevmapper \
    "

python __anonymous() {
    msg = ""
    # ERROR: Nothing PROVIDES 'libseccomp' (but /buildarea/layers/meta-virtualization/recipes-containers/cri-o/cri-o_git.bb DEPENDS on or otherwise requires it).
    # ERROR: Required build target 'meta-world-pkgdata' has no buildable providers.
    # Missing or unbuildable dependency chain was: ['meta-world-pkgdata', 'cri-o', 'libseccomp']
    if 'security' not in d.getVar('BBFILE_COLLECTIONS').split():
        msg += "Make sure meta-security should be present as it provides 'libseccomp'"
        raise bb.parse.SkipRecipe(msg)
    # ERROR: Nothing PROVIDES 'libselinux' (but /buildarea/layers/meta-virtualization/recipes-containers/cri-o/cri-o_git.bb DEPENDS on or otherwise requires it).
    # ERROR: Required build target 'meta-world-pkgdata' has no buildable providers.
    # Missing or unbuildable dependency chain was: ['meta-world-pkgdata', 'cri-o', 'libselinux']
    elif 'selinux' not in d.getVar('BBFILE_COLLECTIONS').split():
        msg += "Make sure meta-selinux should be present as it provides 'libselinux'"
        raise bb.parse.SkipRecipe(msg)
}

PACKAGES =+ "${PN}-config"

RDEPENDS_${PN} += " virtual/containerd virtual/runc"
RDEPENDS_${PN} += " e2fsprogs-mke2fs conmon util-linux iptables conntrack-tools"

inherit systemd
inherit go
inherit goarch
inherit pkgconfig

EXTRA_OEMAKE="BUILDTAGS=''"

do_compile() {
	set +e

	cd ${S}/src/import

	oe_runmake local-cross
	oe_runmake binaries
}

SYSTEMD_PACKAGES = "${@bb.utils.contains('DISTRO_FEATURES','systemd','${PN}','',d)}"
SYSTEMD_SERVICE_${PN} = "${@bb.utils.contains('DISTRO_FEATURES','systemd','crio.service','',d)}"
SYSTEMD_AUTO_ENABLE_${PN} = "enable"

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
}

FILES_${PN}-config = "${sysconfdir}/crio/config/*"
FILES_${PN} += "${systemd_unitdir}/system/*"
FILES_${PN} += "/usr/local/bin/*"
FILES_${PN} += "/usr/share/containers/oci/hooks.d"

# don't clobber hooks.d
ALLOW_EMPTY_${PN} = "1"

INSANE_SKIP_${PN} += "ldflags already-stripped"

deltask compile_ptest_base

COMPATIBLE_HOST = "^(?!(qemu)?mips).*"
