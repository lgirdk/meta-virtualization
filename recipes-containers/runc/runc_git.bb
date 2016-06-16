HOMEPAGE = "https://github.com/opencontainers/runc"
SUMMARY = "runc container cli tools"
DESCRIPTION = "runc is a CLI tool for spawning and running containers according to the OCI specification."

# Note: this rev is before the required protocol field, update when all components
#       have been updated to match.
SRCREV = "baf6536d6259209c3edfa2b22237af82942d3dfa"
SRC_URI = "\
	git://github.com/opencontainers/runc;branch=master \
	file://0001-nsexec-fix-build-against-musl-libc.patch \
	"

# Apache-2.0 for containerd
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=435b266b3899aa8a959f17d41c56def8"

S = "${WORKDIR}/git"

RUNC_VERSION = "0.1.1"
PV = "${RUNC_VERSION}+git${SRCREV}"

DEPENDS = "go-cross \
    "
RRECOMMENDS_${PN} = "lxc docker"

LIBCONTAINER_PACKAGE="github.com/opencontainers/runc/libcontainer"

do_configure[noexec] = "1"
EXTRA_OEMAKE="BUILDTAGS=''"

inherit go-osarchmap

do_compile() {
	export GOARCH="${TARGET_GOARCH}"

	# Set GOPATH. See 'PACKAGERS.md'. Don't rely on
	# docker to download its dependencies but rather
	# use dependencies packaged independently.
	cd ${S}
	rm -rf .gopath
	dname=`dirname "${LIBCONTAINER_PACKAGE}"`
	bname=`basename "${LIBCONTAINER_PACKAGE}"`
	mkdir -p .gopath/src/${dname}

	(cd .gopath/src/${dname}; ln -sf ../../../../../${bname} ${bname})
	export GOPATH="${S}/.gopath:${S}/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go"
	cd -

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export CGO_ENABLED="1"
	export CFLAGS=""
	export LDFLAGS=""
	export CGO_CFLAGS="${BUILDSDK_CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${BUILDSDK_LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

        oe_runmake static
}

do_install() {
	mkdir -p ${D}/${bindir}

	cp ${S}/runc ${D}/${bindir}/runc
	ln -sf runc ${D}/${bindir}/docker-runc
}

INHIBIT_PACKAGE_STRIP = "1"
