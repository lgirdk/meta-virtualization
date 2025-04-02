HOMEPAGE = "http://github.com/docker/distribution"
SUMMARY = "The Docker toolset to pack, ship, store, and deliver content"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d2794c0df5b907fdace235a619d80314"

SRCREV_distribution = "f22dd6186008ff9d35f92acc5bc5fd16ba7ef95a"
SRC_URI = "git://github.com/docker/distribution.git;branch=main;name=distribution;destsuffix=git/src/github.com/distribution/distribution/v3;protocol=https \
           file://docker-registry.service \
           file://0001-build-use-to-use-cross-go-compiler.patch \
          "

PACKAGES =+ "docker-registry"

PV = "v3.0.0-beta.1"
S = "${WORKDIR}/git/src/github.com/distribution/distribution/v3"

GO_IMPORT = "import"

inherit goarch go systemd

# This disables seccomp and apparmor, which are on by default in the
# go package. 
EXTRA_OEMAKE = "BUILDTAGS = ''"

do_compile() {
	export GOARCH="${TARGET_GOARCH}"
	export GOPATH="${WORKDIR}/git/"
	export GOROOT="${STAGING_LIBDIR}/go"
	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${TARGET_CFLAGS}"
	export GO_GCFLAGS=""
	export CGO_LDFLAGS="${TARGET_LDFLAGS}"
	export GO111MODULE=off
	export GO_BUILD_FLAGS="-trimpath"

	cd ${S}

	oe_runmake binaries
}

do_install() {
	install -d ${D}/${sbindir}
	install ${S}/bin/registry ${D}/${sbindir}

	if ${@bb.utils.contains('DISTRO_FEATURES','systemd','true','false',d)}; then
	    install -d ${D}${systemd_unitdir}/system
	    install -m 644 ${UNPACKDIR}/docker-registry.service ${D}/${systemd_unitdir}/system
	fi

	install -d ${D}/${sysconfdir}/docker-distribution/registry/
	install ${S}/cmd/registry/config-example.yml ${D}/${sysconfdir}/docker-distribution/registry/config.yml

	# storage for the registry containers
	install -d ${D}/${localstatedir}/lib/registry/
}

INSANE_SKIP:${PN} += "ldflags already-stripped"
INSANE_SKIP:${MLPREFIX}docker-registry += "ldflags already-stripped textrel"

FILES:docker-registry = "${sbindir}/*"
FILES:docker-registry += "${systemd_unitdir}/system/docker-registry.service"
FILES:docker-registry += "${sysconfdir}/docker-distribution/*"
FILES:docker-registry += "${localstatedir}/lib/registry/"

SYSTEMD_PACKAGES = "docker-registry"
SYSTEMD_SERVICE:docker-registry = "${@bb.utils.contains('DISTRO_FEATURES','systemd','docker-registry.service','',d)}"
SYSTEMD_AUTO_ENABLE:docker-registry = "enable"

RDEPENDS:${PN}-ptest:remove = "${PN}"

CVE_PRODUCT = "docker_registry"
