DESCRIPTION = "\
  Go is an open source programming language that makes it easy to build simple, \
  reliable, and efficient software. \
  "
HOMEPAGE = "https://golang.org/"
LICENSE = "BSD-3-Clause"

DEPENDS = "virtual/${TARGET_PREFIX}gcc"

SRC_URI = "http://golang.org/dl/go${PV}.src.tar.gz"

S = "${WORKDIR}/go/"

inherit cross

LIC_FILES_CHKSUM = "file://LICENSE;md5=591778525c869cdde0ab5a1bf283cd81"
SRC_URI[md5sum] = "4b66d7249554181c314f139ea78920b1"
SRC_URI[sha256sum] = "eb983e6c5b2b9838f482c5442b1ac1856f610f2b21f3c123b3fedb48ffc35382"

SRC_URI += "\
        file://bsd_svid_source.patch \
        file://ccache.patch \
        "

do_compile() {
	## Setting `$GOBIN` doesn't do any good, looks like it ends up copying binaries there.
	export GOROOT_FINAL="${SYSROOT}${libdir}/go"

	export GOHOSTOS="linux"
	export GOOS="linux"

	export GOARCH="${TARGET_ARCH}"
	# golang only support 386, amd64 and arm architecture.
	if [ "${TARGET_ARCH}" = "x86_64" ]; then
		export GOARCH="amd64"
	elif [ "${TARGET_ARCH}" = "i586" ]; then
		export GOARCH="386"
	fi
	if [ "${TARGET_ARCH}" = "arm" ]
	then
		if [ `echo ${TUNE_PKGARCH} | cut -c 1-7` = "cortexa" ]
		then
			echo GOARM 7
			export GOARM="7"
		fi
	fi

	export CGO_ENABLED="1"
	## TODO: consider setting GO_EXTLINK_ENABLED

	export CC="${BUILD_CC}"
	export CC_FOR_TARGET="${TARGET_PREFIX}gcc ${TARGET_CC_ARCH} --sysroot=${STAGING_DIR_TARGET}"
	export CXX_FOR_TARGET="${TARGET_PREFIX}g++ ${TARGET_CC_ARCH} --sysroot=${STAGING_DIR_TARGET}"
	export GO_CCFLAGS="${HOST_CFLAGS}"
	export GO_LDFLAGS="${HOST_LDFLAGS}"

	cd src && ./make.bash
}

do_install() {
	## It should be okay to ignore `${WORKDIR}/go/bin/linux_arm`...
	## Also `gofmt` is not needed right now.
	install -d "${D}${bindir}"
	install -m 0755 "${WORKDIR}/go/bin/go" "${D}${bindir}"
	install -d "${D}${libdir}/go"
	## TODO: use `install` instead of `cp`
	for dir in include lib pkg src test
	do cp -a "${WORKDIR}/go/${dir}" "${D}${libdir}/go/"
	done
}
