SUMMARY = "a lightweight and portable command-line YAML processor "
HOMEPAGE = "https://github.com/mikefarah/yq"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=090d381b4b3eb93194e8cbff4aaae2de"

SRCREV_yq = "e0f5cb3c5958e57c7f250a7030e92c768c1b2b19"
SRCREV_color = "daf2830f2741ebb735b21709a520c5f37d642d85"
SRCREV_lexer = "81f720df2c51e9f1e1d387b17a0af386ed2b257d"
SRCREV_debug = "fa7b53cdfc9105c70f134574002f406232921437"
SRCREV_errors = "614d223910a179a466c1767a985424175c39b465"
SRCREV_cobra = "b97b5ead31f7d34f764ac8666e40c214bb8e06dc"
SRCREV_pflag = "6971c29c4a22981adeaee7f4b437c0cffe08c031"
SRCREV_logging = "b2cb9fa56473e98db8caba80237377e83fe44db5"
SRCREV_yaml = "eeeca48fe7764f320e4870d231902bf9c1be2c08"

SRC_URI = "git://${GO_IMPORT};name=yq \
           git://github.com/fatih/color;name=color;destsuffix=build/vendor/src/github.com/fatih/color \
           git://github.com/goccy/go-yaml;name=lexer;destsuffix=build/vendor/src/github.com/goccy/go-yaml/ \
           git://github.com/kylelemons/godebug;name=debug;destsuffix=build/vendor/src/github.com/kylelemons/godebug/ \
	   git://github.com/pkg/errors;name=errors;destsuffix=build/vendor/src/github.com/pkg/errors/ \
	   git://github.com/spf13/cobra;name=cobra;destsuffix=build/vendor/src/github.com/spf13/cobra \
	   git://github.com/spf13/pflag;name=pflag;destsuffix=build/vendor/src/github.com/spf13/pflag \
	   git://github.com/op/go-logging.git;name=logging;destsuffix=build/vendor/src/gopkg.in/op/go-logging.v1 \
	   git://github.com/go-yaml/yaml.git;name=yaml;branch=v3;destsuffix=build/vendor/src/gopkg.in/yaml.v3 \
           "

PV = "1.13.1+git${SRCREV_yq}"
GO_IMPORT = "github.com/mikefarah/yq"

inherit go

do_compile_prepend() {
    # arrange for some of the golang built ins to be found
    (
	cd ${WORKDIR}/build/src/
	ln -sf ${STAGING_DIR_TARGET}/${prefix}/lib/go/src/cmd/vendor/golang.org .
    )

    # arrange for the fetched dependencies to be found
    export GOPATH="${GOPATH}:${WORKDIR}/build/vendor/"
}


do_install_append() {
    # these bring in dependencies for the -dev package on bash, and we don't
    # need them .. so we remove them to avoid needing that rdepends
    rm -rf ${D}/${prefix}/lib/go/src/${GO_IMPORT}/debian/rules
    rm -rf ${D}/${prefix}/lib/go/src/${GO_IMPORT}/scripts
}

BBCLASSEXTEND = "native"
