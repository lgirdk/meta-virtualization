HOMEPAGE = "https://buildah.io"
SUMMARY = "A tool that facilitates building OCI container images."
DESCRIPTION = "A tool that facilitates building OCI container images."

# Apache-2.0 for containerd
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/github.com/containers/buildah/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

S = "${WORKDIR}/git"

BUILDAH_VERSION = "1.31"

PV = "${BUILDAH_VERSION}"

inherit go
inherit goarch
inherit pkgconfig

# Rdepends on podman which needs seccomp and ipv6
inherit features_check
REQUIRED_DISTRO_FEATURES = "seccomp ipv6"

GO_IMPORT = "github.com/containers/buildah"
GO_INSTALL = "${GO_IMPORT}"
GO_WORKDIR = "${GO_INSTALL}"
GOBUILDFLAGS += "-mod vendor"

SRCREV_FORMAT = "buildah_storage"
SRCREV_buildah = "d0de60bbf34d7e97d08f8652abf794c3b66e47a1"
SRCREV_storage = "246ba3062e8b551026aef2708eee747014ce5c52"

SRC_URI = " \
    git://github.com/containers/buildah;branch=release-${BUILDAH_VERSION};name=buildah;protocol=https \
    "

DEPENDS = "libdevmapper btrfs-tools gpgme"
RDEPENDS:${PN} = "cgroup-lite fuse-overlayfs libdevmapper podman"
RDEPENDS:${PN}-dev = "bash perl"

do_compile:prepend() {
    cd ${S}/src/github.com/containers/buildah
}

go_do_compile() {
        export TMPDIR="${GOTMPDIR}"
        if [ -n "${GO_INSTALL}" ]; then
                ${GO} install ${GOBUILDFLAGS} ./cmd/buildah
                ${GO} install ${GOBUILDFLAGS} ./tests/imgtype/imgtype.go
                ${GO} install ${GOBUILDFLAGS} ./tests/copy/copy.go
        fi
}

do_install:append() {
    dest_dir=${D}/${sysconfdir}/containers
    mkdir -p ${dest_dir}
    install -m 666 ${S}/src/github.com/containers/buildah/docs/samples/registries.conf ${dest_dir}/buildah.registries.conf.sample
    install -m 666 ${S}/src/github.com/containers/buildah/tests/policy.json ${dest_dir}/buildah.policy.json.sample
}
