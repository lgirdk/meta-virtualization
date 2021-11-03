SUMMARY = "Production-Grade Container Scheduling and Management"
DESCRIPTION = "Lightweight Kubernetes, intended to be a fully compliant Kubernetes."
HOMEPAGE = "https://k3s.io/"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${S}/src/import/LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"

SRC_URI = "git://github.com/rancher/k3s.git;branch=release-1.21;name=k3s;protocol=https \
           file://k3s.service \
           file://k3s-agent.service \
           file://k3s-agent \
           file://k3s-clean \
           file://cni-containerd-net.conf \
           file://0001-Finding-host-local-in-usr-libexec.patch;patchdir=src/import \
           file://k3s-killall.sh \
          "
SRC_URI[k3s.md5sum] = "363d3a08dc0b72ba6e6577964f6e94a5"
SRCREV_k3s = "aa5a0a8c783a8a4475b727a04d6594c0fea09253"

PV = "v1.21.5+k3s1"

CNI_NETWORKING_FILES ?= "${WORKDIR}/cni-containerd-net.conf"

inherit go
inherit goarch
inherit systemd
inherit cni_networking

PACKAGECONFIG = ""
PACKAGECONFIG[upx] = ",,upx-native"
GO_IMPORT = "import"
GO_BUILD_LDFLAGS = "-X github.com/rancher/k3s/pkg/version.Version=${PV} \
                    -X github.com/rancher/k3s/pkg/version.GitCommit=${@d.getVar('SRCREV_k3s', d, 1)[:8]} \
                    -w -s \
                   "
BIN_PREFIX ?= "${exec_prefix}/local"

inherit features_check
REQUIRED_DISTRO_FEATURES ?= "seccomp"

do_compile() {
        export GOPATH="${S}/src/import/.gopath:${S}/src/import/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go"
        export CGO_ENABLED="1"
        export GOFLAGS="-mod=vendor"

        TAGS="static_build ctrd no_btrfs netcgo osusergo providerless"

        cd ${S}/src/import
        ${GO} build -tags "$TAGS" -ldflags "${GO_BUILD_LDFLAGS} -w -s" -o ./dist/artifacts/k3s ./cmd/server/main.go

        # Use UPX if it is enabled (and thus exists) to compress binary
        if command -v upx > /dev/null 2>&1; then
                upx -9 ./dist/artifacts/k3s
        fi
}

do_install() {
        install -d "${D}${BIN_PREFIX}/bin"
        install -m 755 "${S}/src/import/dist/artifacts/k3s" "${D}${BIN_PREFIX}/bin"
        ln -sr "${D}/${BIN_PREFIX}/bin/k3s" "${D}${BIN_PREFIX}/bin/crictl"
        # We want to use the containerd provided ctr
        # ln -sr "${D}/${BIN_PREFIX}/bin/k3s" "${D}${BIN_PREFIX}/bin/ctr"
        ln -sr "${D}/${BIN_PREFIX}/bin/k3s" "${D}${BIN_PREFIX}/bin/kubectl"
        install -m 755 "${WORKDIR}/k3s-clean" "${D}${BIN_PREFIX}/bin"
        install -m 755 "${WORKDIR}/k3s-killall.sh" "${D}${BIN_PREFIX}/bin"

        if ${@bb.utils.contains('DISTRO_FEATURES','systemd','true','false',d)}; then
                install -D -m 0644 "${WORKDIR}/k3s.service" "${D}${systemd_system_unitdir}/k3s.service"
                install -D -m 0644 "${WORKDIR}/k3s-agent.service" "${D}${systemd_system_unitdir}/k3s-agent.service"
                sed -i "s#\(Exec\)\(.*\)=\(.*\)\(k3s\)#\1\2=${BIN_PREFIX}/bin/\4#g" "${D}${systemd_system_unitdir}/k3s.service" "${D}${systemd_system_unitdir}/k3s-agent.service"
                install -m 755 "${WORKDIR}/k3s-agent" "${D}${BIN_PREFIX}/bin"
        fi
}

PACKAGES =+ "${PN}-server ${PN}-agent"

SYSTEMD_PACKAGES = "${@bb.utils.contains('DISTRO_FEATURES','systemd','${PN}-server ${PN}-agent','',d)}"
SYSTEMD_SERVICE:${PN}-server = "${@bb.utils.contains('DISTRO_FEATURES','systemd','k3s.service','',d)}"
SYSTEMD_SERVICE:${PN}-agent = "${@bb.utils.contains('DISTRO_FEATURES','systemd','k3s-agent.service','',d)}"
SYSTEMD_AUTO_ENABLE:${PN}-agent = "disable"

FILES:${PN}-agent = "${BIN_PREFIX}/bin/k3s-agent"
FILES:${PN} += "${BIN_PREFIX}/bin/*"

RDEPENDS:${PN} = "k3s-cni conntrack-tools coreutils findutils iptables iproute2 ipset virtual-containerd"
RDEPENDS:${PN}-server = "${PN}"
RDEPENDS:${PN}-agent = "${PN}"

RRECOMMENDS:${PN} = "\
                     kernel-module-xt-addrtype \
                     kernel-module-xt-nat \
                     kernel-module-xt-multiport \
                     kernel-module-xt-conntrack \
                     kernel-module-xt-comment \
                     kernel-module-xt-mark \
                     kernel-module-xt-connmark \
                     kernel-module-vxlan \
                     kernel-module-xt-masquerade \
                     kernel-module-xt-statistic \
                     kernel-module-xt-physdev \
                     kernel-module-xt-nflog \
                     kernel-module-xt-limit \
                     kernel-module-nfnetlink-log \
                     "

RCONFLICTS:${PN} = "kubectl"

INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP:${PN} += "ldflags already-stripped"
