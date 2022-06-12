HOMEPAGE = "https://github.com/opencontainers/runtime-tools"
SUMMARY = "oci-runtime-tool is a collection of tools for working with the OCI runtime specification"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=b355a61a394a504dacde901c958f662c"

SRC_URI = "git://github.com/opencontainers/runtime-tools.git;branch=master;protocol=https \
           file://0001-build-use-for-cross-compiler.patch \
           "

SRCREV = "0105384f68e16803891d0a17d9067b1def6a2778"
PV = "0.9.0+git${SRCPV}"
GO_IMPORT = "import"

INSANE_SKIP:${PN} += "ldflags textrel"

inherit goarch
inherit go

do_compile() {
	export GOARCH="${TARGET_GOARCH}"
	export GOROOT="${STAGING_LIBDIR}/go"
	export GOPATH="${S}/src/import:${S}/src/import/vendor"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${TARGET_CFLAGS}"
	export CGO_LDFLAGS="${TARGET_LDFLAGS}"
	export GO111MODULE=off

	# fixes:
	# cannot find package runtime/cgo (using -importcfg)
	#        ... recipe-sysroot-native/usr/lib/aarch64-poky-linux/go/pkg/tool/linux_amd64/link:
	#        cannot open file : open : no such file or directory
	export GO_BUILD_FLAGS="-a -pkgdir dontusecurrentpkgs"

	# link fixups for compilation
	rm -f ${S}/src/import/vendor/src
	ln -sf ./ ${S}/src/import/vendor/src
	mkdir -p ${S}/src/import/vendor/github.com/opencontainers/runtime-tools
	ln -sf ../../../../generate ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/generate
	ln -sf ../../../../validate ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/validate
	ln -sf ../../../../cmd ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/cmd
	ln -sf ../../../../error ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/error
	ln -sf ../../../../specerror ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/specerror
	ln -sf ../../../../cgroups ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/cgroups
	ln -sf ../../../../filepath ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/filepath
	ln -sf ../../../../validation ${S}/src/import/vendor/github.com/opencontainers/runtime-tools/validation
	cd ${S}/src/import

	oe_runmake tool
}

do_install() {
	install -d ${D}/${sbindir}
	install ${S}/src/import/oci-runtime-tool ${D}/${sbindir}/oci-runtime-tool
}

deltask compile_ptest_base

