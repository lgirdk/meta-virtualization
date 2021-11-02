DESCRIPTION = " The Command-Line Interface (CLI) part of the Kata Containers runtime component"
HOMEPAGE = "https://github.com/kata-containers/runtime"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/github.com/kata-containers/runtime/LICENSE;md5=86d3f3a95c324c9479bd8986968f4327"

GO_IMPORT = "github.com/kata-containers/runtime"
SRCREV = "f4cf2137be58c3778d87a8ee8e258e68d1ede888"
SRC_URI = "git://${GO_IMPORT}.git;branch=master \
          "
RDEPENDS_${PN}-dev_append = "bash"
RDEPENDS_${PN} = " \
                 qemu \
                 hyperstart \
                 "

# grpc

S = "${WORKDIR}/git"

inherit go

do_compile() {
	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export GOARCH=${TARGET_GOARCH}
	export CGO_ENABLED="1"
	export CGO_CFLAGS="${CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

	cd ${S}/src/${GO_IMPORT}
	oe_runmake runtime
}

do_install() {
	mkdir -p ${D}/${bindir}
	cp ${WORKDIR}/git/src/${GO_IMPORT}/kata-runtime ${D}/${bindir}
	
	mkdir -p ${D}/${datadir}/defaults/kata-containers/
	cp ${WORKDIR}/git/src/${GO_IMPORT}/cli/config/configuration.toml ${D}/${datadir}/defaults/kata-containers/

	sed -e 's|/usr/bin/qemu-lite-system-x86_64|/usr/bin/qemu-system-x86_64|' -i ${D}/${datadir}/defaults/kata-containers/configuration.toml
	sed -e 's|/usr/share/kata-containers/vmlinuz.container|/var/lib/hyper/kernel|' -i ${D}/${datadir}/defaults/kata-containers/configuration.toml
	sed -e 's|/usr/share/kata-containers/kata-containers-initrd.img|/var/lib/hyper/hyper-initrd.img|' -i ${D}/${datadir}/defaults/kata-containers/configuration.toml
	sed -e 's/^\(image =.*\)/# \1/g' -i ${D}/${datadir}/defaults/kata-containers/configuration.toml
	
	# TODO: modify the config file for the configured kernel and fix the location of the qemu-system-binary

	# /usr/share/defaults/kata-containers/configuration.toml: file /usr/libexec/kata-containers/kata-shim does not exist
	# fork/exec /usr/libexec/kata-containers/kata-proxy: no such file or directory

	#64  mknod /dev/kvm c 10 232
	#68  kata-runtime --log=/dev/stdout run --bundle /opt/container/cube-server foo
	
	
}

FILES_${PN} += "${datadir}/defaults/kata-containers/*"

deltask compile_ptest_base
