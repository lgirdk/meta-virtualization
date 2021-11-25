SUMMARY = "Basic Application container image"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

include container-base.bb

OCI_IMAGE_ENTRYPOINT = "/usr/bin/flask-app"
CONTAINER_SHELL = "busybox"

IMAGE_INSTALL:append = "helloworld-flask"
