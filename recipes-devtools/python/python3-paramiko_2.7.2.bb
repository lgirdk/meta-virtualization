SUMMARY = "Python module that implements the SSH2 protocol"
HOMEPAGE = "https://github.com/paramiko/paramiko"
LICENSE = "LGPLv2.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=fd0120fc2e9f841c73ac707a30389af5"

inherit pypi setuptools3

SRC_URI[sha256sum] = "7f36f4ba2c0d81d219f4595e35f70d56cc94f9ac40a6acdf51d6ca210ce65035"

RDEPENDS_${PN} += " \
    python3-bcrypt \
    python3-cryptography \
    python3-pyasn1 \
    python3-nacl \
"
