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

SRCREV_cri-o = "f61719a88b7de10a88c50e35640f4a7f1f53fbab"
SRC_URI = "\
	git://github.com/kubernetes-sigs/cri-o.git;branch=release-1.15;name=cri-o \
	file://0001-Makefile-force-symlinks.patch \
        file://crio.conf \
	"

# Apache-2.0 for docker
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

GO_IMPORT = "import"

PV = "1.15.0+git${SRCREV_cri-o}"

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
RDEPENDS_${PN} += " e2fsprogs-mke2fs"

inherit systemd
inherit go
inherit goarch
inherit pkgconfig

EXTRA_OEMAKE="BUILDTAGS=''"
CRIO_BUILD_CROSS ?= "1"

do_compile() {
	set +e
	export GOPATH="${S}/src/import:${S}/src/import/vendor"

	# link fixups for compilation
	rm -f ${S}/src/import/vendor/src
	ln -sf ./ ${S}/src/import/vendor/src

	mkdir -p ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o
	ln -sf ../../../../cmd ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/cmd
	ln -sf ../../../../test ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/test
	ln -sf ../../../../oci ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/oci
	ln -sf ../../../../server ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/server
	ln -sf ../../../../pkg ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/pkg
	ln -sf ../../../../libpod ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/libpod
	ln -sf ../../../../libkpod ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/libkpod
	ln -sf ../../../../utils ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/utils
	ln -sf ../../../../types ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/types
	ln -sf ../../../../version ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/version
	ln -sf ../../../../lib ${S}/src/import/vendor/github.com/kubernetes-sigs/cri-o/lib


	rm -f ${S}/src/import/src
	ln -sf ./ ${S}/src/import/src
	mkdir -p ${S}/src/import/src/github.com/cri-o/cri-o/cmd
	ln -sf ../../../../cmd/crio-config ${S}/src/import/src/github.com/cri-o/cri-o/cmd
	ln -sf ../../../lib ${S}/src/import/src/github.com/cri-o/cri-o/lib
	ln -sf ../../../oci ${S}/src/import/src/github.com/cri-o/cri-o/oci
	ln -sf ../../../pkg ${S}/src/import/src/github.com/cri-o/cri-o/pkg
	ln -sf ../../../utils ${S}/src/import/src/github.com/cri-o/cri-o/utils
	ln -sf ../../../version ${S}/src/import/src/github.com/cri-o/cri-o/version
	ln -sf ../../../server ${S}/src/import/src/github.com/cri-o/cri-o/server
	ln -sf ../../../types ${S}/src/import/src/github.com/cri-o/cri-o/types

	# fixes the bin/crio build of oe_runmake binaries below
	ln -sf ../../../../cmd/crio ${S}/src/import/src/github.com/cri-o/cri-o/cmd/

	cd ${S}/src/import

	if [ "${CRIO_BUILD_CROSS}" = "1" ]; then
	    # New: using the -cross target. But this doesn't build conmon and pause. So
	    #      keeping the old parts around if someone yells.
	    oe_runmake local-cross
	else
	    # Build conmon/config.h, requires native versions of
	    # cmd/crio-config/config.go and oci/oci.go
	    (CGO_ENABLED=0 GO=go GOARCH=${BUILD_GOARCH} GOOS=${BUILD_GOOS} oe_runmake conmon/config.h)
	    rm -f bin/crio-config
	    rm -rf vendor/pkg

	    oe_runmake binaries
	fi
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

    install ${WORKDIR}/crio.conf ${D}/${sysconfdir}/crio/crio.conf

    # sample config files, they'll go in the ${PN}-config below
    install -d ${D}/${sysconfdir}/crio/config/
    install -m 755 -D ${S}/src/import/test/testdata/* ${D}/${sysconfdir}/crio/config/

    install ${S}/src/import/bin/crio.cross.linux* ${D}/${localbindir}/crio

    if [ "${CRIO_BUILD_CROSS}" = "1" ]; then
	install ${S}/src/import/bin/conmon ${D}/${localbindir}/crio
	install ${S}/src/import/bin/pause ${D}/${localbindir}/crio
    fi

    install -m 0644 ${S}/src/import/contrib/systemd/crio.service  ${D}${systemd_unitdir}/system/
    install -m 0644 ${S}/src/import/contrib/systemd/crio-shutdown.service  ${D}${systemd_unitdir}/system/
}

FILES_${PN}-config = "${sysconfdir}/crio/config/*"
FILES_${PN} += "${systemd_unitdir}/system/*"
FILES_${PN} += "/usr/local/bin/*"

INSANE_SKIP_${PN} += "ldflags already-stripped"

deltask compile_ptest_base

