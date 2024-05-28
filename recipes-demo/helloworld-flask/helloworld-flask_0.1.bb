DESCRIPTION = "Demo flask application"
HOMEPAGE = "https://yoctoproject.org"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

SRC_URI = "file://flask-app \
           file://flask-app.yaml \
           file://flask-app-service.yaml"

DEPLOY_TYPE ?= "pod"

NAME ?= "demo"
APPNAME ?= "yocto-app"
CONTAINERNAME ?= "yocto-container"
CONTAINERIMAGE ?= "zeddii/app-container:latest"
CONTAINERPORT ?= "9000"
EXTERNALPORT ?= "10000"

do_install() {

    for tgt in flask-app.yaml flask-app-service.yaml; do
	sed -i 's%\@NAME\@%${NAME}%g' ${UNPACKDIR}/$tgt
	sed -i 's%\@APPNAME\@%${APPNAME}%g' ${UNPACKDIR}/$tgt
	sed -i 's%\@CONTAINERNAME\@%${CONTAINERNAME}%g' ${UNPACKDIR}/$tgt
	sed -i 's%\@CONTAINERIMAGE\@%${CONTAINERIMAGE}%g' ${UNPACKDIR}/$tgt
	sed -i 's%\@CONTAINERPORT\@%${CONTAINERPORT}%g' ${UNPACKDIR}/$tgt
	sed -i 's%\@EXTERNALPORT\@%${EXTERNALPORT}%g' ${UNPACKDIR}/$tgt
    done
    
    install -d ${D}${bindir}/
    install -m 755 ${UNPACKDIR}/flask-app ${D}${bindir}/

    install -d ${D}${sysconfdir}/deploy
    install -m 644 ${UNPACKDIR}/flask-app.yaml ${D}${sysconfdir}/
    install -m 644 ${UNPACKDIR}/flask-app-service.yaml ${D}${sysconfdir}/
}

RDEPENDS:${PN} += "python3-core python3-flask"

PACKAGES:prepend = "${PN}-deploy "
FILES:${PN}-deploy = "${sysconfdir}/*"

# this rdepends should be conditional on a debug PACKAGECONFIG
# RDEPENDS:${PN} += "busybox"
