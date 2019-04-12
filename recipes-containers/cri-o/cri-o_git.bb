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

SRCREV_cri-o = "b986e6a8d2af34451363492479d2671a68fd20a3"
SRC_URI = "\
	git://github.com/kubernetes-sigs/cri-o.git;branch=release-1.13;name=cri-o \
	file://0001-Makefile-force-symlinks.patch \
	file://Makefile-skip-install-when-generating-the-config.h.patch \
        file://crio.conf \
	"

# Apache-2.0 for docker
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

GO_IMPORT = "import"

PV = "1.13.0+git${SRCREV_cri-o}"

DEPENDS = " \
    glib-2.0 \
    btrfs-tools \
    gpgme \
    ostree \
    libdevmapper \
    "
RDEPENDS_${PN} = " \
    cni \
    "

PACKAGES =+ "${PN}-config"

RDEPENDS_${PN} += " virtual/containerd virtual/runc"
RDEPENDS_${PN} += " e2fsprogs-mke2fs"

inherit systemd
inherit go
inherit goarch
inherit pkgconfig

EXTRA_OEMAKE="BUILDTAGS=''"

do_compile() {
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

	cd ${S}/src/import

	# Build conmon/config.h, requires native versions of
	# cmd/crio-config/config.go and oci/oci.go
	(CGO_ENABLED=0 GO=go GOARCH=${BUILD_GOARCH} GOOS=${BUILD_GOOS} oe_runmake conmon/config.h)
	rm -f bin/crio-config
	rm -rf vendor/pkg

	oe_runmake binaries
}

SYSTEMD_PACKAGES = "${@bb.utils.contains('DISTRO_FEATURES','systemd','${PN}','',d)}"
SYSTEMD_SERVICE_${PN} = "${@bb.utils.contains('DISTRO_FEATURES','systemd','crio.service','',d)}"
SYSTEMD_AUTO_ENABLE_${PN} = "enable"

do_install() {
    localbindir="/usr/local/bin"

    install -d ${D}${localbindir}
    install -d ${D}/${libexecdir}/crio
    install -d ${D}/${sysconfdir}/crio
    install -d ${D}${systemd_unitdir}/system/

    install ${WORKDIR}/crio.conf ${D}/${sysconfdir}/crio/crio.conf

    # sample config files, they'll go in the ${PN}-config below
    install -d ${D}/${sysconfdir}/crio/config/
    install -m 755 -D ${S}/src/import/test/testdata/* ${D}/${sysconfdir}/crio/config/

    install ${S}/src/import/bin/crio ${D}/${localbindir}

    install ${S}/src/import/bin/conmon ${D}/${localbindir}/crio
    install ${S}/src/import/bin/pause ${D}/${localbindir}/crio

    install -m 0644 ${S}/src/import/contrib/systemd/crio.service  ${D}${systemd_unitdir}/system/
    install -m 0644 ${S}/src/import/contrib/systemd/crio-shutdown.service  ${D}${systemd_unitdir}/system/
}

FILES_${PN}-config = "${sysconfdir}/crio/config/*"
FILES_${PN} += "${systemd_unitdir}/system/*"
FILES_${PN} += "/usr/local/bin/*"

INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP_${PN} += "ldflags already-stripped"

deltask compile_ptest_base

