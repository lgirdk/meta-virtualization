SUMMARY = "a lightweight and portable command-line YAML processor "
HOMEPAGE = "https://github.com/mikefarah/yq"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=e40a0dcd62f8269b9bff37fe9aa7dcc2"

SRCREV_yq = "de2f77b49cbd40fd67031ee602245d0acc4ac482"

SRCREV_FORMAT = "yq_color"
SRC_URI = "git://${GO_IMPORT};name=yq;branch=master;protocol=https;destsuffix=${GO_SRCURI_DESTSUFFIX} \
           file://run-ptest"

# go.mod dependencies are below:

SRCREV_net = "8da7ed17cdaf5e1d42aa868f0b0322a207a17dcd"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/golang.org/x/net"

SRCREV_yaml.v3 = "f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/gopkg.in/yaml.v3"

SRCREV_sys = "d4ac05dc8c4c953ec29cae3df56c0833f4010763"
SRC_URI += "git://github.com/golang/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/golang.org/x/sys"

SRCREV_text = "566b44fc931e2542778a18423c655ce99b4f1402"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/golang.org/x/text"

SRCREV_diff = "20ebb0f2a09e612109b224b32f79370409108bcc"
SRC_URI += "git://github.com/pkg/diff;name=diff;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/pkg/diff"

SRCREV_color = "1c8d8706604ee5fb9a464e5097ba113101828a75"
SRC_URI += "git://github.com/fatih/color;name=color;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/fatih/color"

SRCREV_cobra = "e94f6d0dd9a5e5738dca6bce03c4b1207ffbc0ec"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/spf13/cobra"

SRCREV_pflag = "5ca813443bd2a4d9f46a253ea0407d23b3790713"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/spf13/pflag"

SRCREV_envsubst = "9df41d110e18f0ce5f7cd58f94d88d79dc441259"
SRC_URI += "git://github.com/a8m/envsubst;name=envsubst;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/a8m/envsubst"

SRCREV_go-json = "9872089c316cfe2d0f29b331b75d45bf6d522d96"
SRC_URI += "git://github.com/goccy/go-json;name=go-json;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/goccy/go-json"

SRCREV_go-yaml = "9b2c4569e2563d5cf2f16785b1fa2cab5e09882e"
SRC_URI += "git://github.com/goccy/go-yaml;name=go-yaml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/goccy/go-yaml"

SRCREV_copier = "70b1d4e41a98ca3ef7f468ade5c515e4193405df"
SRC_URI += "git://github.com/jinzhu/copier;name=copier;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/jinzhu/copier"

SRCREV_go-logging.v1 = "b2cb9fa56473e98db8caba80237377e83fe44db5"
SRC_URI += "git://github.com/op/go-logging;name=go-logging.v1;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/gopkg.in/op/go-logging.v1"

SRCREV_repr = "3d05a4813c4bc97890471226ba1cf7f240a376ac"
SRC_URI += "git://github.com/alecthomas/repr;name=repr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/alecthomas/repr"

SRCREV_gopher-lua = "1388221efeb4a239a053e5932c3d755699055684"
SRC_URI += "git://github.com/yuin/gopher-lua;name=gopher-lua;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/yuin/gopher-lua"

SRCREV_go-isatty = "a7c02353c47bc4ec6b30dc9628154ae4fe760c11"
SRC_URI += "git://github.com/mattn/go-isatty;name=go-isatty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/mattn/go-isatty"

SRCREV_utfbom = "6ae8f945ca96f30defc7e8ab12ec5d10cf86ded4"
SRC_URI += "git://github.com/dimchansky/utfbom;name=utfbom;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/dimchansky/utfbom"

SRCREV_go-colorable = "11a925cff3d38c293ddc8c05a16b504e3e2c63be"
SRC_URI += "git://github.com/mattn/go-colorable;name=go-colorable;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/mattn/go-colorable"

SRCREV_go-toml-v2 = "b730b2be5d3ab7283067ddf61188f41cdf42ce06"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/pelletier/go-toml/v2"

SRCREV_properties = "d8bdba35b511a72d4c00a47e801dc703328198e8"
SRC_URI += "git://github.com/magiconair/properties;name=properties;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/magiconair/properties"

SRCREV_orderedmap = "9d80274286972e4b495b38de2923a4d5f9758c8d"
SRC_URI += "git://github.com/elliotchance/orderedmap;name=orderedmap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/elliotchance/orderedmap"

SRCREV_v2 = "bcbb39153e17f8018257f17aba8eac628d396b64"
SRC_URI += "git://github.com/alecthomas/participle;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/alecthomas/participle/v2"

SRCREV_mousetrap = "4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor/github.com/inconshreveable/mousetrap"

PV = "4.45.1+git"

GO_IMPORT = "github.com/mikefarah/yq"

inherit go ptest

do_compile:prepend() {
    # arrange for some of the golang built ins to be found
    (
	cd ${WORKDIR}/build/src/
	ln -sf ${STAGING_DIR_TARGET}/${prefix}/lib/go/src/cmd/vendor/golang.org .

	cd ${WORKDIR}/build/
	ln -sf ${UNPACKDIR}/build/vendor .
    )

    # arrange for the fetched dependencies to be found
    export GOPATH="${GOPATH}:${WORKDIR}/build/vendor/"
    export GO111MODULE=off
}

do_install_ptest() {
    install -d ${D}${PTEST_PATH}/tests
    cp -r ${S}/src/${GO_IMPORT}/scripts/* ${D}${PTEST_PATH}/tests
    cp -r ${S}/src/${GO_IMPORT}/acceptance_tests/* ${D}${PTEST_PATH}/tests
    cp -r ${S}/src/${GO_IMPORT}/examples ${D}${PTEST_PATH}/tests
}

RDEPENDS:${PN}-ptest += " \
    bash \
"

RDEPENDS:${PN}-dev += " \
     bash \
"

BBCLASSEXTEND = "native"
