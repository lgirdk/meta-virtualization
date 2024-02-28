DESCRIPTION = "Common digest package used across the container ecosystem."
HOMEPAGE = "https://github.com/opencontainers/go-digest.git"
SECTION = "devel/go"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/${PKG_NAME}/LICENSE;md5=2d6fc0e85c3f118af64c85a78d56d3cf"

SRCNAME = "go-digest"

PKG_NAME = "github.com/opencontainers/${SRCNAME}"
SRC_URI = "git://${PKG_NAME};destsuffix=git/src/${PKG_NAME};branch=master;protocol=https"

SRCREV = "65fac7b55eb714642e9359458656939349dcb766"
PV = "v1.0.0-rc0+git"

S = "${WORKDIR}/git"

# NO-OP the do compile rule because this recipe is source only.
do_compile() {
}

inherit meta-virt-depreciated-warning

do_install() {
	install -d ${D}${prefix}/local/go/src/${PKG_NAME}
	for j in $(cd ${S} && find src/${PKG_NAME} -name "*.go"); do
	    if [ ! -d ${D}${prefix}/local/go/$(dirname $j) ]; then
	        mkdir -p ${D}${prefix}/local/go/$(dirname $j)
	    fi
	    cp $j ${D}${prefix}/local/go/$j
	done
	cp -r ${S}/src/${PKG_NAME}/LICENSE ${D}${prefix}/local/go/src/${PKG_NAME}/
}

SYSROOT_PREPROCESS_FUNCS += "go_digest_file_sysroot_preprocess"

go_digest_file_sysroot_preprocess () {
    install -d ${SYSROOT_DESTDIR}${prefix}/local/go/src/${PKG_NAME}
    cp -r ${D}${prefix}/local/go/src/${PKG_NAME} ${SYSROOT_DESTDIR}${prefix}/local/go/src/$(dirname ${PKG_NAME})
}

FILES:${PN} += "${prefix}/local/go/src/${PKG_NAME}/*"

CLEANBROKEN = "1"
