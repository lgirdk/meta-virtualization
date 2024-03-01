HOMEPAGE = "https://github.com/containerd/nerdctl"
SUMMARY =  "Docker-compatible CLI for containerd"
DESCRIPTION = "nerdctl: Docker-compatible CLI for containerd \
    "

DEPENDS = " \
    go-md2man \
    rsync-native \
    ${@bb.utils.filter('DISTRO_FEATURES', 'systemd', d)} \
"

# Specify the first two important SRCREVs as the format
SRCREV_FORMAT="nerdcli_cgroups"
SRCREV_nerdcli = "265d6b9cf526ce7d9ed8d34a0e3c3066901cc463"

SRC_URI = "git://github.com/containerd/nerdctl.git;name=nerdcli;branch=main;protocol=https"

include src_uri.inc

# patches and config
SRC_URI += "file://0001-Makefile-allow-external-specification-of-build-setti.patch \
            file://modules.txt \
           "

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

GO_IMPORT = "import"

# S = "${WORKDIR}/git"

PV = "v2.0.0-beta.1"

NERDCTL_PKG = "github.com/containerd/nerdctl"

inherit go goarch
inherit systemd pkgconfig

do_configure[noexec] = "1"

EXTRA_OEMAKE = " \
     PREFIX=${prefix} BINDIR=${bindir} LIBEXECDIR=${libexecdir} \
     ETCDIR=${sysconfdir} TMPFILESDIR=${nonarch_libdir}/tmpfiles.d \
     SYSTEMDDIR=${systemd_unitdir}/system USERSYSTEMDDIR=${systemd_unitdir}/user \
"

PACKAGECONFIG ?= ""

# sets the "sites" variable.
include relocation.inc

PIEFLAG = "${@bb.utils.contains('GOBUILDFLAGS', '-buildmode=pie', '-buildmode=pie', '', d)}"

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
	cp ${WORKDIR}/modules.txt vendor/

	oe_runmake GO=${GO} BUILDTAGS="${BUILDTAGS}" binaries
}

do_install() {
        install -d "${D}${BIN_PREFIX}${base_bindir}"
        install -m 755 "${S}/src/import/_output/nerdctl" "${D}${BIN_PREFIX}${base_bindir}"
}

INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP:${PN} += "ldflags already-stripped"

