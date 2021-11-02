HOMEPAGE = "https://github.com/jfrazelle/netns"
SUMMARY = "Runc hook for setting up default bridge networking."
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=48ef0979a2bcc3fae14ff30b8a7f5dbf"

SRC_URI = "git://github.com/genuinetools/netns;branch=master;protocol=https \
           file://Makefile-force-rebuilding-all-packages-to-avoid-cgo.patch \
          "
SRCREV = "9b103a19b917cc3762a33b7d78244b1d5e45ccfd"
PV = "0.5.3"
GO_IMPORT = "import"

S = "${WORKDIR}/git"

inherit goarch
inherit go

EXTRA_OEMAKE = "GO='${GO}'"

do_compile() {
	export GOARCH="${TARGET_GOARCH}"
	export GOROOT="${STAGING_LIBDIR_NATIVE}/${TARGET_SYS}/go"
	# Setup vendor directory so that it can be used in GOPATH.
	#
	# Go looks in a src directory under any directory in GOPATH but netns
	# uses 'vendor' instead of 'vendor/src'. We can fix this with a symlink.
	#
	# We also need to link in the ipallocator and version directories as
	# they are not under the src directory.
	ln -sfn . "${S}/src/import/vendor/src"
	mkdir -p "${S}/src/import/vendor/src/github.com/genuinetools/netns"
	ln -sfn "${S}/src/import/ipallocator" "${S}/src/import/vendor/src/github.com/genuinetools/netns/ipallocator"
	ln -sfn "${S}/src/import/version" "${S}/src/import/vendor/src/github.com/genuinetools/netns/version"
	export GOPATH="${S}/src/import/vendor"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${BUILDSDK_CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${BUILDSDK_LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

	cd ${S}/src/import
	# Static builds work but are not recommended. See Makefile*cgo patch.
	#oe_runmake static
	oe_runmake build

	# Golang forces permissions to 0500 on directories and 0400 on files in
	# the module cache which prevents us from easily cleaning up the build
	# directory. Let's just fix the permissions here so we don't have to
	# hack the clean tasks.
	chmod -R u+w vendor/pkg/mod
}

do_install() {
	install -d ${D}/${sbindir}
	install ${S}/src/import/netns ${D}/${sbindir}/netns
}
