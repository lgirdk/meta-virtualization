HOMEPAGE = "https://github.com/containers/skopeo"
SUMMARY = "Work with remote images registries - retrieving information, images, signing content"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=7e611105d3e369954840a6668c438584"

DEPENDS = " \
    gpgme \
    libdevmapper \
    lvm2 \
    btrfs-tools \
    glib-2.0 \
"

inherit go

RDEPENDS:${PN} = " \
     gpgme \
     libgpg-error \
     libassuan \
"

SRC_URI = " \
    git://github.com/containers/skopeo;branch=main;protocol=https \
    file://0001-Makefile-use-pkg-config-instead-of-gpgme-config.patch \
    file://storage.conf \
    file://registries.conf \
"

SRCREV = "3e2defd6d37b742adde2aac6cb01f6c3c17da8e2"
PV = "v1.6.1+git${SRCPV}"
GO_IMPORT = "import"

S = "${WORKDIR}/git"

inherit goarch
inherit pkgconfig

# This disables seccomp and apparmor, which are on by default in the
# go package. 
EXTRA_OEMAKE="BUILDTAGS=''"

do_compile() {
	export GOARCH="${TARGET_GOARCH}"

	# Setup vendor directory so that it can be used in GOPATH.
	#
	# Go looks in a src directory under any directory in GOPATH but riddler
	# uses 'vendor' instead of 'vendor/src'. We can fix this with a symlink.
	#
	# We also need to link in the ipallocator directory as that is not under
	# a src directory.
	ln -sfn . "${S}/src/import/vendor/src"
	mkdir -p "${S}/src/import/vendor/src/github.com/projectatomic/skopeo"
	ln -sfn "${S}/src/import/skopeo" "${S}/src/import/vendor/src/github.com/projectatomic/skopeo"
	ln -sfn "${S}/src/import/version" "${S}/src/import/vendor/src/github.com/projectatomic/skopeo/version"
	export GOPATH="${S}/src/import/vendor"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${TARGET_CFLAGS}"
	export CGO_LDFLAGS="${TARGET_LDFLAGS}"
	cd ${S}/src/import

	export GO111MODULE=off

	oe_runmake bin/skopeo
}

do_install() {
	install -d ${D}/${sbindir}
	install -d ${D}/${sysconfdir}/containers

	install ${S}/src/import/bin/skopeo ${D}/${sbindir}/
	install ${S}/src/import/default-policy.json ${D}/${sysconfdir}/containers/policy.json

	install ${WORKDIR}/storage.conf ${D}/${sysconfdir}/containers/storage.conf
	install ${WORKDIR}/registries.conf ${D}/${sysconfdir}/containers/registries.conf
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

INSANE_SKIP:${PN} += "ldflags"

BBCLASSEXTEND = "native nativesdk"
