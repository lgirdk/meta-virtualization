HOMEPAGE = "https://git.yoctoproject.org/meta-virtualization"
SUMMARY =  "Configuration Package for container hosts"
DESCRIPTION = "Common / centralized configuration files for container hosts"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

SRC_URI = " \
    file://storage.conf \
    file://registries.conf \
    file://policy.json \
"

S = "${UNPACKDIR}"

do_install() {
	install -d ${D}/${sysconfdir}/containers

	install ${UNPACKDIR}/storage.conf ${D}/${sysconfdir}/containers/storage.conf
	install ${UNPACKDIR}/registries.conf ${D}/${sysconfdir}/containers/registries.conf
	install ${UNPACKDIR}/policy.json ${D}/${sysconfdir}/containers/policy.json
}

BBCLASSEXTEND = "native nativesdk"
