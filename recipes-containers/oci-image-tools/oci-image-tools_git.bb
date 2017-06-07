HOMEPAGE = "https://github.com/opencontainers/image-tools"
SUMMARY = "A collection of tools for working with the OCI image format specification"
LICENSE = "Apache-2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

DEPENDS = "\
           oci-image-spec \
           oci-runtime-spec \
           go-digest \
           go-errors \
           spf13-cobra \
           spf13-pflag \
          "

SRC_URI = "git://github.com/opencontainers/image-tools.git \
           file://0001-image-manifest-Recursively-remove-pre-existing-entri.patch \
           file://0002-image-manifest-Split-unpackLayerEntry-into-its-own-f.patch"

SRCREV = "d0c8533b0a2c68344ff2c8aff03d7fc2dff3a108"
PV = "0.1.0+git${SRCPV}"

S = "${WORKDIR}/git"

inherit goarch
inherit go

# This disables seccomp and apparmor, which are on by default in the
# go package. 
EXTRA_OEMAKE="BUILDTAGS=''"

do_compile() {
	export GOARCH="${TARGET_GOARCH}"
	export GOROOT="${STAGING_LIBDIR_NATIVE}/${TARGET_SYS}/go"
	# Setup vendor directory so that it can be used in GOPATH.
	#
	# Go looks in a src directory under any directory in GOPATH but riddler
	# uses 'vendor' instead of 'vendor/src'. We can fix this with a symlink.
	#
	# We also need to link in the ipallocator directory as that is not under
	# a src directory.
	ln -sfn . "${S}/vendor/src"
	mkdir -p "${S}/vendor/src/github.com/opencontainers/image-tools/"
	ln -sfn "${S}/image" "${S}/vendor/src/github.com/opencontainers/image-tools/image"
	ln -sfn "${S}/version" "${S}/vendor/src/github.com/opencontainers/image-tools/version"
	export GOPATH="${S}/vendor"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${BUILDSDK_CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${BUILDSDK_LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

	oe_runmake tool
}

do_install() {
	install -d ${D}/${sbindir}
	install ${S}/oci-image-tool ${D}/${sbindir}/
}

INSANE_SKIP_${PN} += "ldflags"
