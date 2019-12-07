SUMMARY = "Python module that implements the SSH2 protocol"
HOMEPAGE = "https://github.com/paramiko/paramiko"
LICENSE = "LGPLv2.1"
LIC_FILES_CHKSUM = "file://LICENSE;md5=fd0120fc2e9f841c73ac707a30389af5"

inherit pypi setuptools3

SRC_URI[md5sum] = "b130f3e1c3442d21c1a0c9ae17776f4e"
SRC_URI[sha256sum] = "fba9c46340e3d690ad5a9d0dbf06677cd91425de3afa7e9c0c187298ee4ddd0d"

RDEPENDS_${PN} += " \
    python3-bcrypt \
    python3-cryptography \
    python3-pyasn1 \
    python3-nacl \
"
