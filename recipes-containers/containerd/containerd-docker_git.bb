SRCREV = "3addd840653146c90a254301d6c3a663c7fd6429"
SRC_URI = "\
	git://github.com/docker/containerd.git;branch=v0.2.x;destsuffix=git/src/github.com/containerd/containerd \
	"


LIC_FILES_CHKSUM = "file://LICENSE.code;md5=aadc30f9c14d876ded7bedc0afd2d3d7"

include containerd.inc

CONTAINERD_VERSION = "v0.2.x"
S = "${WORKDIR}/git/src/github.com/containerd/containerd"

PROVIDES += "virtual/containerd"
RPROVIDES_${PN} = "virtual/containerd"

DEPENDS += "btrfs-tools"

do_compile_prepend() {
	bberror "${PN} is depreciated and will be removed in the future"
	bbfatal "use container-opencontainers for a working configuration"
}
