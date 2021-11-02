HOMEPAGE = "https://github.com/lf-edge/runx"
SUMMARY = "console for runx"
DESCRIPTION = "Xen Runtime for OCI"

SRCREV_runx = "da0c75c58ae5232d19b1791c33545db3225e1ea9"
SRCREV_runc = "e4363b038787addfa12e8b0acf5417d4fba01693"

SRC_URI = "\
	  git://github.com/lf-edge/runx;nobranch=1;name=runx;protocol=https \
	  git://github.com/opencontainers/runc.git;nobranch=1;destsuffix=runc;name=runc;protocol=https \
	  "
SRC_URI[md5sum] = "0d701ac1e2a67d47ce7127432df2c32b"
SRC_URI[sha256sum] = "5a26478906d5005f4f809402e981518d2b8844949199f60c4b6e1f986ca2a769"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=945fc9aa694796a6337395cc291ddd8c"

S = "${WORKDIR}/git"
PV = "0.1-git${SRCREV_runx}"

inherit features_check
REQUIRED_DISTRO_FEATURES = "vmsep"
GO_PARALLEL_BUILD ?= "${@oe.utils.parallel_make_argument(d, '-p %d')}"

inherit pkgconfig

GO_IMPORT = "import"
inherit go

RDEPENDS_${PN}-dev = "bash"

do_compile() {

    export GOARCH="${TARGET_GOARCH}"
    cd ${S}/src/import/gobuild
    mkdir -p go/src/github.com/opencontainers
    ln -s ${WORKDIR}/runc ${S}/src/import/gobuild/go/src/github.com/opencontainers/runc
    export GOPATH="${S}/src/import/gobuild/go/src/github.com/opencontainers/runc"
    oe_runmake
}

do_install() {

    install -d ${D}${datadir}/runX
    install -m 755 ${B}/src/import/gobuild/serial_fd_handler ${D}${datadir}/runX/
    install -m 755 ${B}/src/import/gobuild/recvtty ${D}${datadir}/runX/
 
}

FILES_${PN} += "${datadir}/runX/*"
