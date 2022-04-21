HOMEPAGE = "https://github.com/containerd/nerdctl"
SUMMARY =  "Docker-compatible CLI for containerd"
DESCRIPTION = "nerdctl: Docker-compatible CLI for containerd \
    "

DEPENDS = " \
    go-md2man \
    rsync-native \
    ${@bb.utils.filter('DISTRO_FEATURES', 'systemd', d)} \
"

# Specify the first two important SRCREVs as the format
SRCREV_FORMAT="nerdcli_cgroups"
SRCREV_nerdcli = "48f189a53a24c12838433f5bb5dd57f536816a8a"

SRC_URI = "git://github.com/containerd/nerdctl.git;name=nerdcli;branch=master;protocol=https"

include src_uri.inc

# patches and config
SRC_URI += "file://0001-Makefile-allow-external-specification-of-build-setti.patch \
            file://modules.txt \
           "

SRC_URI[sha256sum] = "d7b05a9bff34dfb25abe7e5b1e54cf2607f953d91cb33fb231a4775a1a4afa3d"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

GO_IMPORT = "import"

# S = "${WORKDIR}/git"

PV = "v0.18.0"

NERDCTL_PKG = "github.com/containerd/nerdctl"

inherit go goarch
inherit systemd pkgconfig

do_configure[noexec] = "1"

EXTRA_OEMAKE = " \
     PREFIX=${prefix} BINDIR=${bindir} LIBEXECDIR=${libexecdir} \
     ETCDIR=${sysconfdir} TMPFILESDIR=${nonarch_libdir}/tmpfiles.d \
     SYSTEMDDIR=${systemd_unitdir}/system USERSYSTEMDDIR=${systemd_unitdir}/user \
"

PACKAGECONFIG ?= ""

do_compile() {

    	cd ${S}/src/import

	export GOPATH="$GOPATH:${S}/src/import/.gopath"

	# Pass the needed cflags/ldflags so that cgo
	# can find the needed headers files and libraries
	export GOARCH=${TARGET_GOARCH}
	export CGO_ENABLED="1"
	export CGO_CFLAGS="${CFLAGS} --sysroot=${STAGING_DIR_TARGET}"
	export CGO_LDFLAGS="${LDFLAGS} --sysroot=${STAGING_DIR_TARGET}"

	export GOFLAGS="-mod=vendor"

	# this moves all the fetches into the proper vendor structure
	# expected for build

	sites="github.com/Masterminds/semver/v3:github.com/Masterminds/semver/v3 \
           github.com/Microsoft/go-winio:github.com/Microsoft/go-winio \
           github.com/compose-spec/compose-go:github.com/compose-spec/compose-go \
           github.com/containerd/cgroups:github.com/containerd/cgroups \
           github.com/containerd/console:github.com/containerd/console \
           github.com/containerd/containerd:github.com/containerd/containerd \
           github.com/containerd/continuity:github.com/containerd/continuity \
           github.com/containerd/go-cni:github.com/containerd/go-cni \
           github.com/containerd/imgcrypt:github.com/containerd/imgcrypt \
           github.com/containerd/stargz-snapshotter:github.com/containerd/stargz-snapshotter \
           github.com/containerd/stargz-snapshotter/estargz:github.com/containerd/stargz-snapshotter//estargz \
           github.com/containerd/stargz-snapshotter/ipfs:github.com/containerd/stargz-snapshotter//ipfs \
           github.com/containerd/typeurl:github.com/containerd/typeurl \
           github.com/containernetworking/cni:github.com/containernetworking/cni \
           github.com/containernetworking/plugins:github.com/containernetworking/plugins \
           github.com/cyphar/filepath-securejoin:github.com/cyphar/filepath-securejoin \
           github.com/docker/cli:github.com/docker/cli \
           github.com/docker/docker:github.com/docker/docker \
           github.com/docker/go-connections:github.com/docker/go-connections \
           github.com/docker/go-units:github.com/docker/go-units \
           github.com/fatih/color:github.com/fatih/color \
           github.com/gogo/protobuf:github.com/gogo/protobuf \
           github.com/hashicorp/go-multierror:github.com/hashicorp/go-multierror \
           github.com/ipfs/go-cid:github.com/ipfs/go-cid \
           github.com/ipfs/go-ipfs-files:github.com/ipfs/go-ipfs-files \
           github.com/ipfs/go-ipfs-http-client:github.com/ipfs/go-ipfs-http-client \
           github.com/ipfs/interface-go-ipfs-core:github.com/ipfs/interface-go-ipfs-core \
           github.com/mattn/go-isatty:github.com/mattn/go-isatty \
           github.com/moby/sys/mount:github.com/moby/sys/mount//mount \
           github.com/moby/sys/mountinfo:github.com/moby/sys/mount//mountinfo \
           github.com/moby/sys/signal:github.com/moby/sys/mount//signal \
           github.com/multiformats/go-multiaddr:github.com/multiformats/go-multiaddr \
           github.com/opencontainers/go-digest:github.com/opencontainers/go-digest \
           github.com/opencontainers/image-spec:github.com/opencontainers/image-spec \
           github.com/opencontainers/runtime-spec:github.com/opencontainers/runtime-spec \
           github.com/pelletier/go-toml:github.com/pelletier/go-toml \
           github.com/rootless-containers/bypass4netns:github.com/rootless-containers/bypass4netns \
           github.com/rootless-containers/rootlesskit:github.com/rootless-containers/rootlesskit \
           github.com/sirupsen/logrus:github.com/sirupsen/logrus \
           github.com/spf13/cobra:github.com/spf13/cobra \
           github.com/spf13/pflag:github.com/spf13/pflag \
           github.com/tidwall/gjson:github.com/tidwall/gjson \
           github.com/vishvananda/netlink:github.com/vishvananda/netlink \
           github.com/vishvananda/netns:github.com/vishvananda/netns \
           golang.org/x/crypto:go.googlesource.com/crypto \
           golang.org/x/net:go.googlesource.com/net \
           golang.org/x/sync:go.googlesource.com/sync \
           golang.org/x/sys:go.googlesource.com/sys \
           golang.org/x/term:go.googlesource.com/term \
           gopkg.in/yaml.v2:gopkg.in/yaml.v2 \
           gotest.tools/v3:github.com/gotestyourself/gotest.tools/v3 \
           github.com/Azure/go-ansiterm:github.com/Azure/go-ansiterm \
           github.com/Microsoft/hcsshim:github.com/Microsoft/hcsshim \
           github.com/beorn7/perks:github.com/beorn7/perks \
           github.com/btcsuite/btcd:github.com/btcsuite/btcd \
           github.com/cespare/xxhash/v2:github.com/cespare/xxhash/v2 \
           github.com/cilium/ebpf:github.com/cilium/ebpf \
           github.com/containerd/fifo:github.com/containerd/fifo \
           github.com/containerd/ttrpc:github.com/containerd/ttrpc \
           github.com/containers/ocicrypt:github.com/containers/ocicrypt \
           github.com/coreos/go-systemd/v22:github.com/coreos/go-systemd/v22 \
           github.com/cpuguy83/go-md2man/v2:github.com/cpuguy83/go-md2man/v2 \
           github.com/crackcomm/go-gitignore:github.com/crackcomm/go-gitignore \
           github.com/distribution/distribution/v3:github.com/distribution/distribution/v3 \
           github.com/docker/distribution:github.com/docker/distribution \
           github.com/docker/docker-credential-helpers:github.com/docker/docker-credential-helpers \
           github.com/docker/go-events:github.com/docker/go-events \
           github.com/docker/go-metrics:github.com/docker/go-metrics \
           github.com/godbus/dbus/v5:github.com/godbus/dbus/v5 \
           github.com/gogo/googleapis:github.com/gogo/googleapis \
           github.com/golang/groupcache:github.com/golang/groupcache \
           github.com/golang/protobuf:github.com/golang/protobuf \
           github.com/google/go-cmp:github.com/google/go-cmp \
           github.com/google/uuid:github.com/google/uuid \
           github.com/gorilla/mux:github.com/gorilla/mux \
           github.com/hashicorp/errwrap:github.com/hashicorp/errwrap \
           github.com/hashicorp/golang-lru:github.com/hashicorp/golang-lru \
           github.com/imdario/mergo:github.com/imdario/mergo \
           github.com/inconshreveable/mousetrap:github.com/inconshreveable/mousetrap \
           github.com/ipfs/bbloom:github.com/ipfs/bbloom \
           github.com/ipfs/go-block-format:github.com/ipfs/go-block-format \
           github.com/ipfs/go-blockservice:github.com/ipfs/go-blockservice \
           github.com/ipfs/go-datastore:github.com/ipfs/go-datastore \
           github.com/ipfs/go-ipfs-blockstore:github.com/ipfs/go-ipfs-blockstore \
           github.com/ipfs/go-ipfs-cmds:github.com/ipfs/go-ipfs-cmds \
           github.com/ipfs/go-ipfs-ds-help:github.com/ipfs/go-ipfs-ds-help \
           github.com/ipfs/go-ipfs-exchange-interface:github.com/ipfs/go-ipfs-exchange-interface \
           github.com/ipfs/go-ipfs-util:github.com/ipfs/go-ipfs-util \
           github.com/ipfs/go-ipld-cbor:github.com/ipfs/go-ipld-cbor \
           github.com/ipfs/go-ipld-format:github.com/ipfs/go-ipld-format \
           github.com/ipfs/go-ipld-legacy:github.com/ipfs/go-ipld-legacy \
           github.com/ipfs/go-log:github.com/ipfs/go-log \
           github.com/ipfs/go-log/v2:github.com/ipfs/go-log/v2 \
           github.com/ipfs/go-merkledag:github.com/ipfs/go-merkledag \
           github.com/ipfs/go-metrics-interface:github.com/ipfs/go-metrics-interface \
           github.com/ipfs/go-path:github.com/ipfs/go-path \
           github.com/ipfs/go-unixfs:github.com/ipfs/go-unixfs \
           github.com/ipfs/go-verifcid:github.com/ipfs/go-verifcid \
           github.com/ipld/go-codec-dagpb:github.com/ipld/go-codec-dagpb \
           github.com/ipld/go-ipld-prime:github.com/ipld/go-ipld-prime \
           github.com/jbenet/goprocess:github.com/jbenet/goprocess \
           github.com/klauspost/compress:github.com/klauspost/compress \
           github.com/klauspost/cpuid/v2:github.com/klauspost/cpuid/v2 \
           github.com/libp2p/go-buffer-pool:github.com/libp2p/go-buffer-pool \
           github.com/libp2p/go-libp2p-core:github.com/libp2p/go-libp2p-core \
           github.com/libp2p/go-openssl:github.com/libp2p/go-openssl \
           github.com/mattn/go-colorable:github.com/mattn/go-colorable \
           github.com/mattn/go-shellwords:github.com/mattn/go-shellwords \
           github.com/matttproud/golang_protobuf_extensions:github.com/matttproud/golang_protobuf_extensions \
           github.com/miekg/pkcs11:github.com/miekg/pkcs11 \
           github.com/minio/blake2b-simd:github.com/minio/blake2b-simd \
           github.com/minio/sha256-simd:github.com/minio/sha256-simd \
           github.com/mitchellh/go-homedir:github.com/mitchellh/go-homedir \
           github.com/mitchellh/mapstructure:github.com/mitchellh/mapstructure \
           github.com/moby/locker:github.com/moby/locker \
           github.com/moby/term:github.com/moby/term \
           github.com/morikuni/aec:github.com/morikuni/aec \
           github.com/mr-tron/base58:github.com/mr-tron/base58 \
           github.com/multiformats/go-base32:github.com/multiformats/go-base32 \
           github.com/multiformats/go-base36:github.com/multiformats/go-base36 \
           github.com/multiformats/go-multibase:github.com/multiformats/go-multibase \
           github.com/multiformats/go-multihash:github.com/multiformats/go-multihash \
           github.com/multiformats/go-varint:github.com/multiformats/go-varint \
           github.com/opencontainers/runc:github.com/opencontainers/runc \
           github.com/opencontainers/selinux:github.com/opencontainers/selinux \
           github.com/opentracing/opentracing-go:github.com/opentracing/opentracing-go \
           github.com/pkg/errors:github.com/pkg/errors \
           github.com/polydawn/refmt:github.com/polydawn/refmt \
           github.com/prometheus/client_golang:github.com/prometheus/client_golang \
           github.com/prometheus/client_model:github.com/prometheus/client_model \
           github.com/prometheus/common:github.com/prometheus/common \
           github.com/prometheus/procfs:github.com/prometheus/procfs \
           github.com/rs/cors:github.com/rs/cors \
           github.com/russross/blackfriday/v2:github.com/russross/blackfriday/v2 \
           github.com/spacemonkeygo/spacelog:github.com/spacemonkeygo/spacelog \
           github.com/stefanberger/go-pkcs11uri:github.com/stefanberger/go-pkcs11uri \
           github.com/tidwall/match:github.com/tidwall/match \
           github.com/tidwall/pretty:github.com/tidwall/pretty \
           github.com/urfave/cli:github.com/urfave/cli \
           github.com/vbatts/tar-split:github.com/vbatts/tar-split \
           github.com/whyrusleeping/cbor-gen:github.com/whyrusleeping/cbor-gen \
           github.com/xeipuuv/gojsonpointer:github.com/xeipuuv/gojsonpointer \
           github.com/xeipuuv/gojsonreference:github.com/xeipuuv/gojsonreference \
           github.com/xeipuuv/gojsonschema:github.com/xeipuuv/gojsonschema \
           go.mozilla.org/pkcs7:go.mozilla.org/pkcs7 \
           go.opencensus.io:go.opencensus.io \
           go.uber.org/atomic:go.uber.org/atomic \
           go.uber.org/multierr:go.uber.org/multierr \
           go.uber.org/zap:go.uber.org/zap \
           golang.org/x/text:go.googlesource.com/text \
           golang.org/x/xerrors:go.googlesource.com/xerrors \
           google.golang.org/genproto:google.golang.org/genproto \
           google.golang.org/grpc:google.golang.org/grpc \
           google.golang.org/protobuf:google.golang.org/protobuf \
           gopkg.in/square/go-jose.v2:gopkg.in/square/go-jose.v2 \
           github.com/hashicorp/golang-lru:github.com/hashicorp/golang-lru"

	for s in $sites; do
            site_dest=$(echo $s | cut -d: -f1)
            site_source=$(echo $s | cut -d: -f2)
            mkdir -p vendor.copy/$site_dest
            [ -n "$(ls -A vendor.copy/$site_dest/*.go 2> /dev/null)" ] && { echo "[INFO] vendor.fetch/$site_source -> $site_dest: go copy skipped (files present)" ; true ; } || { echo "[INFO] $site_dest: copying .go files" ; rsync -a --exclude='vendor/' --exclude='.git/' vendor.fetch/$site_source/ vendor.copy/$site_dest ; }
	done

	# our copied .go files are to be used for the build
	ln -sf vendor.copy vendor
	# inform go that we know what we are doing
	cp ${WORKDIR}/modules.txt vendor/

	oe_runmake GO=${GO} BUILDTAGS="${BUILDTAGS}" binaries
}

do_install() {
        install -d "${D}${BIN_PREFIX}/bin"
        install -m 755 "${S}/src/import/_output/nerdctl" "${D}${BIN_PREFIX}/bin"
}

INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP:${PN} += "ldflags already-stripped"

