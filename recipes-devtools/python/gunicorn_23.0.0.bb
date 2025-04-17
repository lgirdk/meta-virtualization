SUMMARY = "WSGI HTTP Server for UNIX"
DESCRIPTION = "\
  Gunicorn ‘Green Unicorn’ is a Python WSGI HTTP Server for UNIX. It’s \
  a pre-fork worker model ported from Ruby’s Unicorn project. The \
  Gunicorn server is broadly compatible with various web frameworks, \
  simply implemented, light on server resource usage, and fairly speedy. \
  " 
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5b70a8b30792a916f50dc96123e61ddf"

SRC_URI = "https://pypi.python.org/packages/source/g/gunicorn/${BPN}-${PV}.tar.gz"

SRC_URI[md5sum] = "18b666db62a890579170639961c5b064"
SRC_URI[sha256sum] = "f014447a0101dc57e294f6c18ca6b40227a4c90e9bdb586042628030cba004ec"

inherit python_pep517 python_setuptools_build_meta
