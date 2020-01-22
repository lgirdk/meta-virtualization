HOMEPAGE = "https://github.com/boto/boto"
SUMMARY = "Amazon Web Services API"
DESCRIPTION = "\
  Boto3 is the Amazon Web Services (AWS) Software Development Kit (SDK) for Python, \
  which allows Python developers to write software that makes use of services like \
  Amazon S3 and Amazon EC2. \
  "
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://setup.py;md5=0149f3d994965905689bbefa0212efe2"

SRCNAME = "boto3"

SRC_URI = "https://pypi.python.org/packages/source/b/${SRCNAME}/${SRCNAME}-${PV}.tar.gz"

SRC_URI[md5sum] = "79936a15612b8ef762eb1274a936cea5"
SRC_URI[sha256sum] = "5222edc5b20d5c6ab7440fc4f89f987ead05be37ff5cc5359a3b9148d9b5a51e"

S = "${WORKDIR}/${SRCNAME}-${PV}"

inherit setuptools3

