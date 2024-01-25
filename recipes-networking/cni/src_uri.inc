#       golang.org/x/net v0.17.0
# [1] git ls-remote https://go.googlesource.com/net b225e7ca6dde1ef5a5ae5ce922861bda011cfabd
SRCREV_net="b225e7ca6dde1ef5a5ae5ce922861bda011cfabd"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.14.0
# [1] git ls-remote https://go.googlesource.com/sys cb378ae1ff8cd45e69d4f172df8370bc844e1f86
SRCREV_sys="cb378ae1ff8cd45e69d4f172df8370bc844e1f86"
SRC_URI += "git://go.googlesource.com/sys;name=sys;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3="f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/yaml.v3"

#       golang.org/x/text v0.13.0
# [1] git ls-remote https://go.googlesource.com/text f488e191e67ed95a5b9b7b39024e5a5f5f1ffd02
SRCREV_text="f488e191e67ed95a5b9b7b39024e5a5f5f1ffd02"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/text"

#       golang.org/x/tools v0.14.0
# [1] git ls-remote https://go.googlesource.com/tools 3f4194ee29d7db9b59757dfff729ef55cf89661c
SRCREV_tools="3f4194ee29d7db9b59757dfff729ef55cf89661c"
SRC_URI += "git://go.googlesource.com/tools;name=tools;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/tools"

#       github.com/onsi/gomega v1.30.0
# [1] git ls-remote https://github.com/onsi/gomega f804ac6ada8d36164ecae0513295de8affce1245
SRCREV_gomega="f804ac6ada8d36164ecae0513295de8affce1245"
SRC_URI += "git://github.com/onsi/gomega;name=gomega;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/onsi/gomega"

#       github.com/go-logr/logr v1.3.0
# [1] git ls-remote https://github.com/go-logr/logr 8adefbede0fe82bdee4fb8c9c9bdc7bc5d91388f
SRCREV_logr="8adefbede0fe82bdee4fb8c9c9bdc7bc5d91388f"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-logr/logr"

#       github.com/google/pprof v0.0.0-20210407192527-94a9f03dee38
# [1] git ls-remote https://github.com/google/pprof 94a9f03dee38882adc8bdfc42cdd6a04f8e7056e
SRCREV_pprof="94a9f03dee38882adc8bdfc42cdd6a04f8e7056e"
SRC_URI += "git://github.com/google/pprof;name=pprof;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/pprof"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp="c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/go-cmp"

#       github.com/onsi/ginkgo/v2 v2.13.2
# [1] git ls-remote https://github.com/onsi/ginkgo 931dc0b144749710bd085d4eb7cd4192a22972d7
SRCREV_v2="931dc0b144749710bd085d4eb7cd4192a22972d7"
SRC_URI += "git://github.com/onsi/ginkgo;name=v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/onsi/ginkgo/v2"

#       github.com/vishvananda/netns v0.0.4
# [1] git ls-remote https://github.com/vishvananda/netns 7a452d2d15292b2bfb2a2d88e6bdeac156a761b9
SRCREV_netns="7a452d2d15292b2bfb2a2d88e6bdeac156a761b9"
SRC_URI += "git://github.com/vishvananda/netns;name=netns;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vishvananda/netns"

#       github.com/go-task/slim-sprig v0.0.0-20230315185526-52ccab3ef572
# [1] git ls-remote https://github.com/go-task/slim-sprig 52ccab3ef572c7e1a2c258be183f9a9296d60152
SRCREV_slim-sprig="52ccab3ef572c7e1a2c258be183f9a9296d60152"
SRC_URI += "git://github.com/go-task/slim-sprig;name=slim-sprig;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-task/slim-sprig"

#       github.com/Masterminds/semver/v3 v3.2.1
# [1] git ls-remote https://github.com/Masterminds/semver e06051f8fcc4c8b4a4990c337b9862a2448722e5
SRCREV_v3="e06051f8fcc4c8b4a4990c337b9862a2448722e5"
SRC_URI += "git://github.com/Masterminds/semver;name=v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Masterminds/semver/v3"

