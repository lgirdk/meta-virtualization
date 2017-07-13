HOMEPAGE = "https://github.com/opencontainers/runtime-tools"
SUMMARY = "oci-runtime-tool is a collection of tools for working with the OCI runtime specification"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b355a61a394a504dacde901c958f662c"

SRC_URI = "git://github.com/opencontainers/runtime-tools.git"

SRCREV = "15ec1df3f6607f4223ab3915547c184cf60a30dd"
PV = "0.0.1+git${SRCPV}"

S = "${WORKDIR}/git"

inherit goarch
inherit go

do_compile() {
	export GOARCH="${TARGET_GOARCH}"
	export GOROOT="${STAGING_LIBDIR_NATIVE}/${TARGET_SYS}/go"
	export GOPATH="${S}:${S}/vendor"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${BUILDSDK_CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${BUILDSDK_LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

	# link fixups for compilation
	rm -f ${S}/vendor/src
	ln -sf ./ ${S}/vendor/src
	mkdir -p ${S}/vendor/github.com/opencontainers/runtime-tools
	ln -sf ../../../../generate ${S}/vendor/github.com/opencontainers/runtime-tools/generate
	ln -sf ../../../../validate ${S}/vendor/github.com/opencontainers/runtime-tools/validate
	ln -sf ../../../../cmd ${S}/vendor/github.com/opencontainers/runtime-tools/cmd

	oe_runmake
}

do_install() {
	install -d ${D}/${sbindir}
	install ${S}/oci-runtime-tool ${D}/${sbindir}/oci-runtime-tool
}
