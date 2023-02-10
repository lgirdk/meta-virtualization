HOMEPAGE = "https://github.com/containers/podman-tui"
SUMMARY =  "podman-tui is a Terminal User Interface to interact with podman"
DESCRIPTION = "podman-tui is a Terminal User Interface to interact with the podman v4. \
podman bindings has been used to communicate with podman environment through rest api API (unix socket). \
    "

inherit features_check
REQUIRED_DISTRO_FEATURES ?= "seccomp ipv6"

DEPENDS = " \
    libseccomp \
    libdevmapper \
    lvm2 \
    btrfs-tools \
    gpgme \
    libassuan \
    libgpg-error \
"

SRCREV_FORMAT = "podmantui_storage"
SRCREV_podmantui = "907b4d64ad9e1013597e234be79aae3eaf0f4f5b"
SRCREV_storage = "246ba3062e8b551026aef2708eee747014ce5c52"
SRC_URI = " \
    git://github.com/containers/podman-tui;protocol=https;name=podmantui;branch=main \
"
# Due to some other API changes, we can't directly import containers/storage at
# the right commit, so we instead extract a patch and apply it to the tree
#SRC_URI += "git://github.com/containers/storage;protocol=https;name=storage;branch=main;destsuffix=git/src/import/vendor/github.com/containers/storage"

SRC_URI += "file://0001-fix-workaround-field-rename-in-btrfs-progs-6.1.patch;patchdir=src/import/vendor/github.com/containers/storage"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

GO_IMPORT = "import"

S = "${WORKDIR}/git"

PV = "v0.7.0+git${SRCPV}"

PODMAN_PKG = "github.com/containers/podman-tui"

inherit go goarch
inherit pkgconfig

do_configure[noexec] = "1"

BUILD_TAGS ?= "exclude_graphdriver_btrfs exclude_graphdriver_devicemapper"

do_compile() {
	cd ${S}/src

	rm -rf .gopath
	mkdir -p .gopath/src/"$(dirname "${PODMAN_PKG}")"
	ln -sf ../../../../import/ .gopath/src/"${PODMAN_PKG}"

	cd ${S}/src/.gopath/src/"${PODMAN_PKG}"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export GOFLAGS="-mod=vendor"

	# oe_runmake BUILDTAGS="${BUILDTAGS}"
	${GO} build -trimpath -tags "$(BUILDTAGS)" ${GO_LDFLAGS} -o bin/podman-tui
}

do_install() {
	cd ${S}/src/.gopath/src/"${PODMAN_PKG}"

	install -d ${D}/${bindir}
	install bin/podman-tui ${D}/${bindir}/
}

RDEPENDS:${PN} += "podman"
