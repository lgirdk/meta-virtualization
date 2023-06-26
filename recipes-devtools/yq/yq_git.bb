SUMMARY = "a lightweight and portable command-line YAML processor "
HOMEPAGE = "https://github.com/mikefarah/yq"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=e40a0dcd62f8269b9bff37fe9aa7dcc2"

SRCREV_yq = "dd6cf3df146f3e2c0f8c765a6ef9e35780ad8cc1"
SRCREV_color = "daf2830f2741ebb735b21709a520c5f37d642d85"
SRCREV_lexer = "6cdefc42e112ac71cbe316e1eed264ea62f58e25"
SRCREV_cobra = "b43be995ebb4bee335a787bd44498b91aef7619c"
SRCREV_pflag = "2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab"
SRCREV_logging = "b2cb9fa56473e98db8caba80237377e83fe44db5"
SRCREV_yaml = "f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRCREV_xerrors="65e65417b02f28de84b55f16b46a1e789149973a"
SRCREV_envsubst = "16035fe3571ad42c7796bf554f978bb2df64231b"
SRCREV_participle = "49f4822ed012d9818c80ca4fcdeb7e2d55c04806"
SRCREV_utfbom = "6ae8f945ca96f30defc7e8ab12ec5d10cf86ded4"
SRCREV_orderedmap = "1e43e194ff533a346bab5f9b66b738256f199c8a"
SRCREV_go-json = "5efc7d07eeeba186df630d9ab4ac78c761938c27"
SRCREV_copier = "d132b069fe1a77d09e4c260852b389a730bbe9ba"
SRCREV_properties = "c9a06e8f8f0164e4e16c0d5c4793cbed4ac90264"
SRCREV_net = "f3363e06e74cdc304618bf31d898b78590103527"
SRCREV_text = "434eadcdbc3b0256971992e8c70027278364c72c"
SRCREV_diff = "20ebb0f2a09e612109b224b32f79370409108bcc"

SRCREV_FORMAT = "yq_color"
SRC_URI = "git://${GO_IMPORT};name=yq;branch=master;protocol=https \
           git://github.com/fatih/color;name=color;destsuffix=build/vendor/src/github.com/fatih/color;branch=main;protocol=https \
           git://github.com/goccy/go-yaml;name=lexer;destsuffix=build/vendor/src/github.com/goccy/go-yaml/;branch=master;protocol=https \
	       git://github.com/spf13/cobra;name=cobra;nobranch=1;destsuffix=build/vendor/src/github.com/spf13/cobra;branch=main;protocol=https \
	       git://github.com/spf13/pflag;name=pflag;destsuffix=build/vendor/src/github.com/spf13/pflag;branch=master;protocol=https \
	       git://github.com/op/go-logging.git;name=logging;destsuffix=build/vendor/src/gopkg.in/op/go-logging.v1;branch=master;protocol=https \
	       git://github.com/go-yaml/yaml.git;name=yaml;branch=v3;destsuffix=build/vendor/src/gopkg.in/yaml.v3;protocol=https \
           git://github.com/golang/xerrors;name=xerrors;protocol=https;nobranch=1;destsuffix=build/vendor/src/golang.org/x/xerrors \
           git://github.com/a8m/envsubst;name=envsubst;destsuffix=build/vendor/src/github.com/a8m/envsubst;branch=master;protocol=https \
           git://github.com/alecthomas/participle;name=participle;destsuffix=build/vendor/src/github.com/alecthomas/participle;branch=master;protocol=https \
           git://github.com/dimchansky/utfbom;name=utfbom;destsuffix=build/vendor/src/github.com/dimchansky/utfbom;branch=master;protocol=https \
           git://github.com/elliotchance/orderedmap;name=orderedmap;destsuffix=build/vendor/src/github.com/elliotchance/orderedmap;branch=master;protocol=https \
           git://github.com/goccy/go-json;name=go-json;destsuffix=build/vendor/src/github.com/goccy/go-json;branch=master;protocol=https \
           git://github.com/jinzhu/copier;name=copier;destsuffix=build/vendor/src/github.com/jinzhu/copier;branch=master;protocol=https \
           git://github.com/magiconair/properties;name=properties;destsuffix=build/vendor/src/github.com/magiconair/properties;branch=main;protocol=https \
           git://github.com/golang/net;name=net;destsuffix=build/vendor/src/golang.org/x/net;branch=master;protocol=https \
           git://github.com/golang/text;name=text;destsuffix=build/vendor/src/golang.org/x/text;branch=master;protocol=https \
           git://github.com/pkg/diff;name=diff;destsuffix=build/vendor/src/github.com/pkg/diff;branch=main;protocol=https \
           file://run-ptest \
           "

PV = "4.30.8+git${SRCREV_yq}"
GO_IMPORT = "github.com/mikefarah/yq"

inherit go ptest

do_compile:prepend() {
    # arrange for some of the golang built ins to be found
    (
	cd ${WORKDIR}/build/src/
	ln -sf ${STAGING_DIR_TARGET}/${prefix}/lib/go/src/cmd/vendor/golang.org .
    )

    # arrange for the fetched dependencies to be found
    export GOPATH="${GOPATH}:${WORKDIR}/build/vendor/"
    export GO111MODULE=off
}

do_install:append() {
    # these bring in dependencies for the -dev package on bash, and we don't
    # need them .. so we remove them to avoid needing that rdepends
    rm -rf ${D}/${libdir}/go/src/${GO_IMPORT}/debian/rules
    rm -rf ${D}/${libdir}/go/src/${GO_IMPORT}/scripts
    rm -rf ${D}/${libdir}/go/src/${GO_IMPORT}/acceptance_tests
}

do_install_ptest() {
    install -d ${D}${PTEST_PATH}/tests
    cp -r ${S}/src/github.com/mikefarah/yq/scripts/* ${D}${PTEST_PATH}/tests
    cp -r ${S}/src/github.com/mikefarah/yq/acceptance_tests/* ${D}${PTEST_PATH}/tests
    cp -r ${S}/src/github.com/mikefarah/yq/examples ${D}${PTEST_PATH}/tests
}

RDEPENDS:${PN}-ptest += " \
    bash \
"

BBCLASSEXTEND = "native"
