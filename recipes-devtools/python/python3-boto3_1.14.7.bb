HOMEPAGE = "https://github.com/boto/boto"
SUMMARY = "Amazon Web Services API"
DESCRIPTION = "\
  Boto3 is the Amazon Web Services (AWS) Software Development Kit (SDK) for Python, \
  which allows Python developers to write software that makes use of services like \
  Amazon S3 and Amazon EC2. \
  "
SECTION = "devel/python"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"

SRC_URI[md5sum] = "fb8b77d4ac10a971570419dd3613196e"
SRC_URI[sha256sum] = "4856c8cb4150b900cc7dccbdf16f542fb8c12e97b17639979e58760847f7cf35"

inherit pypi setuptools3
