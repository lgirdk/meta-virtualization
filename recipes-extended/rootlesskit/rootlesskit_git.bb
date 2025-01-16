HOMEPAGE = "https://github.com/rootless-containers/rootlesskit"
SUMMARY =  "RootlessKit: Linux-native fakeroot using user namespaces"
DESCRIPTION = "RootlessKit is a Linux-native implementation of 'fake root' using user_namespaces(7). \
The purpose of RootlessKit is to run Docker and Kubernetes as an unprivileged user (known as 'Rootless mode'),\
so as to protect the real root on the host from potential container-breakout attacks. \
"

# generated with:
# scripts/oe-go-mod-autogen.py --repo  https://github.com/rootless-containers/rootlesskit  --rev c784875ba4ba4c5aaa256f98675fd543b087c900

DEPENDS = " \
    go-md2man \
    rsync-native \
"
# Specify the first two important SRCREVs as the format
SRCREV_FORMAT="rootless"
SRCREV_rootless = "0b4ed7b5ca2e6b7cd2b9fb003cc7f6913bd76abf"

SRC_URI = "git://github.com/rootless-containers/rootlesskit;name=rootless;branch=master;protocol=https;destsuffix=${GO_SRCURI_DESTSUFFIX}"

include src_uri.inc

# patches and config
SRC_URI += "file://modules.txt \
           "

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

GO_IMPORT = "import"

S = "${WORKDIR}/git"

PV = "v2.3.1+git"

ROOTLESS_PKG = "github.com/rootless-containers/rootlesskit"

inherit go goarch
inherit systemd pkgconfig

do_configure[noexec] = "1"

EXTRA_OEMAKE = " \
     PREFIX=${prefix} BINDIR=${bindir} LIBEXECDIR=${libexecdir} \
     ETCDIR=${sysconfdir} TMPFILESDIR=${nonarch_libdir}/tmpfiles.d \
     SYSTEMDDIR=${systemd_unitdir}/system USERSYSTEMDDIR=${systemd_unitdir}/user \
"

PACKAGECONFIG ?= ""

include relocation.inc

do_compile() {

	cd ${S}/src/import

	export GOPATH="$GOPATH:${S}/src/import/.gopath"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export GOARCH=${TARGET_GOARCH}
	export CGO_ENABLED="1"
	export CGO_CFLAGS="${CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

	export GOFLAGS="-mod=vendor -trimpath ${PIEFLAG}"

	# our copied .go files are to be used for the build
	ln -sf vendor.copy vendor
	# inform go that we know what we are doing
	cp ${UNPACKDIR}/modules.txt vendor/

	oe_runmake GO=${GO} BUILDTAGS="${BUILDTAGS}" all
}

do_install() {
	install -d "${D}${BIN_PREFIX}${base_bindir}"
	for b in rootlessctl  rootlesskit  rootlesskit-docker-proxy; do
		install -m 755 "${S}/src/import/bin/$b" "${D}${BIN_PREFIX}${base_bindir}"
	done
}
