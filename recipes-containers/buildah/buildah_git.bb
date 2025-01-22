HOMEPAGE = "https://buildah.io"
SUMMARY = "A tool that facilitates building OCI container images."
DESCRIPTION = "A tool that facilitates building OCI container images."

# Apache-2.0 for containerd
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/github.com/containers/buildah/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

S = "${WORKDIR}/git"

SRCREV_buildah = "e2feca77516568553dc1318019cea90ae000e0f3"

PV = "1.26.8"

inherit go
inherit goarch
inherit pkgconfig

GO_IMPORT = "github.com/containers/buildah"
GO_INSTALL = "${GO_IMPORT}"
GO_WORKDIR = "${GO_INSTALL}"
GOBUILDFLAGS += "-mod vendor"

SRC_URI = " \
    git://github.com/containers/buildah;branch=release-1.26;name=buildah;protocol=https \
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
                if [ -n "${GO_LINKSHARED}" ]; then
                        ${GO} install ${GOBUILDFLAGS} ./cmd/buildah
                        ${GO} install ${GOBUILDFLAGS} ./tests/imgtype/imgtype.go
                        ${GO} install ${GOBUILDFLAGS} ./tests/copy/copy.go
                        rm -rf ${B}/bin
                fi
                ${GO} install ${GO_LINKSHARED} ${GOBUILDFLAGS} ./cmd/buildah
                ${GO} install ${GO_LINKSHARED} ${GOBUILDFLAGS} ./tests/imgtype/imgtype.go
                ${GO} install ${GO_LINKSHARED} ${GOBUILDFLAGS} ./tests/copy/copy.go
        fi
}

do_install:append() {
    dest_dir=${D}/${sysconfdir}/containers
    mkdir -p ${dest_dir}
    install -m 666 ${S}/src/github.com/containers/buildah/docs/samples/registries.conf ${dest_dir}/buildah.registries.conf.sample
    install -m 666 ${S}/src/github.com/containers/buildah/tests/policy.json ${dest_dir}/buildah.policy.json.sample
}
