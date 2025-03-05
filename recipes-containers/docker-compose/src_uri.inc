#       k8s.io/api v0.31.2
# [1] git ls-remote https://github.com/kubernetes/api bc73ef70e18b6e2f1146ca60c99df5955bec647e
SRCREV_k8s.io-api="bc73ef70e18b6e2f1146ca60c99df5955bec647e"
SRC_URI += "git://github.com/kubernetes/api;name=k8s.io-api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/api"

#       k8s.io/utils v0.0.0-20240711033017-18e509b52bc8
# [1] git ls-remote https://github.com/kubernetes/utils 18e509b52bc851d6169db17631e99453021dea21
SRCREV_utils="18e509b52bc851d6169db17631e99453021dea21"
SRC_URI += "git://github.com/kubernetes/utils;name=utils;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/utils"

#       k8s.io/klog/v2 v2.130.1
# [1] git ls-remote https://github.com/kubernetes/klog 75663bb798999a49e3e4c0f2375ed5cca8164194
SRCREV_klog-v2="75663bb798999a49e3e4c0f2375ed5cca8164194"
SRC_URI += "git://github.com/kubernetes/klog;name=klog-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/klog/v2"

#       gotest.tools/v3 v3.5.2
# [1] git ls-remote https://github.com/gotestyourself/gotest.tools 0b81523ff268a1f1b0baf4a5da67e42fbb86880b
SRCREV_v3="0b81523ff268a1f1b0baf4a5da67e42fbb86880b"
SRC_URI += "git://github.com/gotestyourself/gotest.tools;name=v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gotest.tools/v3"

#       dario.cat/mergo v1.0.1
# [1] git ls-remote https://github.com/imdario/mergo 59ea6a9cd9f9c60cb6b1c58476f76cd3172ccebf
SRCREV_mergo="59ea6a9cd9f9c60cb6b1c58476f76cd3172ccebf"
SRC_URI += "git://github.com/imdario/mergo;name=mergo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/dario.cat/mergo"

#       gopkg.in/inf.v0 v0.9.1
# [1] git ls-remote https://github.com/go-inf/inf d2d2541c53f18d2a059457998ce2876cc8e67cbf
SRCREV_inf.v0="d2d2541c53f18d2a059457998ce2876cc8e67cbf"
SRC_URI += "git://github.com/go-inf/inf;name=inf.v0;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/inf.v0"

#       go.uber.org/mock v0.5.0
# [1] git ls-remote https://github.com/uber/mock a9c44d91ce00ef09603d3822452a4f9c8fefd278
SRCREV_mock="a9c44d91ce00ef09603d3822452a4f9c8fefd278"
SRC_URI += "git://github.com/uber/mock;name=mock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/mock"

#       golang.org/x/exp v0.0.0-20241108190413-2d47ceb2692f
# [1] git ls-remote https://go.googlesource.com/exp 2d47ceb2692f22136c9ff680c192d3d19c5dd9e2
SRCREV_exp="2d47ceb2692f22136c9ff680c192d3d19c5dd9e2"
SRC_URI += "git://go.googlesource.com/exp;name=exp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/exp"

#       golang.org/x/sys v0.30.0
# [1] git ls-remote https://github.com/golang/sys 863b3c4ac4975ff758815fa8d01acb6771f37177
SRCREV_sys="863b3c4ac4975ff758815fa8d01acb6771f37177"
SRC_URI += "git://github.com/golang/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3="f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v3"

#       golang.org/x/net v0.33.0
# [1] git ls-remote https://go.googlesource.com/net dfc720dfe0cfc125116068c20efcdcb5e4eab464
SRCREV_net="dfc720dfe0cfc125116068c20efcdcb5e4eab464"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       gopkg.in/yaml.v2 v2.4.0
# [1] git ls-remote https://github.com/go-yaml/yaml 7649d4548cb53a614db133b2a8ac1f31859dda8c
SRCREV_yaml.v2="7649d4548cb53a614db133b2a8ac1f31859dda8c"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v2"

#       k8s.io/client-go v0.31.2
# [1] git ls-remote https://github.com/kubernetes/client-go 270e5ab1714527c455865953da8ceba2810dbb50
SRCREV_client-go="270e5ab1714527c455865953da8ceba2810dbb50"
SRC_URI += "git://github.com/kubernetes/client-go;name=client-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/client-go"

#       sigs.k8s.io/json v0.0.0-20221116044647-bc3834ca7abd
# [1] git ls-remote https://github.com/kubernetes-sigs/json bc3834ca7abd3a90f03ef00a27ad80cb892f9c21
SRCREV_json="bc3834ca7abd3a90f03ef00a27ad80cb892f9c21"
SRC_URI += "git://github.com/kubernetes-sigs/json;name=json;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/json"

#       sigs.k8s.io/yaml v1.4.0
# [1] git ls-remote https://github.com/kubernetes-sigs/yaml c3772b51db126345efe2dfe4ff8dac83b8141684
SRCREV_yaml="c3772b51db126345efe2dfe4ff8dac83b8141684"
SRC_URI += "git://github.com/kubernetes-sigs/yaml;name=yaml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/yaml"

#       golang.org/x/sync v0.11.0
# [1] git ls-remote https://go.googlesource.com/sync fe3591bd8a96873abc98bb9d2d5c62f27efca3e9
SRCREV_sync="fe3591bd8a96873abc98bb9d2d5c62f27efca3e9"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sync"

#       golang.org/x/term v0.27.0
# [1] git ls-remote https://go.googlesource.com/term 442846aa8d80ebae61e0c2c58e041b92b9b33dc4
SRCREV_x-term="442846aa8d80ebae61e0c2c58e041b92b9b33dc4"
SRC_URI += "git://go.googlesource.com/term;name=x-term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/term"

#       golang.org/x/text v0.21.0
# [1] git ls-remote https://go.googlesource.com/text d42948e5579eb996bedb7df76c7ad57fae4e83c7
SRCREV_text="d42948e5579eb996bedb7df76c7ad57fae4e83c7"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/text"

#       golang.org/x/time v0.6.0
# [1] git ls-remote https://go.googlesource.com/time 5d9ef583af632a0fcf95276fb38326f695c4fd5f
SRCREV_time="5d9ef583af632a0fcf95276fb38326f695c4fd5f"
SRC_URI += "git://go.googlesource.com/time;name=time;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/time"

#       go.uber.org/goleak v1.3.0
# [1] git ls-remote https://github.com/uber-go/goleak 31095c657c34bba405a8d480db27989aa5f60b9c
SRCREV_goleak="31095c657c34bba405a8d480db27989aa5f60b9c"
SRC_URI += "git://github.com/uber-go/goleak;name=goleak;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/goleak"

#       golang.org/x/crypto v0.31.0
# [1] git ls-remote https://go.googlesource.com/crypto b4f1988a35dee11ec3e05d6bf3e90b695fbd8909
SRCREV_crypto="b4f1988a35dee11ec3e05d6bf3e90b695fbd8909"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/crypto"

#       golang.org/x/oauth2 v0.24.0
# [1] git ls-remote https://go.googlesource.com/oauth2 22134a41033e44c2cd074106770ab5b7ca910d15
SRCREV_oauth2="22134a41033e44c2cd074106770ab5b7ca910d15"
SRC_URI += "git://go.googlesource.com/oauth2;name=oauth2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/oauth2"

#       k8s.io/apimachinery v0.31.2
# [1] git ls-remote https://github.com/kubernetes/apimachinery a8f449e276fe566efddb149992049c78f0088492
SRCREV_apimachinery="a8f449e276fe566efddb149992049c78f0088492"
SRC_URI += "git://github.com/kubernetes/apimachinery;name=apimachinery;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/apimachinery"

#       k8s.io/kube-openapi v0.0.0-20240228011516-70dd3763d340
# [1] git ls-remote https://github.com/kubernetes/kube-openapi 70dd3763d340b13ccc008be05cb1f59ff245dbfd
SRCREV_kube-openapi="70dd3763d340b13ccc008be05cb1f59ff245dbfd"
SRC_URI += "git://github.com/kubernetes/kube-openapi;name=kube-openapi;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/kube-openapi"

#       github.com/moby/term v0.5.2
# [1] git ls-remote https://github.com/moby/term 6c1b69fecbac2753dcaf18718a7e9f9093c3760d
SRCREV_term="6c1b69fecbac2753dcaf18718a7e9f9093c3760d"
SRC_URI += "git://github.com/moby/term;name=term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/term"

#       github.com/docker/go v1.5.1-1.0.20160303222718-d30aec9fd63c
# [1] git ls-remote https://github.com/docker/go d30aec9fd63c35133f8f79c3412ad91a3b08be06
SRCREV_go="d30aec9fd63c35133f8f79c3412ad91a3b08be06"
SRC_URI += "git://github.com/docker/go;name=go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go"

#       github.com/docker/cli v28.0.1+incompatible
# [1] git ls-remote https://github.com/docker/cli 068a01ea9470df6494cc92d9e64e240805ae47a7
SRCREV_cli="068a01ea9470df6494cc92d9e64e240805ae47a7"
SRC_URI += "git://github.com/docker/cli;name=cli;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/cli"

#       github.com/r3labs/sse v0.0.0-20210224172625-26fe804710bc
# [1] git ls-remote https://github.com/r3labs/sse 26fe804710bc39ea7ea6636d36f27c438bd2c06f
SRCREV_sse="26fe804710bc39ea7ea6636d36f27c438bd2c06f"
SRC_URI += "git://github.com/r3labs/sse;name=sse;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/r3labs/sse"

#       github.com/mgutz/ansi v0.0.0-20170206155736-9520e82c474b
# [1] git ls-remote https://github.com/mgutz/ansi 9520e82c474b0a04dd04f8a40959027271bab992
SRCREV_ansi="9520e82c474b0a04dd04f8a40959027271bab992"
SRC_URI += "git://github.com/mgutz/ansi;name=ansi;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mgutz/ansi"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors="614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pkg/errors"

#       github.com/spf13/cobra v1.9.1
# [1] git ls-remote https://github.com/spf13/cobra 40b5bc1437a564fc795d388b23835e84f54cd1d1
SRCREV_cobra="40b5bc1437a564fc795d388b23835e84f54cd1d1"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/cobra"

#       github.com/spf13/pflag v1.0.6
# [1] git ls-remote https://github.com/spf13/pflag 5ca813443bd2a4d9f46a253ea0407d23b3790713
SRCREV_pflag="5ca813443bd2a4d9f46a253ea0407d23b3790713"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/pflag"

#       google.golang.org/grpc v1.70.0
# [1] git ls-remote https://github.com/grpc/grpc-go 98a0092952dd4d8443229c3a335ec592d9c40c9b
SRCREV_grpc="98a0092952dd4d8443229c3a335ec592d9c40c9b"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/grpc"

#       github.com/gofrs/flock v0.12.1
# [1] git ls-remote https://github.com/gofrs/flock 9de625d921bf362f81e0760056fdff11c8542435
SRCREV_flock="9de625d921bf362f81e0760056fdff11c8542435"
SRC_URI += "git://github.com/gofrs/flock;name=flock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gofrs/flock"

#       github.com/google/uuid v1.6.0
# [1] git ls-remote https://github.com/google/uuid 0f11ee6918f41a04c201eceeadf612a377bc7fbc
SRCREV_uuid="0f11ee6918f41a04c201eceeadf612a377bc7fbc"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/uuid"

#       github.com/gorilla/mux v1.8.1
# [1] git ls-remote https://github.com/gorilla/mux b4617d0b9670ad14039b2739167fd35a60f557c5
SRCREV_mux="b4617d0b9670ad14039b2739167fd35a60f557c5"
SRC_URI += "git://github.com/gorilla/mux;name=mux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/mux"

#       github.com/moby/locker v1.0.1
# [1] git ls-remote https://github.com/moby/locker 281af2d563954745bea9d1487c965f24d30742fe
SRCREV_locker="281af2d563954745bea9d1487c965f24d30742fe"
SRC_URI += "git://github.com/moby/locker;name=locker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/locker"

#       github.com/rivo/uniseg v0.2.0
# [1] git ls-remote https://github.com/rivo/uniseg 75711fccf6a3e85bc74c241e2dddd06a9bc9e53d
SRCREV_uniseg="75711fccf6a3e85bc74c241e2dddd06a9bc9e53d"
SRC_URI += "git://github.com/rivo/uniseg;name=uniseg;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rivo/uniseg"

#       github.com/buger/goterm v1.0.4
# [1] git ls-remote https://github.com/buger/goterm a73545aae7d693f786ce4cc687460efca4845f31
SRCREV_goterm="a73545aae7d693f786ce4cc687460efca4845f31"
SRC_URI += "git://github.com/buger/goterm;name=goterm;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/buger/goterm"

#       github.com/morikuni/aec v1.0.0
# [1] git ls-remote https://github.com/morikuni/aec 39771216ff4c63d11f5e604076f9c45e8be1067b
SRCREV_aec="39771216ff4c63d11f5e604076f9c45e8be1067b"
SRC_URI += "git://github.com/morikuni/aec;name=aec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/morikuni/aec"

#       github.com/otiai10/copy v1.14.1
# [1] git ls-remote https://github.com/otiai10/copy 5ef5923d6ff098ea7a51792c1ec963d04fad9794
SRCREV_copy="5ef5923d6ff098ea7a51792c1ec963d04fad9794"
SRC_URI += "git://github.com/otiai10/copy;name=copy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/otiai10/copy"

#       github.com/beorn7/perks v1.0.1
# [1] git ls-remote https://github.com/beorn7/perks 37c8de3658fcb183f997c4e13e8337516ab753e6
SRCREV_perks="37c8de3658fcb183f997c4e13e8337516ab753e6"
SRC_URI += "git://github.com/beorn7/perks;name=perks;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/beorn7/perks"

#       github.com/go-logr/logr v1.4.2
# [1] git ls-remote https://github.com/go-logr/logr 1205f429d540b8b81c2b75a38943afb738dac223
SRCREV_logr="1205f429d540b8b81c2b75a38943afb738dac223"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/logr"

#       github.com/go-logr/stdr v1.2.2
# [1] git ls-remote https://github.com/go-logr/stdr 521af2addfa7c81c8a65d0e85ed34bb6bb6dc262
SRCREV_stdr="521af2addfa7c81c8a65d0e85ed34bb6bb6dc262"
SRC_URI += "git://github.com/go-logr/stdr;name=stdr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/stdr"

#       github.com/google/shlex v0.0.0-20191202100458-e7afc7fbc510
# [1] git ls-remote https://github.com/google/shlex e7afc7fbc51079733e9468cdfd1efcd7d196cd1d
SRCREV_shlex="e7afc7fbc51079733e9468cdfd1efcd7d196cd1d"
SRC_URI += "git://github.com/google/shlex;name=shlex;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/shlex"

#       github.com/miekg/pkcs11 v1.1.1
# [1] git ls-remote https://github.com/miekg/pkcs11 f3481918a208bd212aa995a41f92d786eb418a7d
SRCREV_pkcs11="f3481918a208bd212aa995a41f92d786eb418a7d"
SRC_URI += "git://github.com/miekg/pkcs11;name=pkcs11;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/miekg/pkcs11"

#       github.com/otiai10/mint v1.6.3
# [1] git ls-remote https://github.com/otiai10/mint 6dcf2e3a67310fd0fbd970199f187f5c575756c9
SRCREV_mint="6dcf2e3a67310fd0fbd970199f187f5c575756c9"
SRC_URI += "git://github.com/otiai10/mint;name=mint;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/otiai10/mint"

#       github.com/x448/float16 v0.8.4
# [1] git ls-remote https://github.com/x448/float16 cb9afec31f2649663ebb64da5c6c32c3d365c3ca
SRCREV_float16="cb9afec31f2649663ebb64da5c6c32c3d365c3ca"
SRC_URI += "git://github.com/x448/float16;name=float16;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/x448/float16"

#       github.com/docker/buildx v0.21.2
# [1] git ls-remote https://github.com/docker/buildx 1360a9e8d25a2c3d03c2776d53ae62e6ff0a843d
SRCREV_buildx="1360a9e8d25a2c3d03c2776d53ae62e6ff0a843d"
SRC_URI += "git://github.com/docker/buildx;name=buildx;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/buildx"

#       github.com/docker/docker v28.0.1+incompatible
# [1] git ls-remote https://github.com/moby/moby bbd0a17ccc67e48d4a69393287b7fcc4f0578683
SRCREV_docker="bbd0a17ccc67e48d4a69393287b7fcc4f0578683"
SRC_URI += "git://github.com/moby/moby;name=docker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker"

#       github.com/google/go-cmp v0.7.0
# [1] git ls-remote https://github.com/google/go-cmp 9b12f366a942ebc7254abc7f32ca05068b455fb7
SRCREV_go-cmp="9b12f366a942ebc7254abc7f32ca05068b455fb7"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-cmp"

#       github.com/moby/buildkit v0.20.0
# [1] git ls-remote https://github.com/moby/buildkit 121ecd5b9083b8eef32183cd404dd13e15b4a3df
SRCREV_buildkit="121ecd5b9083b8eef32183cd404dd13e15b4a3df"
SRC_URI += "git://github.com/moby/buildkit;name=buildkit;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/buildkit"

#       go.opentelemetry.io/otel v1.32.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 7cfbd86a605c85e598eca9a899f6176b17076f4f
SRCREV_otel="7cfbd86a605c85e598eca9a899f6176b17076f4f"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel"

#       github.com/aws/smithy-go v1.20.3
# [1] git ls-remote https://github.com/aws/smithy-go 07bbd001753f9633a614f6c0949d3d73142433d0
SRCREV_smithy-go="07bbd001753f9633a614f6c0949d3d73142433d0"
SRC_URI += "git://github.com/aws/smithy-go;name=smithy-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/smithy-go"

#       github.com/gogo/protobuf v1.3.2
# [1] git ls-remote https://github.com/gogo/protobuf b03c65ea87cdc3521ede29f62fe3ce239267c1bc
SRCREV_protobuf="b03c65ea87cdc3521ede29f62fe3ce239267c1bc"
SRC_URI += "git://github.com/gogo/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gogo/protobuf"

#       github.com/google/gofuzz v1.2.0
# [1] git ls-remote https://github.com/google/gofuzz 379e164120fbc98885a8f494b5aa41ba94f64c56
SRCREV_gofuzz="379e164120fbc98885a8f494b5aa41ba94f64c56"
SRC_URI += "git://github.com/google/gofuzz;name=gofuzz;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/gofuzz"

#       github.com/imdario/mergo v0.3.16
# [1] git ls-remote https://github.com/darccio/mergo 14fe2b165b83359196f820886a2b24f2771729e9
SRCREV_imdario-mergo="14fe2b165b83359196f820886a2b24f2771729e9"
SRC_URI += "git://github.com/darccio/mergo;name=imdario-mergo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/imdario/mergo"

#       github.com/moby/sys/user v0.3.0
# [1] git ls-remote https://github.com/moby/sys 54475191138bd297c627eb1a59e1e54b953957f1
SRCREV_user="54475191138bd297c627eb1a59e1e54b953957f1"
SRC_URI += "git://github.com/moby/sys;name=user;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/user"

#       github.com/containerd/log v0.1.0
# [1] git ls-remote https://github.com/containerd/log 0fc1e28871fdf2786e2cc51bbe4133db6547a199
SRCREV_log="0fc1e28871fdf2786e2cc51bbe4133db6547a199"
SRC_URI += "git://github.com/containerd/log;name=log;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/log"

#       github.com/zclconf/go-cty v1.16.0
# [1] git ls-remote https://github.com/zclconf/go-cty 6e06defc5f817971ab942989ad06752e13446c9c
SRCREV_go-cty="6e06defc5f817971ab942989ad06752e13446c9c"
SRC_URI += "git://github.com/zclconf/go-cty;name=go-cty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/zclconf/go-cty"

#       github.com/davecgh/go-spew v1.1.2-0.20180830191138-d8f796af33cc
# [1] git ls-remote https://github.com/davecgh/go-spew d8f796af33cc11cb798c1aaeb27a4ebc5099927d
SRCREV_go-spew="d8f796af33cc11cb798c1aaeb27a4ebc5099927d"
SRC_URI += "git://github.com/davecgh/go-spew;name=go-spew;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/davecgh/go-spew"

#       github.com/docker/go-units v0.5.0
# [1] git ls-remote https://github.com/docker/go-units e682442797b36348f8e1f98defdbf32bac0b6c6f
SRCREV_go-units="e682442797b36348f8e1f98defdbf32bac0b6c6f"
SRC_URI += "git://github.com/docker/go-units;name=go-units;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-units"

#       github.com/mitchellh/go-ps v1.0.0
# [1] git ls-remote https://github.com/mitchellh/go-ps 147ff83818ae939913b2e20b91ae3cd6c391771c
SRCREV_go-ps="147ff83818ae939913b2e20b91ae3cd6c391771c"
SRC_URI += "git://github.com/mitchellh/go-ps;name=go-ps;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/go-ps"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus="d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/sirupsen/logrus"

#       github.com/go-openapi/swag v0.22.4
# [1] git ls-remote https://github.com/go-openapi/swag f28dd7aae5534e2e3681204c90019f1dda8a7393
SRCREV_swag="f28dd7aae5534e2e3681204c90019f1dda8a7393"
SRC_URI += "git://github.com/go-openapi/swag;name=swag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-openapi/swag"

#       github.com/golang/protobuf v1.5.4
# [1] git ls-remote https://github.com/golang/protobuf 75de7c059e36b64f01d0dd234ff2fff404ec3374
SRCREV_golang-protobuf="75de7c059e36b64f01d0dd234ff2fff404ec3374"
SRC_URI += "git://github.com/golang/protobuf;name=golang-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/protobuf"

#       github.com/mailru/easyjson v0.7.7
# [1] git ls-remote https://github.com/mailru/easyjson c120ca7ced6051261161ce15e8f1542a4b2567fc
SRCREV_easyjson="c120ca7ced6051261161ce15e8f1542a4b2567fc"
SRC_URI += "git://github.com/mailru/easyjson;name=easyjson;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mailru/easyjson"

#       github.com/mattn/go-isatty v0.0.17
# [1] git ls-remote https://github.com/mattn/go-isatty ed75e619dc0f0489fd4062163a7d061eaa249b9c
SRCREV_go-isatty="ed75e619dc0f0489fd4062163a7d061eaa249b9c"
SRC_URI += "git://github.com/mattn/go-isatty;name=go-isatty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-isatty"

#       github.com/moby/spdystream v0.4.0
# [1] git ls-remote https://github.com/moby/spdystream 258380da5f17ec2c26272bcb91a61d592fcb0105
SRCREV_spdystream="258380da5f17ec2c26272bcb91a61d592fcb0105"
SRC_URI += "git://github.com/moby/spdystream;name=spdystream;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/spdystream"

#       github.com/moby/sys/signal v0.7.1
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_signal="cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=signal;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/signal"

#       github.com/moby/sys/userns v0.1.0
# [1] git ls-remote https://github.com/moby/sys 54475191138bd297c627eb1a59e1e54b953957f1
SRCREV_userns="54475191138bd297c627eb1a59e1e54b953957f1"
SRC_URI += "git://github.com/moby/sys;name=userns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/userns"

#       github.com/mxk/go-flowrate v0.0.0-20140419014527-cca7078d478f
# [1] git ls-remote https://github.com/mxk/go-flowrate cca7078d478f8520f85629ad7c68962d31ed7682
SRCREV_go-flowrate="cca7078d478f8520f85629ad7c68962d31ed7682"
SRC_URI += "git://github.com/mxk/go-flowrate;name=go-flowrate;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mxk/go-flowrate"

#       google.golang.org/protobuf v1.35.2
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go c72053a9062dd4bc86a75c21f5d8134136ccbf2e
SRCREV_google.golang.org-protobuf="c72053a9062dd4bc86a75c21f5d8134136ccbf2e"
SRC_URI += "git://github.com/protocolbuffers/protobuf-go;name=google.golang.org-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/protobuf"

#       github.com/stretchr/testify v1.10.0
# [1] git ls-remote https://github.com/stretchr/testify 89cbdd9e7b39eb58896d316a7495597d3aba4371
SRCREV_testify="89cbdd9e7b39eb58896d316a7495597d3aba4371"
SRC_URI += "git://github.com/stretchr/testify;name=testify;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stretchr/testify"

#       github.com/containerd/ttrpc v1.2.7
# [1] git ls-remote https://github.com/containerd/ttrpc 3b8c8b75577584e412043afb7b561193a4a47d2e
SRCREV_ttrpc="3b8c8b75577584e412043afb7b561193a4a47d2e"
SRC_URI += "git://github.com/containerd/ttrpc;name=ttrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/ttrpc"

#       github.com/josharian/intern v1.0.0
# [1] git ls-remote https://github.com/josharian/intern 8e6ff32b3e7c0b018c43953085fe2ac330fe9acd
SRCREV_intern="8e6ff32b3e7c0b018c43953085fe2ac330fe9acd"
SRC_URI += "git://github.com/josharian/intern;name=intern;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/josharian/intern"

#       github.com/json-iterator/go v1.1.12
# [1] git ls-remote https://github.com/json-iterator/go 024077e996b048517130b21ea6bf12aa23055d3d
SRCREV_json-iterator-go="024077e996b048517130b21ea6bf12aa23055d3d"
SRC_URI += "git://github.com/json-iterator/go;name=json-iterator-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/json-iterator/go"

#       github.com/moby/sys/symlink v0.3.0
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_symlink="cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=symlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/symlink"

#       github.com/serialx/hashring v0.0.0-20200727003509-22c0c7ab6b1b
# [1] git ls-remote https://github.com/serialx/hashring 22c0c7ab6b1be4be7b950bae8b117767da7b18b6
SRCREV_hashring="22c0c7ab6b1be4be7b950bae8b117767da7b18b6"
SRC_URI += "git://github.com/serialx/hashring;name=hashring;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/serialx/hashring"

#       github.com/tonistiigi/units v0.0.0-20180711220420-6950e57a87ea
# [1] git ls-remote https://github.com/tonistiigi/units 6950e57a87eaf136bbe44ef2ec8e75b9e3569de2
SRCREV_units="6950e57a87eaf136bbe44ef2ec8e75b9e3569de2"
SRC_URI += "git://github.com/tonistiigi/units;name=units;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tonistiigi/units"

#       github.com/tonistiigi/vt100 v0.0.0-20240514184818-90bafcd6abab
# [1] git ls-remote https://github.com/tonistiigi/vt100 90bafcd6abab5dc87970f00165ee2022806709fd
SRCREV_vt100="90bafcd6abab5dc87970f00165ee2022806709fd"
SRC_URI += "git://github.com/tonistiigi/vt100;name=vt100;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tonistiigi/vt100"

#       github.com/eiannone/keyboard v0.0.0-20220611211555-0d226195f203
# [1] git ls-remote https://github.com/eiannone/keyboard 0d226195f2038e282bb90d2e24f7f29aa7c5b210
SRCREV_keyboard="0d226195f2038e282bb90d2e24f7f29aa7c5b210"
SRC_URI += "git://github.com/eiannone/keyboard;name=keyboard;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/eiannone/keyboard"

#       github.com/fsnotify/fsevents v0.2.0
# [1] git ls-remote https://github.com/fsnotify/fsevents f73112e4ef0540a922ff546752e95a70fb8f035d
SRCREV_fsevents="f73112e4ef0540a922ff546752e95a70fb8f035d"
SRC_URI += "git://github.com/fsnotify/fsevents;name=fsevents;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fsnotify/fsevents"

#       github.com/tilt-dev/fsnotify v1.4.8-0.20220602155310-fff9c274a375
# [1] git ls-remote https://github.com/tilt-dev/fsnotify fff9c274a375301ae46812f257aa68393790c45b
SRCREV_fsnotify="fff9c274a375301ae46812f257aa68393790c45b"
SRC_URI += "git://github.com/tilt-dev/fsnotify;name=fsnotify;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tilt-dev/fsnotify"

#       go.opentelemetry.io/otel/sdk v1.32.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 7cfbd86a605c85e598eca9a899f6176b17076f4f
SRCREV_sdk="7cfbd86a605c85e598eca9a899f6176b17076f4f"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=sdk;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/sdk"

#       github.com/Azure/go-ansiterm v0.0.0-20250102033503-faa5f7b0171c
# [1] git ls-remote https://github.com/Azure/go-ansiterm faa5f7b0171c46bb398a91b4a0c906324d3664cf
SRCREV_go-ansiterm="faa5f7b0171c46bb398a91b4a0c906324d3664cf"
SRC_URI += "git://github.com/Azure/go-ansiterm;name=go-ansiterm;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Azure/go-ansiterm"

#       github.com/aws/aws-sdk-go-v2 v1.30.3
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 0599931efcf551dc63f84ec669d7fb5cfe14f64c
SRCREV_aws-sdk-go-v2="0599931efcf551dc63f84ec669d7fb5cfe14f64c"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=aws-sdk-go-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2"

#       github.com/cespare/xxhash/v2 v2.3.0
# [1] git ls-remote https://github.com/cespare/xxhash 998dce232f17418a7a5721ecf87ca714025a3243
SRCREV_xxhash-v2="998dce232f17418a7a5721ecf87ca714025a3243"
SRC_URI += "git://github.com/cespare/xxhash;name=xxhash-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cespare/xxhash/v2"

#       github.com/docker/go-metrics v0.0.1
# [1] git ls-remote https://github.com/docker/go-metrics b619b3592b65de4f087d9f16863a7e6ff905973c
SRCREV_go-metrics="b619b3592b65de4f087d9f16863a7e6ff905973c"
SRC_URI += "git://github.com/docker/go-metrics;name=go-metrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-metrics"

#       github.com/felixge/httpsnoop v1.0.4
# [1] git ls-remote https://github.com/felixge/httpsnoop c5817c27ec125409c069052fdd171023c353501c
SRCREV_httpsnoop="c5817c27ec125409c069052fdd171023c353501c"
SRC_URI += "git://github.com/felixge/httpsnoop;name=httpsnoop;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/felixge/httpsnoop"

#       github.com/fxamacker/cbor/v2 v2.7.0
# [1] git ls-remote https://github.com/fxamacker/cbor 02b69dbb52f4ecf450b3aa5e9a04b7a0b4bf409a
SRCREV_cbor-v2="02b69dbb52f4ecf450b3aa5e9a04b7a0b4bf409a"
SRC_URI += "git://github.com/fxamacker/cbor;name=cbor-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fxamacker/cbor/v2"

#       github.com/gorilla/websocket v1.5.0
# [1] git ls-remote https://github.com/gorilla/websocket 9111bb834a68b893cebbbaed5060bdbc1d9ab7d2
SRCREV_websocket="9111bb834a68b893cebbbaed5060bdbc1d9ab7d2"
SRC_URI += "git://github.com/gorilla/websocket;name=websocket;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/websocket"

#       github.com/hashicorp/errwrap v1.1.0
# [1] git ls-remote https://github.com/hashicorp/errwrap 7b00e5db719c64d14dd0caaacbd13e76254d02c0
SRCREV_errwrap="7b00e5db719c64d14dd0caaacbd13e76254d02c0"
SRC_URI += "git://github.com/hashicorp/errwrap;name=errwrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/errwrap"

#       github.com/munnerz/goautoneg v0.0.0-20191010083416-a7dc8b61c822
# [1] git ls-remote https://github.com/munnerz/goautoneg a7dc8b61c822528f973a5e4e7b272055c6fdb43e
SRCREV_goautoneg="a7dc8b61c822528f973a5e4e7b272055c6fdb43e"
SRC_URI += "git://github.com/munnerz/goautoneg;name=goautoneg;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/munnerz/goautoneg"

#       github.com/pelletier/go-toml v1.9.5
# [1] git ls-remote https://github.com/pelletier/go-toml fed1464066413075eac02cd4dc368b5221845541
SRCREV_go-toml="fed1464066413075eac02cd4dc368b5221845541"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pelletier/go-toml"

#       github.com/prometheus/common v0.55.0
# [1] git ls-remote https://github.com/prometheus/common 0c7b585c7da330aae136aaa874cb4f89f5b3e5d9
SRCREV_common="0c7b585c7da330aae136aaa874cb4f89f5b3e5d9"
SRC_URI += "git://github.com/prometheus/common;name=common;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/common"

#       github.com/prometheus/procfs v0.15.1
# [1] git ls-remote https://github.com/prometheus/procfs 51919fd4b9d0aaca69854ac81bdeda5f96dab366
SRCREV_procfs="51919fd4b9d0aaca69854ac81bdeda5f96dab366"
SRC_URI += "git://github.com/prometheus/procfs;name=procfs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/procfs"

#       github.com/tonistiigi/fsutil v0.0.0-20250113203817-b14e27f4135a
# [1] git ls-remote https://github.com/tonistiigi/fsutil b14e27f4135ab262f0252f9f0e8749fd7ba3680f
SRCREV_fsutil="b14e27f4135ab262f0252f9f0e8749fd7ba3680f"
SRC_URI += "git://github.com/tonistiigi/fsutil;name=fsutil;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tonistiigi/fsutil"

#       gopkg.in/cenkalti/backoff.v1 v1.1.0
# [1] git ls-remote https://github.com/cenkalti/backoff 61153c768f31ee5f130071d08fc82b85208528de
SRCREV_backoff.v1="61153c768f31ee5f130071d08fc82b85208528de"
SRC_URI += "git://github.com/cenkalti/backoff;name=backoff.v1;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/cenkalti/backoff.v1"

#       github.com/Microsoft/go-winio v0.6.2
# [1] git ls-remote https://github.com/microsoft/go-winio 3c9576c9346a1892dee136329e7e15309e82fb4f
SRCREV_go-winio="3c9576c9346a1892dee136329e7e15309e82fb4f"
SRC_URI += "git://github.com/microsoft/go-winio;name=go-winio;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/go-winio"

#       github.com/acarl005/stripansi v0.0.0-20180116102854-5a71ef0e047d
# [1] git ls-remote https://github.com/acarl005/stripansi 5a71ef0e047df0427e87a79f27009029921f1f9b
SRCREV_stripansi="5a71ef0e047df0427e87a79f27009029921f1f9b"
SRC_URI += "git://github.com/acarl005/stripansi;name=stripansi;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/acarl005/stripansi"

#       github.com/containerd/console v1.0.4
# [1] git ls-remote https://github.com/containerd/console 8f6c4e4faef5a326d2cd907097d04c0239ee5e2f
SRCREV_console="8f6c4e4faef5a326d2cd907097d04c0239ee5e2f"
SRC_URI += "git://github.com/containerd/console;name=console;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/console"

#       github.com/containerd/errdefs v1.0.0
# [1] git ls-remote https://github.com/containerd/errdefs 4817405e4a3caeb7aee9dac68ed55339c59cb635
SRCREV_errdefs="4817405e4a3caeb7aee9dac68ed55339c59cb635"
SRC_URI += "git://github.com/containerd/errdefs;name=errdefs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/errdefs"

#       github.com/fvbommel/sortorder v1.1.0
# [1] git ls-remote https://github.com/fvbommel/sortorder a8d9302c17f9f46c6580b82b919672e58ef6e396
SRCREV_sortorder="a8d9302c17f9f46c6580b82b919672e58ef6e396"
SRC_URI += "git://github.com/fvbommel/sortorder;name=sortorder;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fvbommel/sortorder"

#       github.com/klauspost/compress v1.17.11
# [1] git ls-remote https://github.com/klauspost/compress 72cd4a92a8b13e722763e6b6a3467163c2028d3d
SRCREV_compress="72cd4a92a8b13e722763e6b6a3467163c2028d3d"
SRC_URI += "git://github.com/klauspost/compress;name=compress;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/klauspost/compress"

#       github.com/mattn/go-colorable v0.1.13
# [1] git ls-remote https://github.com/mattn/go-colorable 11a925cff3d38c293ddc8c05a16b504e3e2c63be
SRCREV_go-colorable="11a925cff3d38c293ddc8c05a16b504e3e2c63be"
SRC_URI += "git://github.com/mattn/go-colorable;name=go-colorable;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-colorable"

#       github.com/mattn/go-runewidth v0.0.15
# [1] git ls-remote https://github.com/mattn/go-runewidth 44b7c5b4d67df8ca22917b6800c158a6d3be3560
SRCREV_go-runewidth="44b7c5b4d67df8ca22917b6800c158a6d3be3560"
SRC_URI += "git://github.com/mattn/go-runewidth;name=go-runewidth;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-runewidth"

#       github.com/moby/sys/mountinfo v0.7.2
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_mountinfo="cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=mountinfo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mountinfo"

#       github.com/modern-go/reflect2 v1.0.2
# [1] git ls-remote https://github.com/modern-go/reflect2 2b33151c9bbc5231aea69b8861c540102b087070
SRCREV_reflect2="2b33151c9bbc5231aea69b8861c540102b087070"
SRC_URI += "git://github.com/modern-go/reflect2;name=reflect2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/modern-go/reflect2"

#       github.com/pmezard/go-difflib v1.0.1-0.20181226105442-5d4384ee4fb2
# [1] git ls-remote https://github.com/pmezard/go-difflib 5d4384ee4fb2527b0a1256a821ebfc92f91efefc
SRCREV_go-difflib="5d4384ee4fb2527b0a1256a821ebfc92f91efefc"
SRC_URI += "git://github.com/pmezard/go-difflib;name=go-difflib;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pmezard/go-difflib"

#       github.com/jonboulle/clockwork v0.5.0
# [1] git ls-remote https://github.com/jonboulle/clockwork 6d8d032a18422c2e3ef651170a8a55012d1f704c
SRCREV_clockwork="6d8d032a18422c2e3ef651170a8a55012d1f704c"
SRC_URI += "git://github.com/jonboulle/clockwork;name=clockwork;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jonboulle/clockwork"

#       github.com/mattn/go-shellwords v1.0.12
# [1] git ls-remote https://github.com/mattn/go-shellwords 973b9d5391598d4ee601db46fa32f6e186a356ac
SRCREV_go-shellwords="973b9d5391598d4ee601db46fa32f6e186a356ac"
SRC_URI += "git://github.com/mattn/go-shellwords;name=go-shellwords;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-shellwords"

#       github.com/moby/patternmatcher v0.6.0
# [1] git ls-remote https://github.com/moby/patternmatcher 347bb8d8d557f90d1b75cd8bca3c0177f380a979
SRCREV_patternmatcher="347bb8d8d557f90d1b75cd8bca3c0177f380a979"
SRC_URI += "git://github.com/moby/patternmatcher;name=patternmatcher;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/patternmatcher"

#       go.opentelemetry.io/otel/trace v1.32.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 7cfbd86a605c85e598eca9a899f6176b17076f4f
SRCREV_trace="7cfbd86a605c85e598eca9a899f6176b17076f4f"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=trace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/trace"

#       github.com/cenkalti/backoff/v4 v4.3.0
# [1] git ls-remote https://github.com/cenkalti/backoff 720b78985a65c0452fd37bb155c7cac4157a7c45
SRCREV_v4="720b78985a65c0452fd37bb155c7cac4157a7c45"
SRC_URI += "git://github.com/cenkalti/backoff;name=v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cenkalti/backoff/v4"

#       github.com/docker/distribution v2.8.3+incompatible
# [1] git ls-remote https://github.com/distribution/distribution 4772604ae973031ab32dd9805a4bccf61d94909f
SRCREV_distribution="4772604ae973031ab32dd9805a4bccf61d94909f"
SRC_URI += "git://github.com/distribution/distribution;name=distribution;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/distribution"

#       github.com/moby/sys/capability v0.4.0
# [1] git ls-remote https://github.com/moby/sys 50e999a770172a519119e1c4fd4b6153b7dac90d
SRCREV_capability="50e999a770172a519119e1c4fd4b6153b7dac90d"
SRC_URI += "git://github.com/moby/sys;name=capability;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/capability"

#       github.com/moby/sys/sequential v0.6.0
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_sequential="cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=sequential;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/sequential"

#       github.com/shibumi/go-pathspec v1.3.0
# [1] git ls-remote https://github.com/shibumi/go-pathspec 30eddf187f62305a5b34f662049d077211abaacd
SRCREV_go-pathspec="30eddf187f62305a5b34f662049d077211abaacd"
SRC_URI += "git://github.com/shibumi/go-pathspec;name=go-pathspec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/shibumi/go-pathspec"

#       go.opentelemetry.io/proto/otlp v1.3.1
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-proto-go a300cca6ca2b6c700b1c0409003751b762e30dea
SRCREV_otlp="a300cca6ca2b6c700b1c0409003751b762e30dea"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-proto-go;name=otlp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/proto/otlp"

#       github.com/containerd/platforms v1.0.0-rc.1
# [1] git ls-remote https://github.com/containerd/platforms e3566b8ff1994b8dc88bae5768d32830e0cd0cfd
SRCREV_platforms="e3566b8ff1994b8dc88bae5768d32830e0cd0cfd"
SRC_URI += "git://github.com/containerd/platforms;name=platforms;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/platforms"

#       github.com/docker/cli-docs-tool v0.9.0
# [1] git ls-remote https://github.com/docker/cli-docs-tool b6c6689c907d2094d3d59b4b9446849bb6a3686f
SRCREV_cli-docs-tool="b6c6689c907d2094d3d59b4b9446849bb6a3686f"
SRC_URI += "git://github.com/docker/cli-docs-tool;name=cli-docs-tool;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/cli-docs-tool"

#       github.com/hashicorp/go-version v1.7.0
# [1] git ls-remote https://github.com/hashicorp/go-version fcaa53267960208632e9308c93aa89535526a018
SRCREV_go-version="fcaa53267960208632e9308c93aa89535526a018"
SRC_URI += "git://github.com/hashicorp/go-version;name=go-version;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-version"

#       go.opentelemetry.io/otel/metric v1.32.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 7cfbd86a605c85e598eca9a899f6176b17076f4f
SRCREV_metric="7cfbd86a605c85e598eca9a899f6176b17076f4f"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/metric"

#       github.com/modern-go/concurrent v0.0.0-20180306012644-bacd9c7ef1dd
# [1] git ls-remote https://github.com/modern-go/concurrent bacd9c7ef1dd9b15be4a9909b8ac7a4e313eec94
SRCREV_concurrent="bacd9c7ef1dd9b15be4a9909b8ac7a4e313eec94"
SRC_URI += "git://github.com/modern-go/concurrent;name=concurrent;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/modern-go/concurrent"

#       github.com/xeipuuv/gojsonschema v1.2.0
# [1] git ls-remote https://github.com/xeipuuv/gojsonschema 82fcdeb203eb6ab2a67d0a623d9c19e5e5a64927
SRCREV_gojsonschema="82fcdeb203eb6ab2a67d0a623d9c19e5e5a64927"
SRC_URI += "git://github.com/xeipuuv/gojsonschema;name=gojsonschema;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonschema"

#       github.com/AlecAivazis/survey/v2 v2.3.7
# [1] git ls-remote https://github.com/AlecAivazis/survey fa37277e6394c29db7bcc94062cb30cd7785a126
SRCREV_v2="fa37277e6394c29db7bcc94062cb30cd7785a126"
SRC_URI += "git://github.com/AlecAivazis/survey;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AlecAivazis/survey/v2"

#       github.com/docker/go-connections v0.5.0
# [1] git ls-remote https://github.com/docker/go-connections fa09c952e3eadbffaf8afc5b8a1667158ba38ace
SRCREV_go-connections="fa09c952e3eadbffaf8afc5b8a1667158ba38ace"
SRC_URI += "git://github.com/docker/go-connections;name=go-connections;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-connections"

#       github.com/Masterminds/semver/v3 v3.2.1
# [1] git ls-remote https://github.com/Masterminds/semver e06051f8fcc4c8b4a4990c337b9862a2448722e5
SRCREV_semver-v3="e06051f8fcc4c8b4a4990c337b9862a2448722e5"
SRC_URI += "git://github.com/Masterminds/semver;name=semver-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Masterminds/semver/v3"

#       github.com/containerd/continuity v0.4.5
# [1] git ls-remote https://github.com/containerd/continuity 44e2adf7e9cd87330f3ad656e7a006ef91ed8c1e
SRCREV_continuity="44e2adf7e9cd87330f3ad656e7a006ef91ed8c1e"
SRC_URI += "git://github.com/containerd/continuity;name=continuity;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/continuity"

#       github.com/containerd/typeurl/v2 v2.2.3
# [1] git ls-remote https://github.com/containerd/typeurl 5b047adad57d172afa9654c019fe65bf0540cc4d
SRCREV_typeurl-v2="5b047adad57d172afa9654c019fe65bf0540cc4d"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/typeurl/v2"

#       github.com/cpuguy83/go-md2man/v2 v2.0.6
# [1] git ls-remote https://github.com/cpuguy83/go-md2man 441631534462b74c098953dbd8d5f6210994b0bf
SRCREV_go-md2man-v2="441631534462b74c098953dbd8d5f6210994b0bf"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=go-md2man-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/google/gnostic-models v0.6.8
# [1] git ls-remote https://github.com/google/gnostic-models 577692584cdf09674595bba0c182d0e8a44655d3
SRCREV_gnostic-models="577692584cdf09674595bba0c182d0e8a44655d3"
SRC_URI += "git://github.com/google/gnostic-models;name=gnostic-models;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/gnostic-models"

#       github.com/xeipuuv/gojsonpointer v0.0.0-20190905194746-02993c407bfb
# [1] git ls-remote https://github.com/xeipuuv/gojsonpointer 02993c407bfbf5f6dae44c4f4b1cf6a39b5fc5bb
SRCREV_gojsonpointer="02993c407bfbf5f6dae44c4f4b1cf6a39b5fc5bb"
SRC_URI += "git://github.com/xeipuuv/gojsonpointer;name=gojsonpointer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonpointer"

#       github.com/distribution/reference v0.6.0
# [1] git ls-remote https://github.com/distribution/reference ff14fafe2236e51c2894ac07d4bdfc778e96d682
SRCREV_reference="ff14fafe2236e51c2894ac07d4bdfc778e96d682"
SRC_URI += "git://github.com/distribution/reference;name=reference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/distribution/reference"

#       github.com/mitchellh/mapstructure v1.5.0
# [1] git ls-remote https://github.com/mitchellh/mapstructure ab69d8d93410fce4361f4912bb1ff88110a81311
SRCREV_mapstructure="ab69d8d93410fce4361f4912bb1ff88110a81311"
SRC_URI += "git://github.com/mitchellh/mapstructure;name=mapstructure;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/mapstructure"

#       github.com/skratchdot/open-golang v0.0.0-20200116055534-eef842397966
# [1] git ls-remote https://github.com/skratchdot/open-golang eef8423979666925a58eb77f9db583e54320d5a4
SRCREV_open-golang="eef8423979666925a58eb77f9db583e54320d5a4"
SRC_URI += "git://github.com/skratchdot/open-golang;name=open-golang;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/skratchdot/open-golang"

#       github.com/containerd/errdefs/pkg v0.3.0
# [1] git ls-remote https://github.com/containerd/errdefs 4817405e4a3caeb7aee9dac68ed55339c59cb635
SRCREV_pkg="4817405e4a3caeb7aee9dac68ed55339c59cb635"
SRC_URI += "git://github.com/containerd/errdefs;name=pkg;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/errdefs/pkg"

#       github.com/emicklei/go-restful/v3 v3.11.0
# [1] git ls-remote https://github.com/emicklei/go-restful 30bec7807481e62e1e1e59ad57e7f22054806966
SRCREV_go-restful-v3="30bec7807481e62e1e1e59ad57e7f22054806966"
SRC_URI += "git://github.com/emicklei/go-restful;name=go-restful-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/emicklei/go-restful/v3"

#       github.com/go-openapi/jsonpointer v0.19.6
# [1] git ls-remote https://github.com/go-openapi/jsonpointer 5df0d69a6be189afff354877d332f9ede32afe12
SRCREV_jsonpointer="5df0d69a6be189afff354877d332f9ede32afe12"
SRC_URI += "git://github.com/go-openapi/jsonpointer;name=jsonpointer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-openapi/jsonpointer"

#       github.com/hashicorp/go-cleanhttp v0.5.2
# [1] git ls-remote https://github.com/hashicorp/go-cleanhttp 6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2
SRCREV_go-cleanhttp="6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2"
SRC_URI += "git://github.com/hashicorp/go-cleanhttp;name=go-cleanhttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-cleanhttp"

#       github.com/in-toto/in-toto-golang v0.5.0
# [1] git ls-remote https://github.com/in-toto/in-toto-golang ec599036d27ebaca3e8c03559d3f8fd5fe429dfe
SRCREV_in-toto-golang="ec599036d27ebaca3e8c03559d3f8fd5fe429dfe"
SRC_URI += "git://github.com/in-toto/in-toto-golang;name=in-toto-golang;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/in-toto/in-toto-golang"

#       github.com/kballard/go-shellquote v0.0.0-20180428030007-95032a82bc51
# [1] git ls-remote https://github.com/kballard/go-shellquote 95032a82bc518f77982ea72343cc1ade730072f0
SRCREV_go-shellquote="95032a82bc518f77982ea72343cc1ade730072f0"
SRC_URI += "git://github.com/kballard/go-shellquote;name=go-shellquote;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/kballard/go-shellquote"

#       github.com/moby/docker-image-spec v1.3.1
# [1] git ls-remote https://github.com/moby/docker-image-spec f1d00ebd2d6d6805170d5543dbca4b850f35f9af
SRCREV_docker-image-spec="f1d00ebd2d6d6805170d5543dbca4b850f35f9af"
SRC_URI += "git://github.com/moby/docker-image-spec;name=docker-image-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/docker-image-spec"

#       github.com/planetscale/vtprotobuf v0.6.1-0.20240319094008-0393e58bdf10
# [1] git ls-remote https://github.com/planetscale/vtprotobuf 0393e58bdf106fe0347e554d272a8f2c84d12461
SRCREV_vtprotobuf="0393e58bdf106fe0347e554d272a8f2c84d12461"
SRC_URI += "git://github.com/planetscale/vtprotobuf;name=vtprotobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/planetscale/vtprotobuf"

#       github.com/tonistiigi/go-csvvalue v0.0.0-20240710180619-ddb21b71c0b4
# [1] git ls-remote https://github.com/tonistiigi/go-csvvalue ddb21b71c0b45f8854f3bb72726ee898a99c2348
SRCREV_go-csvvalue="ddb21b71c0b45f8854f3bb72726ee898a99c2348"
SRC_URI += "git://github.com/tonistiigi/go-csvvalue;name=go-csvvalue;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tonistiigi/go-csvvalue"

#       github.com/hashicorp/go-multierror v1.1.1
# [1] git ls-remote https://github.com/hashicorp/go-multierror 9974e9ec57696378079ecc3accd3d6f29401b3a0
SRCREV_go-multierror="9974e9ec57696378079ecc3accd3d6f29401b3a0"
SRC_URI += "git://github.com/hashicorp/go-multierror;name=go-multierror;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-multierror"

#       github.com/prometheus/client_model v0.6.1
# [1] git ls-remote https://github.com/prometheus/client_model 571429e996ba2d9499e3dcb12926767ba953c0ef
SRCREV_client_model="571429e996ba2d9499e3dcb12926767ba953c0ef"
SRC_URI += "git://github.com/prometheus/client_model;name=client_model;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/client_model"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2="4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/russross/blackfriday/v2"

#       github.com/tonistiigi/dchapes-mode v0.0.0-20241001053921-ca0759fec205
# [1] git ls-remote https://github.com/tonistiigi/dchapes-mode ca0759fec205a36ac026b90f4cf90c04c56e1f8b
SRCREV_dchapes-mode="ca0759fec205a36ac026b90f4cf90c04c56e1f8b"
SRC_URI += "git://github.com/tonistiigi/dchapes-mode;name=dchapes-mode;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tonistiigi/dchapes-mode"

#       github.com/xeipuuv/gojsonreference v0.0.0-20180127040603-bd5ef7bd5415
# [1] git ls-remote https://github.com/xeipuuv/gojsonreference bd5ef7bd5415a7ac448318e64f11a24cd21e594b
SRCREV_gojsonreference="bd5ef7bd5415a7ac448318e64f11a24cd21e594b"
SRC_URI += "git://github.com/xeipuuv/gojsonreference;name=gojsonreference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonreference"

#       github.com/xhit/go-str2duration/v2 v2.1.0
# [1] git ls-remote https://github.com/xhit/go-str2duration 017325bfda0895fe02177e4ebb07962e58735bbf
SRCREV_go-str2duration-v2="017325bfda0895fe02177e4ebb07962e58735bbf"
SRC_URI += "git://github.com/xhit/go-str2duration;name=go-str2duration-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xhit/go-str2duration/v2"

#       github.com/containerd/containerd/v2 v2.0.2
# [1] git ls-remote https://github.com/containerd/containerd c507a0257ea6462fbd6f5ba4f5c74facb04021f4
SRCREV_containerd-v2="c507a0257ea6462fbd6f5ba4f5c74facb04021f4"
SRC_URI += "git://github.com/containerd/containerd;name=containerd-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/containerd/v2"

#       github.com/opencontainers/go-digest v1.0.0
# [1] git ls-remote https://github.com/opencontainers/go-digest ea51bea511f75cfa3ef6098cc253c5c3609b037a
SRCREV_go-digest="ea51bea511f75cfa3ef6098cc253c5c3609b037a"
SRC_URI += "git://github.com/opencontainers/go-digest;name=go-digest;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/go-digest"

#       github.com/aws/aws-sdk-go-v2/config v1.27.27
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 b8a0918056d0ae923f811f525c17066bbb45f050
SRCREV_config="b8a0918056d0ae923f811f525c17066bbb45f050"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=config;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/config"

#       github.com/go-openapi/jsonreference v0.20.2
# [1] git ls-remote https://github.com/go-openapi/jsonreference 1f158e563669961b8e54817e3ea57978d439ffff
SRCREV_jsonreference="1f158e563669961b8e54817e3ea57978d439ffff"
SRC_URI += "git://github.com/go-openapi/jsonreference;name=jsonreference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-openapi/jsonreference"

#       github.com/go-viper/mapstructure/v2 v2.0.0
# [1] git ls-remote https://github.com/go-viper/mapstructure 6abdb44d71d6ac11f79c11a30a9653c9e4986625
SRCREV_mapstructure-v2="6abdb44d71d6ac11f79c11a30a9653c9e4986625"
SRC_URI += "git://github.com/go-viper/mapstructure;name=mapstructure-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-viper/mapstructure/v2"

#       github.com/prometheus/client_golang v1.20.5
# [1] git ls-remote https://github.com/prometheus/client_golang 48e12a185519fd76b4e514b597483781d9ba4093
SRCREV_client_golang="48e12a185519fd76b4e514b597483781d9ba4093"
SRC_URI += "git://github.com/prometheus/client_golang;name=client_golang;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/client_golang"

#       go.opentelemetry.io/otel/sdk/metric v1.32.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 7cfbd86a605c85e598eca9a899f6176b17076f4f
SRCREV_sdk-metric="7cfbd86a605c85e598eca9a899f6176b17076f4f"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=sdk-metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/sdk/metric"

#       github.com/opencontainers/image-spec v1.1.1
# [1] git ls-remote https://github.com/opencontainers/image-spec 147f9c13cedb47a0c4d9a11a222961073d585877
SRCREV_image-spec="147f9c13cedb47a0c4d9a11a222961073d585877"
SRC_URI += "git://github.com/opencontainers/image-spec;name=image-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/image-spec"

#       github.com/theupdateframework/notary v0.7.0
# [1] git ls-remote https://github.com/notaryproject/notary b0b6bfdd4933081e8d5ae026b24e8337311dd598
SRCREV_notary="b0b6bfdd4933081e8d5ae026b24e8337311dd598"
SRC_URI += "git://github.com/notaryproject/notary;name=notary;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/theupdateframework/notary"

#       github.com/AdaLogics/go-fuzz-headers v0.0.0-20240806141605-e8a1dd7889d6
# [1] git ls-remote https://github.com/AdaLogics/go-fuzz-headers e8a1dd7889d65b8a6f02175e0d79d7c0557db7f9
SRCREV_go-fuzz-headers="e8a1dd7889d65b8a6f02175e0d79d7c0557db7f9"
SRC_URI += "git://github.com/AdaLogics/go-fuzz-headers;name=go-fuzz-headers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AdaLogics/go-fuzz-headers"

#       github.com/containerd/containerd/api v1.8.0
# [1] git ls-remote https://github.com/containerd/containerd cf36acf6b6dde383952f523e9b0b721b20dec88a
SRCREV_api="cf36acf6b6dde383952f523e9b0b721b20dec88a"
SRC_URI += "git://github.com/containerd/containerd;name=api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/containerd/api"

#       github.com/inconshreveable/mousetrap v1.1.0
# [1] git ls-remote https://github.com/inconshreveable/mousetrap 4e8053ee7ef85a6bd26368364a6d27f1641c1d21
SRCREV_mousetrap="4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/inconshreveable/mousetrap"

#       sigs.k8s.io/structured-merge-diff/v4 v4.4.1
# [1] git ls-remote https://github.com/kubernetes-sigs/structured-merge-diff cf09e71f4508bfc416135048e392a8a4990bf4e3
SRCREV_structured-merge-diff-v4="cf09e71f4508bfc416135048e392a8a4990bf4e3"
SRC_URI += "git://github.com/kubernetes-sigs/structured-merge-diff;name=structured-merge-diff-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/structured-merge-diff/v4"

#       github.com/compose-spec/compose-go/v2 v2.4.9-0.20250302154753-e508c724a35f
# [1] git ls-remote https://github.com/compose-spec/compose-go e508c724a35f6b21d90b4282baa776916f8a55d0
SRCREV_compose-go-v2="e508c724a35f6b21d90b4282baa776916f8a55d0"
SRC_URI += "git://github.com/compose-spec/compose-go;name=compose-go-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/compose-spec/compose-go/v2"

#       github.com/mitchellh/hashstructure/v2 v2.0.2
# [1] git ls-remote https://github.com/mitchellh/hashstructure a045b665615f739329536a58c25ca6327abf1ec1
SRCREV_hashstructure-v2="a045b665615f739329536a58c25ca6327abf1ec1"
SRC_URI += "git://github.com/mitchellh/hashstructure;name=hashstructure-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/hashstructure/v2"

#       tags.cncf.io/container-device-interface v0.8.1
# [1] git ls-remote https://github.com/cncf-tags/container-device-interface d1a2c366833ff17c1b12db9637314e035871b1ef
SRCREV_container-device-interface="d1a2c366833ff17c1b12db9637314e035871b1ef"
SRC_URI += "git://github.com/cncf-tags/container-device-interface;name=container-device-interface;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/tags.cncf.io/container-device-interface"

#       github.com/apparentlymart/go-textseg/v15 v15.0.0
# [1] git ls-remote https://github.com/apparentlymart/go-textseg 72b78f42484ddc3f58858f794da1771fb9559ad0
SRCREV_v15="72b78f42484ddc3f58858f794da1771fb9559ad0"
SRC_URI += "git://github.com/apparentlymart/go-textseg;name=v15;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/apparentlymart/go-textseg/v15"

#       github.com/aws/aws-sdk-go-v2/credentials v1.17.27
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 b8a0918056d0ae923f811f525c17066bbb45f050
SRCREV_credentials="b8a0918056d0ae923f811f525c17066bbb45f050"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=credentials;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/credentials"

#       github.com/aws/aws-sdk-go-v2/service/sso v1.22.4
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 b8a0918056d0ae923f811f525c17066bbb45f050
SRCREV_sso="b8a0918056d0ae923f811f525c17066bbb45f050"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=sso;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/service/sso"

#       github.com/aws/aws-sdk-go-v2/service/sts v1.30.3
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 0599931efcf551dc63f84ec669d7fb5cfe14f64c
SRCREV_sts="0599931efcf551dc63f84ec669d7fb5cfe14f64c"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=sts;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/service/sts"

#       github.com/aws/aws-sdk-go-v2/internal/ini v1.8.0
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 4fd9126607b61a0fe22af3a6a31b4e4792a66d83
SRCREV_ini="4fd9126607b61a0fe22af3a6a31b4e4792a66d83"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=ini;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/internal/ini"

#       github.com/grpc-ecosystem/grpc-gateway/v2 v2.22.0
# [1] git ls-remote https://github.com/grpc-ecosystem/grpc-gateway 0b14a81276e64dcbf611990bc211082b62a334e6
SRCREV_grpc-gateway-v2="0b14a81276e64dcbf611990bc211082b62a334e6"
SRC_URI += "git://github.com/grpc-ecosystem/grpc-gateway;name=grpc-gateway-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/grpc-ecosystem/grpc-gateway/v2"

#       google.golang.org/genproto/googleapis/api v0.0.0-20241202173237-19429a94021a
# [1] git ls-remote https://github.com/googleapis/go-genproto 19429a94021accaa4bb60cbed61190248f4ef066
SRCREV_googleapis-api="19429a94021accaa4bb60cbed61190248f4ef066"
SRC_URI += "git://github.com/googleapis/go-genproto;name=googleapis-api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/api"

#       google.golang.org/genproto/googleapis/rpc v0.0.0-20241202173237-19429a94021a
# [1] git ls-remote https://github.com/googleapis/go-genproto 19429a94021accaa4bb60cbed61190248f4ef066
SRCREV_rpc="19429a94021accaa4bb60cbed61190248f4ef066"
SRC_URI += "git://github.com/googleapis/go-genproto;name=rpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/rpc"

#       github.com/docker/docker-credential-helpers v0.8.2
# [1] git ls-remote https://github.com/docker/docker-credential-helpers 6b9df3ebb5da5aa22f722b25506bba1414519c6a
SRCREV_docker-credential-helpers="6b9df3ebb5da5aa22f722b25506bba1414519c6a"
SRC_URI += "git://github.com/docker/docker-credential-helpers;name=docker-credential-helpers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker-credential-helpers"

#       github.com/aws/aws-sdk-go-v2/service/ssooidc v1.26.4
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 0599931efcf551dc63f84ec669d7fb5cfe14f64c
SRCREV_ssooidc="0599931efcf551dc63f84ec669d7fb5cfe14f64c"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=ssooidc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/service/ssooidc"

#       github.com/aws/aws-sdk-go-v2/feature/ec2/imds v1.16.11
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 0599931efcf551dc63f84ec669d7fb5cfe14f64c
SRCREV_imds="0599931efcf551dc63f84ec669d7fb5cfe14f64c"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=imds;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/feature/ec2/imds"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_otlptrace="bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptrace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace"

#       github.com/secure-systems-lab/go-securesystemslib v0.4.0
# [1] git ls-remote https://github.com/secure-systems-lab/go-securesystemslib abcd7c95c952df38eb237fab3764ef1b8d2b15c9
SRCREV_go-securesystemslib="abcd7c95c952df38eb237fab3764ef1b8d2b15c9"
SRC_URI += "git://github.com/secure-systems-lab/go-securesystemslib;name=go-securesystemslib;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/secure-systems-lab/go-securesystemslib"

#       github.com/aws/aws-sdk-go-v2/internal/endpoints/v2 v2.6.15
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 0599931efcf551dc63f84ec669d7fb5cfe14f64c
SRCREV_endpoints-v2="0599931efcf551dc63f84ec669d7fb5cfe14f64c"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=endpoints-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/internal/endpoints/v2"

#       github.com/aws/aws-sdk-go-v2/internal/configsources v1.3.15
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 0599931efcf551dc63f84ec669d7fb5cfe14f64c
SRCREV_configsources="0599931efcf551dc63f84ec669d7fb5cfe14f64c"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=configsources;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/internal/configsources"

#       github.com/aws/aws-sdk-go-v2/service/internal/presigned-url v1.11.17
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 0599931efcf551dc63f84ec669d7fb5cfe14f64c
SRCREV_presigned-url="0599931efcf551dc63f84ec669d7fb5cfe14f64c"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=presigned-url;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/service/internal/presigned-url"

#       go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp v0.56.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 9cf5701e6b6611b2c406639039a1bccd883db080
SRCREV_otelhttp="9cf5701e6b6611b2c406639039a1bccd883db080"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp"

#       github.com/aws/aws-sdk-go-v2/service/internal/accept-encoding v1.11.3
# [1] git ls-remote https://github.com/aws/aws-sdk-go-v2 4509a600408280c8dcdbc6825ba750cf1628423d
SRCREV_accept-encoding="4509a600408280c8dcdbc6825ba750cf1628423d"
SRC_URI += "git://github.com/aws/aws-sdk-go-v2;name=accept-encoding;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aws/aws-sdk-go-v2/service/internal/accept-encoding"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_otlptracegrpc="bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptracegrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_otlptracehttp="bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptracehttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp"

#       go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetricgrpc v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_otlpmetricgrpc="bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlpmetricgrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetricgrpc"

#       go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetrichttp v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_otlpmetrichttp="bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlpmetrichttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetrichttp"

#       go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc v0.56.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 9cf5701e6b6611b2c406639039a1bccd883db080
SRCREV_otelgrpc="9cf5701e6b6611b2c406639039a1bccd883db080"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelgrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc"

#       go.opentelemetry.io/contrib/instrumentation/net/http/httptrace/otelhttptrace v0.56.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 9cf5701e6b6611b2c406639039a1bccd883db080
SRCREV_otelhttptrace="9cf5701e6b6611b2c406639039a1bccd883db080"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttptrace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/httptrace/otelhttptrace"

