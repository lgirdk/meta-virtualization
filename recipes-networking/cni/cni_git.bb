HOMEPAGE = "https://github.com/containernetworking/cni"
SUMMARY = "Container Network Interface - networking for Linux containers"
DESCRIPTION = "CNI (Container Network Interface), a Cloud Native Computing \
Foundation project, consists of a specification and libraries for writing \
plugins to configure network interfaces in Linux containers, along with a \
number of supported plugins. CNI concerns itself only with network connectivity \
of containers and removing allocated resources when the container is deleted. \
Because of this focus, CNI has a wide range of support and the specification \
is simple to implement. \
"

SRCREV_cni = "dc71cd2ba60c452c56a0a259f2a23d2afe42b688"
SRCREV_plugins = "0eddc554c0747200b7b112ce5322dcfa525298cf"
SRC_URI = "\
	git://github.com/containernetworking/cni.git;nobranch=1;name=cni \
        git://github.com/containernetworking/plugins.git;nobranch=1;destsuffix=plugins;name=plugins \
	"

RPROVIDES_${PN} += "kubernetes-cni"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=fa818a259cbed7ce8bc2a22d35a464fc"

GO_IMPORT = "import"

PV = "0.7.0+git${SRCREV_cni}"

inherit go
inherit goarch

do_compile() {
	# link fixups for compilation
	rm -f ${S}/src/import/vendor/src
	mkdir -p ${S}/src/import/vendor/
	ln -sf ./ ${S}/src/import/vendor/src
	rm -rf ${S}/src/import/plugins
	rm -rf ${S}/src/import/vendor/github.com/containernetworking/plugins

	mkdir -p ${S}/src/import/vendor/github.com/containernetworking/cni

	ln -sf ../../../../libcni ${S}/src/import/vendor/github.com/containernetworking/cni/libcni
	ln -sf ../../../../pkg ${S}/src/import/vendor/github.com/containernetworking/cni/pkg
	ln -sf ../../../../cnitool ${S}/src/import/vendor/github.com/containernetworking/cni/cnitool
	ln -sf ${WORKDIR}/plugins ${S}/src/import/vendor/github.com/containernetworking/plugins

	export GOPATH="${S}/src/import/.gopath:${S}/src/import/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go"
	export CGO_ENABLED="1"

	cd ${S}/src/import/vendor/github.com/containernetworking/cni/libcni
	${GO} build

	cd ${S}/src/import/vendor/github.com/containernetworking/cni/cnitool
	${GO} build

	cd ${S}/src/import/vendor/github.com/containernetworking/plugins/
	PLUGINS="$(ls -d plugins/meta/*; ls -d plugins/ipam/*; ls -d plugins/main/* | grep -v windows)"
	mkdir -p ${WORKDIR}/plugins/bin/
	for p in $PLUGINS; do
	    plugin="$(basename "$p")"
	    echo "building: $p"
	    ${GO} build -o ${WORKDIR}/plugins/bin/$plugin github.com/containernetworking/plugins/$p
	done
}

do_install() {
    localbindir="${libexecdir}/cni/"

    install -d ${D}${localbindir}
    install -d ${D}/${sysconfdir}/cni/net.d

    install -m 755 ${S}/src/import/cnitool/cnitool ${D}/${localbindir}
    install -m 755 -D ${WORKDIR}/plugins/bin/* ${D}/${localbindir}

    # Parts of k8s expect the cni binaries to be available in /opt/cni
    install -d ${D}/opt/cni
    ln -sf ${libexecdir}/cni/ ${D}/opt/cni/bin
}

FILES_${PN} += "${libexecdir}/cni/* /opt/cni/bin"

INSANE_SKIP_${PN} += "ldflags already-stripped"

deltask compile_ptest_base
