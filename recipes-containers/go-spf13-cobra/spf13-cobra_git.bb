DESCRIPTION = "A Commander for modern Go CLI interactions"
HOMEPAGE = "https://github.com/spf13/cobra"
SECTION = "devel/go"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/${PKG_NAME}/LICENSE.txt;md5=920d76114a32b0fb75b3f2718c5a91be"

SRCNAME = "cobra"

PKG_NAME = "github.com/spf13/${SRCNAME}"
SRC_URI = "git://${PKG_NAME};destsuffix=git/src/${PKG_NAME};branch=main;protocol=https"

SRCREV = "4dd4b25de38418174a6e859e8a32eaccca32dccc"
PV = "v1.6.0+git"

S = "${WORKDIR}/git"

# NO-OP the do compile rule because this recipe is source only.
do_compile() {
}

inherit meta-virt-depreciated-warning

do_install() {
	install -d ${D}${prefix}/local/go/src/${PKG_NAME}
	for j in $(cd ${S} && find src/${PKG_NAME} -name "*.go" -not -path "*/.tool/*"); do
	    if [ ! -d ${D}${prefix}/local/go/$(dirname $j) ]; then
	        mkdir -p ${D}${prefix}/local/go/$(dirname $j)
	    fi
	    cp $j ${D}${prefix}/local/go/$j
	done
	cp -r ${S}/src/${PKG_NAME}/LICENSE.txt ${D}${prefix}/local/go/src/${PKG_NAME}/
}

SYSROOT_PREPROCESS_FUNCS += "cobra_file_sysroot_preprocess"

cobra_file_sysroot_preprocess () {
    install -d ${SYSROOT_DESTDIR}${prefix}/local/go/src/${PKG_NAME}
    cp -r ${D}${prefix}/local/go/src/${PKG_NAME} ${SYSROOT_DESTDIR}${prefix}/local/go/src/$(dirname ${PKG_NAME})
}

FILES:${PN} += "${prefix}/local/go/src/${PKG_NAME}/*"

CLEANBROKEN = "1"
