DESCRIPTION = "A powerful URL router and dispatcher for golang."
HOMEPAGE = "https://github.com/gorilla/mux"
SECTION = "devel/go"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c30eee78985cf2584cded5f89ba3d787"

SRCNAME = "mux"

PKG_NAME = "github.com/gorilla/${SRCNAME}"
SRC_URI = "git://${PKG_NAME}.git;branch=main;protocol=https"

SRCREV = "85123bf20e069b156415b871dea10517f6a8938a"

inherit meta-virt-depreciated-warning

S = "${WORKDIR}/git"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
	install -d ${D}${prefix}/local/go/src/${PKG_NAME}
	cp -r ${S}/* ${D}${prefix}/local/go/src/${PKG_NAME}/
}

SYSROOT_PREPROCESS_FUNCS += "go_mux_sysroot_preprocess"

go_mux_sysroot_preprocess () {
    install -d ${SYSROOT_DESTDIR}${prefix}/local/go/src/${PKG_NAME}
    cp -r ${D}${prefix}/local/go/src/${PKG_NAME} ${SYSROOT_DESTDIR}${prefix}/local/go/src/$(dirname ${PKG_NAME})
}

FILES:${PN} += "${prefix}/local/go/src/${PKG_NAME}/*"
