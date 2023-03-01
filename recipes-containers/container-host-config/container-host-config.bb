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

do_install() {
	install -d ${D}/${sysconfdir}/containers

	install ${WORKDIR}/storage.conf ${D}/${sysconfdir}/containers/storage.conf
	install ${WORKDIR}/registries.conf ${D}/${sysconfdir}/containers/registries.conf
	install ${WORKDIR}/policy.json ${D}/${sysconfdir}/containers/policy.json
}

BBCLASSEXTEND = "native nativesdk"
