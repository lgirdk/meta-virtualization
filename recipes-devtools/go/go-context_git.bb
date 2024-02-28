DESCRIPTION = "A golang registry for global request variables."
HOMEPAGE = "https://github.com/gorilla/context"
SECTION = "devel/go"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c30eee78985cf2584cded5f89ba3d787"

SRCNAME = "context"

PKG_NAME = "github.com/gorilla/${SRCNAME}"
SRC_URI = "git://${PKG_NAME}.git;branch=main;protocol=https"

SRCREV = "1cbd4c16de64273a6e63fc710b0d89bfad72cd32"

S = "${WORKDIR}/git"

inherit meta-virt-depreciated-warning

do_compile() {
    true
}

do_install() {
	install -d ${D}${prefix}/local/go/src/${PKG_NAME}
	cp -r ${S}/* ${D}${prefix}/local/go/src/${PKG_NAME}/
}

SYSROOT_PREPROCESS_FUNCS += "go_context_sysroot_preprocess"

go_context_sysroot_preprocess () {
    install -d ${SYSROOT_DESTDIR}${prefix}/local/go/src/${PKG_NAME}
    cp -r ${D}${prefix}/local/go/src/${PKG_NAME} ${SYSROOT_DESTDIR}${prefix}/local/go/src/$(dirname ${PKG_NAME})
}

FILES:${PN} += "${prefix}/local/go/src/${PKG_NAME}/*"

CLEANBROKEN = "1"
