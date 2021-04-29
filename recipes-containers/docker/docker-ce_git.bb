HOMEPAGE = "http://www.docker.com"
SUMMARY = "Linux container runtime"
DESCRIPTION = "Linux container runtime \
 Docker complements kernel namespacing with a high-level API which \
 operates at the process level. It runs unix processes with strong \
 guarantees of isolation and repeatability across servers. \
 . \
 Docker is a great building block for automating distributed systems: \
 large-scale web deployments, database clusters, continuous deployment \
 systems, private PaaS, service-oriented architectures, etc. \
 . \
 This package contains the daemon and client, which are \
 officially supported on x86_64 and arm hosts. \
 Other architectures are considered experimental. \
 . \
 Also, note that kernel version 3.10 or above is required for proper \
 operation of the daemon process, and that any lower versions may have \
 subtle and/or glaring issues. \
 "

#
# https://github.com/docker/docker-ce-packaging.git
#  common.mk:
#    DOCKER_CLI_REPO    ?= https://github.com/docker/cli.git
#    DOCKER_ENGINE_REPO ?= https://github.com/docker/docker.git
#    REF                ?= HEAD
#    DOCKER_CLI_REF     ?= $(REF)
#    DOCKER_ENGINE_REF  ?= $(REF)
#
# These follow the tags for our releases in the listed repositories
# so we get that tag, and make it our SRCREVS:
#

SRCREV_docker = "8728dd246c3ab53105434eef8ffe997b6fd14dc6"
SRCREV_libnetwork = "b3507428be5b458cb0e2b4086b13531fb0706e46"
SRCREV_cli = "370c28948e3c12dce3d1df60b6f184990618553f"
SRC_URI = "\
	git://github.com/docker/docker.git;branch=20.10;name=docker \
	git://github.com/docker/libnetwork.git;branch=master;name=libnetwork;destsuffix=git/libnetwork \
	git://github.com/docker/cli;branch=20.10;name=cli;destsuffix=git/cli \
	file://0001-libnetwork-use-GO-instead-of-go.patch \
	file://docker.init \
        file://0001-dynbinary-use-go-cross-compiler.patch \
        file://0001-cli-use-external-GO111MODULE-and-cross-compiler.patch \
	"

require docker.inc

# Apache-2.0 for docker
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=4859e97a9c7780e77972d989f0823f28"

GO_IMPORT = "import"

S = "${WORKDIR}/git"

DOCKER_VERSION = "20.10.6-ce"
PV = "${DOCKER_VERSION}+git${SRCREV_docker}"

PACKAGES =+ "${PN}-contrib"

DOCKER_PKG="github.com/docker/docker"
# in order to exclude devicemapper and btrfs - https://github.com/docker/docker/issues/14056
BUILD_TAGS = "exclude_graphdriver_btrfs exclude_graphdriver_devicemapper"

inherit go
inherit goarch
inherit pkgconfig

do_configure[noexec] = "1"

do_compile() {
	# Set GOPATH. See 'PACKAGERS.md'. Don't rely on
	# docker to download its dependencies but rather
	# use dependencies packaged independently.
	cd ${S}/src/import
	rm -rf .gopath
	mkdir -p .gopath/src/"$(dirname "${DOCKER_PKG}")"
	ln -sf ../../../.. .gopath/src/"${DOCKER_PKG}"

	ln -sf ${WORKDIR}/git/libnetwork .gopath/src/github.com/docker/libnetwork
	ln -sf ${WORKDIR}/git/cli .gopath/src/github.com/docker/cli

	export GOPATH="${S}/src/import/.gopath:${S}/src/import/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go"
	export GOROOT="${STAGING_DIR_NATIVE}/${nonarch_libdir}/${HOST_SYS}/go"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export GOARCH=${TARGET_GOARCH}
	export CGO_ENABLED="1"
	export CGO_CFLAGS="${CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export DOCKER_BUILDTAGS='${BUILD_TAGS} ${PACKAGECONFIG_CONFARGS}'

	export DISABLE_WARN_OUTSIDE_CONTAINER=1
	export GO111MODULE=off

	cd ${S}/src/import/

	# this is the unsupported build structure that doesn't rely on an
	# existing docker to build this:
	VERSION="${DOCKER_VERSION}" DOCKER_GITCOMMIT="${SRCREV_docker}" ./hack/make.sh dynbinary

	# build the proxy
	cd ${S}/src/import
	ln -sf ${WORKDIR}/git/libnetwork .gopath/src/github.com/docker/libnetwork
	cd ${S}/src/import/.gopath/src/github.com/docker/libnetwork
	oe_runmake cross-local

        # build the cli
	cd ${S}/src/import/.gopath/src/github.com/docker/cli
	export CFLAGS=""
	export LDFLAGS=""
	export DOCKER_VERSION=${DOCKER_VERSION}
	VERSION="${DOCKER_VERSION}" DOCKER_GITCOMMIT="${SRCREV_docker}" make dynbinary
}

do_install() {
	mkdir -p ${D}/${bindir}
	cp ${WORKDIR}/git/cli/build/docker ${D}/${bindir}/docker
	cp ${S}/src/import/bundles/dynbinary-daemon/dockerd ${D}/${bindir}/dockerd
	cp ${WORKDIR}/git/libnetwork/bin/docker-proxy* ${D}/${bindir}/docker-proxy

	if ${@bb.utils.contains('DISTRO_FEATURES','systemd','true','false',d)}; then
		install -d ${D}${systemd_unitdir}/system
		install -m 644 ${S}/src/import/contrib/init/systemd/docker.* ${D}/${systemd_unitdir}/system
		# replaces one copied from above with one that uses the local registry for a mirror
		install -m 644 ${S}/src/import/contrib/init/systemd/docker.service ${D}/${systemd_unitdir}/system
		rm -f ${D}/${systemd_unitdir}/system/docker.service.rpm
	else
		install -d ${D}${sysconfdir}/init.d
		install -m 0755 ${WORKDIR}/docker.init ${D}${sysconfdir}/init.d/docker.init
	fi
	# TLS key that docker creates at run-time if not found is what resides here
	if ${@bb.utils.contains('PACKAGECONFIG','transient-config','true','false',d)}; then
		install -d ${D}${sysconfdir}
		ln -s ..${localstatedir}/run/docker ${D}${sysconfdir}/docker
	else
		install -d ${D}${sysconfdir}/docker
	fi

	mkdir -p ${D}${datadir}/docker/
	install -m 0755 ${S}/src/import/contrib/check-config.sh ${D}${datadir}/docker/
}

FILES_${PN} += "${systemd_unitdir}/system/* ${sysconfdir}/docker"

FILES_${PN}-contrib += "${datadir}/docker/check-config.sh"
RDEPENDS_${PN}-contrib += "bash"
