HOMEPAGE = "https://github.com/containers/skopeo"
SUMMARY = "Work with remote images registries - retrieving information, images, signing content"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=7e611105d3e369954840a6668c438584"

DEPENDS = " \
    gpgme \
    libdevmapper \
    lvm2 \
    btrfs-tools \
    glib-2.0 \
"

inherit go

COMPATIBLE_HOST = "^(?!mips).*"

RDEPENDS:${PN} = " \
     gpgme \
     libgpg-error \
     libassuan \
"

SRC_URI = " \
    git://github.com/containers/skopeo;branch=main;protocol=https;destsuffix=git/src/github.com/containers/skopeo \
    file://0001-makefile-add-GOBUILDFLAGS-to-go-build-call.patch \
"

SRCREV = "a85eaac984be2e36fe14590e4c3c135775f6c393"
PV = "v1.14.0+git"
GO_IMPORT = "import"

S = "${WORKDIR}/git/src/github.com/containers/skopeo"

inherit goarch
inherit pkgconfig

inherit container-host

# https://bugzilla.redhat.com/show_bug.cgi?id=CVE-2019-10214
# https://github.com/containers/image/issues/654
CVE_STATUS[CVE-2019-10214] = "fixed-version: This CVE was fixed in the container image go library skopeo is using."

# This disables seccomp and apparmor, which are on by default in the
# go package. 
EXTRA_OEMAKE="BUILDTAGS=''"

do_compile() {
	export GOARCH="${TARGET_GOARCH}"

	export GOPATH="${S}/src/import/.gopath:${S}/src/import/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go:${WORKDIR}/git/"
	cd ${S}

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${TARGET_CFLAGS}"
	export CGO_LDFLAGS="${TARGET_LDFLAGS}"

	export GO111MODULE=off
	export GOBUILDFLAGS="-trimpath"
	export EXTRA_LDFLAGS="-s -w"

	oe_runmake bin/skopeo
}

do_install() {
	install -d ${D}/${sbindir}
	install -d ${D}/${sysconfdir}/containers

	install ${S}/bin/skopeo ${D}/${sbindir}/
}

do_install:append:class-native() {
    create_cmdline_wrapper ${D}/${sbindir}/skopeo \
        --policy ${sysconfdir}/containers/policy.json

    create_wrapper ${D}/${sbindir}/skopeo.real \
        LD_LIBRARY_PATH=${STAGING_LIBDIR_NATIVE}
}

do_install:append:class-nativesdk() {
    create_cmdline_wrapper ${D}/${sbindir}/skopeo \
        --policy ${sysconfdir}/containers/policy.json
}

INSANE_SKIP:${PN} += "ldflags already-stripped"

BBCLASSEXTEND = "native nativesdk"
