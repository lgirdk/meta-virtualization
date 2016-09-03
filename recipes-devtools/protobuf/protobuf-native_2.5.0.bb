SUMMARY = "protobuf"
DESCRIPTION = "Protocol Buffers are a way of encoding structured data in \
an efficient yet extensible format. Google uses Protocol Buffers for \
almost all of its internal RPC protocols and file formats."
HOMEPAGE = "http://code.google.com/p/protobuf/"
SECTION = "console/tools"
LICENSE = "BSD-3-Clause"

LIC_FILES_CHKSUM = "file://COPYING.txt;md5=af6809583bfde9a31595a58bb4a24514"

PR = "r1"

SRC_URI[md5sum] = "9c21577a03adc1879aba5b52d06e25cf"
SRC_URI[sha256sum] = "c2665a7aa2ac1a206e61b28e014486e3de59009ea2be2bde9182e0847f38b62f"
SRC_URI = "https://github.com/google/protobuf/archive/v${PV}.tar.gz \
	"

EXTRA_OECONF += " --with-protoc=echo --disable-shared"

inherit native autotools
