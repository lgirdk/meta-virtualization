#       k8s.io/utils v0.0.0-20241104100929-3ea5e8cea738
# [1] git ls-remote https://github.com/kubernetes/utils 3ea5e8cea73810f6d2951b37183cf91e19f63455
SRCREV_utils="3ea5e8cea73810f6d2951b37183cf91e19f63455"
SRC_URI += "git://github.com/kubernetes/utils;name=utils;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/utils"

#       cel.dev/expr v0.18.0
# [1] git ls-remote https://github.com/google/cel-spec 373994d7e20e582fce56767b01ac5039524cddab
SRCREV_expr="373994d7e20e582fce56767b01ac5039524cddab"
SRC_URI += "git://github.com/google/cel-spec;name=expr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cel.dev/expr"

#       k8s.io/gengo v0.0.0-20240911193312-2b36238f13e9
# [1] git ls-remote https://github.com/kubernetes/gengo 2b36238f13e9b8aebe4c286c2ffb2fc71f4be3c5
SRCREV_gengo="2b36238f13e9b8aebe4c286c2ffb2fc71f4be3c5"
SRC_URI += "git://github.com/kubernetes/gengo;name=gengo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/gengo"

#       go.uber.org/fx v1.20.1
# [1] git ls-remote https://github.com/uber-go/fx 9636854c6fc588f0ca497000ac18f858f8083ebd
SRCREV_fx="9636854c6fc588f0ca497000ac18f858f8083ebd"
SRC_URI += "git://github.com/uber-go/fx;name=fx;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/fx"

#       go.uber.org/zap v1.27.0
# [1] git ls-remote https://github.com/uber-go/zap fcf8ee58669e358bbd6460bef5c2ee7a53c0803a
SRCREV_zap="fcf8ee58669e358bbd6460bef5c2ee7a53c0803a"
SRC_URI += "git://github.com/uber-go/zap;name=zap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/zap"

#       dario.cat/mergo v1.0.1
# [1] git ls-remote https://github.com/imdario/mergo 59ea6a9cd9f9c60cb6b1c58476f76cd3172ccebf
SRCREV_mergo="59ea6a9cd9f9c60cb6b1c58476f76cd3172ccebf"
SRC_URI += "git://github.com/imdario/mergo;name=mergo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/dario.cat/mergo"

#       go.uber.org/dig v1.17.1
# [1] git ls-remote https://github.com/uber-go/dig 3c7d5e3878b76b0a709514e395597059b6490fb5
SRCREV_dig="3c7d5e3878b76b0a709514e395597059b6490fb5"
SRC_URI += "git://github.com/uber-go/dig;name=dig;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/dig"

#       gopkg.in/inf.v0 v0.9.1
# [1] git ls-remote https://github.com/go-inf/inf d2d2541c53f18d2a059457998ce2876cc8e67cbf
SRCREV_inf.v0="d2d2541c53f18d2a059457998ce2876cc8e67cbf"
SRC_URI += "git://github.com/go-inf/inf;name=inf.v0;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/inf.v0"

#       gopkg.in/ini.v1 v1.67.0
# [1] git ls-remote https://github.com/go-ini/ini b2f570e5b5b844226bbefe6fb521d891f529a951
SRCREV_ini.v1="b2f570e5b5b844226bbefe6fb521d891f529a951"
SRC_URI += "git://github.com/go-ini/ini;name=ini.v1;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/ini.v1"

#       k8s.io/gengo/v2 v2.0.0-20240911193312-2b36238f13e9
# [1] git ls-remote https://github.com/kubernetes/gengo 2b36238f13e9b8aebe4c286c2ffb2fc71f4be3c5
SRCREV_gengo-v2="2b36238f13e9b8aebe4c286c2ffb2fc71f4be3c5"
SRC_URI += "git://github.com/kubernetes/gengo;name=gengo-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/gengo/v2"

#       go.uber.org/mock v0.4.0
# [1] git ls-remote https://github.com/uber/mock 74a29c6e6c2cbb8ccee94db061c1604ff33fd188
SRCREV_mock="74a29c6e6c2cbb8ccee94db061c1604ff33fd188"
SRC_URI += "git://github.com/uber/mock;name=mock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/mock"

#       golang.org/x/mod v0.22.0
# [1] git ls-remote https://go.googlesource.com/mod dec0365065b75edd0e98b0306f6f9b0051710ed2
SRCREV_mod="dec0365065b75edd0e98b0306f6f9b0051710ed2"
SRC_URI += "git://go.googlesource.com/mod;name=mod;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/mod"

#       golang.org/x/net v0.26.0
# [1] git ls-remote https://go.googlesource.com/net 66e838c6fbf5387ecedc26ce490b5f4d6864a854
SRCREV_net="66e838c6fbf5387ecedc26ce490b5f4d6864a854"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.21.0
# [1] git ls-remote https://github.com/golang/sys 673e0f94c16da4b6d7f550d6af66fde0c69503e4
SRCREV_sys="673e0f94c16da4b6d7f550d6af66fde0c69503e4"
SRC_URI += "git://github.com/golang/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v2 v2.4.0
# [1] git ls-remote https://github.com/go-yaml/yaml 7649d4548cb53a614db133b2a8ac1f31859dda8c
SRCREV_yaml.v2="7649d4548cb53a614db133b2a8ac1f31859dda8c"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v2"

#       sigs.k8s.io/yaml v1.4.0
# [1] git ls-remote https://github.com/kubernetes-sigs/yaml c3772b51db126345efe2dfe4ff8dac83b8141684
SRCREV_yaml="c3772b51db126345efe2dfe4ff8dac83b8141684"
SRC_URI += "git://github.com/kubernetes-sigs/yaml;name=yaml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/yaml"

#       go.etcd.io/bbolt v1.3.11
# [1] git ls-remote https://github.com/etcd-io/bbolt d128a10000a9d394686cf45be262a4fe966b03c4
SRCREV_bbolt="d128a10000a9d394686cf45be262a4fe966b03c4"
SRC_URI += "git://github.com/etcd-io/bbolt;name=bbolt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.etcd.io/bbolt"

#       go.opencensus.io v0.24.0
# [1] git ls-remote https://github.com/census-instrumentation/opencensus-go b1a01ee95db0e690d91d7193d037447816fae4c5
SRCREV_go.opencensus.io="b1a01ee95db0e690d91d7193d037447816fae4c5"
SRC_URI += "git://github.com/census-instrumentation/opencensus-go;name=go.opencensus.io;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opencensus.io"

#       golang.org/x/exp v0.0.0-20240719175910-8a7402abbf56
# [1] git ls-remote https://go.googlesource.com/exp 8a7402abbf56ed11a2540c1d8beb569bd29e22d1
SRCREV_exp="8a7402abbf56ed11a2540c1d8beb569bd29e22d1"
SRC_URI += "git://go.googlesource.com/exp;name=exp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/exp"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3="f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v3"

#       sigs.k8s.io/json v0.0.0-20241010143419-9aa6b5e7a4b3
# [1] git ls-remote https://github.com/kubernetes-sigs/json 9aa6b5e7a4b39ff56593bf75f44924cb195127af
SRCREV_json="9aa6b5e7a4b39ff56593bf75f44924cb195127af"
SRC_URI += "git://github.com/kubernetes-sigs/json;name=json;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/json"

#       golang.org/x/sync v0.9.0
# [1] git ls-remote https://go.googlesource.com/sync 151027eb5637d626749783009eab9f0a7cfb446a
SRCREV_sync="151027eb5637d626749783009eab9f0a7cfb446a"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sync"

#       k8s.io/cri-client v0.32.0
# [1] git ls-remote https://github.com/kubernetes/cri-client d406b65ea8158e45dd0e3dafbd99640d7e8083e7
SRCREV_cri-client="d406b65ea8158e45dd0e3dafbd99640d7e8083e7"
SRC_URI += "git://github.com/kubernetes/cri-client;name=cri-client;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/cri-client"

#       github.com/rs/xid v1.5.0
# [1] git ls-remote https://github.com/rs/xid 47a0ac1e0b750ee1f43718be223bb07601c66a1f
SRCREV_xid="47a0ac1e0b750ee1f43718be223bb07601c66a1f"
SRC_URI += "git://github.com/rs/xid;name=xid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rs/xid"

#       golang.org/x/term v0.26.0
# [1] git ls-remote https://go.googlesource.com/term b725e362a8129d135cfc48159c4c4117f2cdc3b6
SRCREV_x-term="b725e362a8129d135cfc48159c4c4117f2cdc3b6"
SRC_URI += "git://go.googlesource.com/term;name=x-term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/term"

#       golang.org/x/text v0.20.0
# [1] git ls-remote https://go.googlesource.com/text efd25daf282ae4d20d3625f1ccb4452fe40967ae
SRCREV_text="efd25daf282ae4d20d3625f1ccb4452fe40967ae"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/text"

#       golang.org/x/time v0.7.0
# [1] git ls-remote https://go.googlesource.com/time 772484ea383fac83b7da05684a96ae628b251bcd
SRCREV_time="772484ea383fac83b7da05684a96ae628b251bcd"
SRC_URI += "git://go.googlesource.com/time;name=time;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/time"

#       golang.org/x/tools v0.27.0
# [1] git ls-remote https://go.googlesource.com/tools 4d2b19f26de18fb5fcfe5fa93e63cc44a98f1fcf
SRCREV_tools="4d2b19f26de18fb5fcfe5fa93e63cc44a98f1fcf"
SRC_URI += "git://go.googlesource.com/tools;name=tools;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/tools"

#       gonum.org/v1/gonum v0.13.0
# [1] git ls-remote https://github.com/gonum/gonum 91a06ac64c4b32c929427846d4d1d3b8202ad7b1
SRCREV_gonum="91a06ac64c4b32c929427846d4d1d3b8202ad7b1"
SRC_URI += "git://github.com/gonum/gonum;name=gonum;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gonum.org/v1/gonum"

#       golang.org/x/crypto v0.24.0
# [1] git ls-remote https://go.googlesource.com/crypto 332fd656f4f013f66e643818fe8c759538456535
SRCREV_crypto="332fd656f4f013f66e643818fe8c759538456535"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/crypto"

#       golang.org/x/oauth2 v0.23.0
# [1] git ls-remote https://go.googlesource.com/oauth2 3e6480915d39dd1a80fa460e56413857f02cc1b9
SRCREV_oauth2="3e6480915d39dd1a80fa460e56413857f02cc1b9"
SRC_URI += "git://go.googlesource.com/oauth2;name=oauth2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/oauth2"

#       k8s.io/kube-openapi v0.0.0-20241105132330-32ad38e42d3f
# [1] git ls-remote https://github.com/kubernetes/kube-openapi 32ad38e42d3faf1ce94eb29f4ea6d763339b258e
SRCREV_kube-openapi="32ad38e42d3faf1ce94eb29f4ea6d763339b258e"
SRC_URI += "git://github.com/kubernetes/kube-openapi;name=kube-openapi;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/k8s.io/kube-openapi"

#       github.com/ipfs/boxo v0.10.0
# [1] git ls-remote https://github.com/ipfs/boxo 6f82d77995476b0d85722539230a50a321706ead
SRCREV_boxo="6f82d77995476b0d85722539230a50a321706ead"
SRC_URI += "git://github.com/ipfs/boxo;name=boxo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/boxo"

#       github.com/miekg/dns v1.1.58
# [1] git ls-remote https://github.com/miekg/dns a493770824062dc616b70e7cd004b890f9e7b702
SRCREV_dns="a493770824062dc616b70e7cd004b890f9e7b702"
SRC_URI += "git://github.com/miekg/dns;name=dns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/miekg/dns"

#       github.com/moby/ipvs v1.1.0
# [1] git ls-remote https://github.com/moby/ipvs fe22ac585b3e22a969cbde61addd99ecd93ab22c
SRCREV_ipvs="fe22ac585b3e22a969cbde61addd99ecd93ab22c"
SRC_URI += "git://github.com/moby/ipvs;name=ipvs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/ipvs"

#       github.com/moby/term v0.5.0
# [1] git ls-remote https://github.com/moby/term 9c3c875fad924eb6c9dd32a361b5fc0a49a4feb9
SRCREV_term="9c3c875fad924eb6c9dd32a361b5fc0a49a4feb9"
SRC_URI += "git://github.com/moby/term;name=term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/term"

#       go.mozilla.org/pkcs7 v0.0.0-20200128120323-432b2356ecb1
# [1] git ls-remote https://github.com/mozilla-services/pkcs7 432b2356ecb18209c1cec25680b8a23632794f21
SRCREV_pkcs7="432b2356ecb18209c1cec25680b8a23632794f21"
SRC_URI += "git://github.com/mozilla-services/pkcs7;name=pkcs7;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.mozilla.org/pkcs7"

#       go.uber.org/multierr v1.11.0
# [1] git ls-remote https://github.com/uber-go/multierr de75ae527b39a27afcb50a84427ec7b84021d5f4
SRCREV_multierr="de75ae527b39a27afcb50a84427ec7b84021d5f4"
SRC_URI += "git://github.com/uber-go/multierr;name=multierr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/multierr"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors="614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pkg/errors"

#       github.com/urfave/cli v1.22.15
# [1] git ls-remote https://github.com/urfave/cli 2421d239f2803b47a757b61dd8ee2772f771f730
SRCREV_cli="2421d239f2803b47a757b61dd8ee2772f771f730"
SRC_URI += "git://github.com/urfave/cli;name=cli;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/urfave/cli"

#       github.com/docker/cli v27.1.2+incompatible
# [1] git ls-remote https://github.com/docker/cli d01f264bccd8bed2e3c038054a04b99533478ab8
SRCREV_docker-cli="d01f264bccd8bed2e3c038054a04b99533478ab8"
SRC_URI += "git://github.com/docker/cli;name=docker-cli;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/cli"

#       sigs.k8s.io/knftables v0.0.17
# [1] git ls-remote https://github.com/kubernetes-sigs/knftables 1cef1f45f514f463190150177fcb51b099453743
SRCREV_knftables="1cef1f45f514f463190150177fcb51b099453743"
SRC_URI += "git://github.com/kubernetes-sigs/knftables;name=knftables;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/knftables"

#       github.com/google/uuid v1.6.0
# [1] git ls-remote https://github.com/google/uuid 0f11ee6918f41a04c201eceeadf612a377bc7fbc
SRCREV_uuid="0f11ee6918f41a04c201eceeadf612a377bc7fbc"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/uuid"

#       github.com/gorilla/mux v1.8.1
# [1] git ls-remote https://github.com/gorilla/mux b4617d0b9670ad14039b2739167fd35a60f557c5
SRCREV_mux="b4617d0b9670ad14039b2739167fd35a60f557c5"
SRC_URI += "git://github.com/gorilla/mux;name=mux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/mux"

#       github.com/k3s-io/kine v0.13.5
# [1] git ls-remote https://github.com/k3s-io/kine 59c88f9b06d47d7f9338dcab688ec03f1ef751fd
SRCREV_kine="59c88f9b06d47d7f9338dcab688ec03f1ef751fd"
SRC_URI += "git://github.com/k3s-io/kine;name=kine;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kine"

#       github.com/onsi/gomega v1.35.1
# [1] git ls-remote https://github.com/onsi/gomega 9f5a208e8adf32c11daf594b3c98a513f13388dd
SRCREV_gomega="9f5a208e8adf32c11daf594b3c98a513f13388dd"
SRC_URI += "git://github.com/onsi/gomega;name=gomega;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/onsi/gomega"

#       github.com/k3s-io/runc v1.2.1-k3s1
# [1] git ls-remote https://github.com/k3s-io/runc 3b49dad67c6b107335eba8b74ceb059609a8a18f
SRCREV_runc="3b49dad67c6b107335eba8b74ceb059609a8a18f"
SRC_URI += "git://github.com/k3s-io/runc;name=runc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/runc"

#       github.com/spf13/pflag v1.0.5
# [1] git ls-remote https://github.com/spf13/pflag 2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab
SRCREV_pflag="2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/pflag"

#       google.golang.org/grpc v1.65.0
# [1] git ls-remote https://github.com/grpc/grpc-go 2da976983bbb33feb3e25b7daaa8f60b9769adb5
SRCREV_grpc="2da976983bbb33feb3e25b7daaa8f60b9769adb5"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/grpc"

#       github.com/cilium/ebpf v0.12.3
# [1] git ls-remote https://github.com/cilium/ebpf 1a65b78df6d9fbe88cd546d689e3e1af54227f23
SRCREV_ebpf="1a65b78df6d9fbe88cd546d689e3e1af54227f23"
SRC_URI += "git://github.com/cilium/ebpf;name=ebpf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cilium/ebpf"

#       github.com/flynn/noise v1.1.0
# [1] git ls-remote https://github.com/flynn/noise 4d9f71cd4ba1fe81415efac312664ccc4bc79b46
SRCREV_noise="4d9f71cd4ba1fe81415efac312664ccc4bc79b46"
SRC_URI += "git://github.com/flynn/noise;name=noise;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/flynn/noise"

#       github.com/ghodss/yaml v1.0.0
# [1] git ls-remote https://github.com/ghodss/yaml 0ca9ea5df5451ffdf184b4428c902747c2c11cd7
SRCREV_ghodss-yaml="0ca9ea5df5451ffdf184b4428c902747c2c11cd7"
SRC_URI += "git://github.com/ghodss/yaml;name=ghodss-yaml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ghodss/yaml"

#       github.com/gofrs/flock v0.8.1
# [1] git ls-remote https://github.com/gofrs/flock 6f010d1acea74a32f2f2066bfe324c08bbee30e3
SRCREV_flock="6f010d1acea74a32f2f2066bfe324c08bbee30e3"
SRC_URI += "git://github.com/gofrs/flock;name=flock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gofrs/flock"

#       github.com/huin/goupnp v1.3.0
# [1] git ls-remote https://github.com/huin/goupnp 00783e79ec6092ce7c16ab10ef62e92e75e89939
SRCREV_goupnp="00783e79ec6092ce7c16ab10ef62e92e75e89939"
SRC_URI += "git://github.com/huin/goupnp;name=goupnp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/huin/goupnp"

#       github.com/ipfs/go-cid v0.4.1
# [1] git ls-remote https://github.com/ipfs/go-cid d46e7f28669cd2c463bc68fe86e7dbe4f8240ab7
SRCREV_go-cid="d46e7f28669cd2c463bc68fe86e7dbe4f8240ab7"
SRC_URI += "git://github.com/ipfs/go-cid;name=go-cid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/go-cid"

#       github.com/ipfs/go-log v1.0.5
# [1] git ls-remote https://github.com/ipfs/go-log c39ee80c0915c5cca41dc1311e848c2fd7fa4101
SRCREV_go-log="c39ee80c0915c5cca41dc1311e848c2fd7fa4101"
SRC_URI += "git://github.com/ipfs/go-log;name=go-log;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/go-log"

#       github.com/moby/locker v1.0.1
# [1] git ls-remote https://github.com/moby/locker 281af2d563954745bea9d1487c965f24d30742fe
SRCREV_locker="281af2d563954745bea9d1487c965f24d30742fe"
SRC_URI += "git://github.com/moby/locker;name=locker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/locker"

#       github.com/pierrec/lz4 v2.6.0+incompatible
# [1] git ls-remote https://github.com/pierrec/lz4 0e583d326e0ec6b9c1ad223188dc709af385408e
SRCREV_lz4="0e583d326e0ec6b9c1ad223188dc709af385408e"
SRC_URI += "git://github.com/pierrec/lz4;name=lz4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pierrec/lz4"

#       github.com/spf13/afero v1.11.0
# [1] git ls-remote https://github.com/spf13/afero 5c4385aa20510dba5ca4db12c02b0c9211d82892
SRCREV_afero="5c4385aa20510dba5ca4db12c02b0c9211d82892"
SRC_URI += "git://github.com/spf13/afero;name=afero;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/afero"

#       github.com/spf13/cobra v1.8.1
# [1] git ls-remote https://github.com/spf13/cobra e94f6d0dd9a5e5738dca6bce03c4b1207ffbc0ec
SRCREV_cobra="e94f6d0dd9a5e5738dca6bce03c4b1207ffbc0ec"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/cobra"

#       github.com/go-logr/logr v1.4.2
# [1] git ls-remote https://github.com/go-logr/logr 1205f429d540b8b81c2b75a38943afb738dac223
SRCREV_logr="1205f429d540b8b81c2b75a38943afb738dac223"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/logr"

#       github.com/go-logr/stdr v1.2.3-0.20220714215716-96bad1d688c5
# [1] git ls-remote https://github.com/go-logr/stdr 96bad1d688c524409b0da98c82fb7d3d51e60639
SRCREV_stdr="96bad1d688c524409b0da98c82fb7d3d51e60639"
SRC_URI += "git://github.com/go-logr/stdr;name=stdr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/stdr"

#       github.com/go-test/deep v1.0.7
# [1] git ls-remote https://github.com/go-test/deep c733f5ed5136b7437e29ac91bb97c653af3694b5
SRCREV_deep="c733f5ed5136b7437e29ac91bb97c653af3694b5"
SRC_URI += "git://github.com/go-test/deep;name=deep;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-test/deep"

#       github.com/otiai10/copy v1.7.0
# [1] git ls-remote https://github.com/otiai10/copy 323db161ae97db91e6e13dbcda403fdb29c3fff8
SRCREV_copy="323db161ae97db91e6e13dbcda403fdb29c3fff8"
SRC_URI += "git://github.com/otiai10/copy;name=copy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/otiai10/copy"

#       github.com/x448/float16 v0.8.4
# [1] git ls-remote https://github.com/x448/float16 cb9afec31f2649663ebb64da5c6c32c3d365c3ca
SRCREV_float16="cb9afec31f2649663ebb64da5c6c32c3d365c3ca"
SRC_URI += "git://github.com/x448/float16;name=float16;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/x448/float16"

#       filippo.io/edwards25519 v1.1.0
# [1] git ls-remote https://github.com/FiloSottile/edwards25519 325f520de716c1d2d2b4e8dc2f82c7ccc5fac764
SRCREV_edwards25519="325f520de716c1d2d2b4e8dc2f82c7ccc5fac764"
SRC_URI += "git://github.com/FiloSottile/edwards25519;name=edwards25519;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/filippo.io/edwards25519"

#       github.com/Rican7/retry v0.3.1
# [1] git ls-remote https://github.com/Rican7/retry e6cc9ad35993d0a7edf857b494c854e0804440cd
SRCREV_retry="e6cc9ad35993d0a7edf857b494c854e0804440cd"
SRC_URI += "git://github.com/Rican7/retry;name=retry;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Rican7/retry"

#       github.com/beorn7/perks v1.0.1
# [1] git ls-remote https://github.com/beorn7/perks 37c8de3658fcb183f997c4e13e8337516ab753e6
SRCREV_perks="37c8de3658fcb183f997c4e13e8337516ab753e6"
SRC_URI += "git://github.com/beorn7/perks;name=perks;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/beorn7/perks"

#       github.com/blang/semver v3.5.1+incompatible
# [1] git ls-remote https://github.com/blang/semver 2ee87856327ba09384cabd113bc6b5d174e9ec0f
SRCREV_semver="2ee87856327ba09384cabd113bc6b5d174e9ec0f"
SRC_URI += "git://github.com/blang/semver;name=semver;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/blang/semver"

#       github.com/google/btree v1.1.2
# [1] git ls-remote https://github.com/google/btree 8e29150ba321eef204059de2ab494f179b6cff2c
SRCREV_btree="8e29150ba321eef204059de2ab494f179b6cff2c"
SRC_URI += "git://github.com/google/btree;name=btree;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/btree"

#       github.com/google/pprof v0.0.0-20241029153458-d1b30febd7db
# [1] git ls-remote https://github.com/google/pprof d1b30febd7dbc1a25a756add949019450c0eedf7
SRCREV_pprof="d1b30febd7dbc1a25a756add949019450c0eedf7"
SRC_URI += "git://github.com/google/pprof;name=pprof;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/pprof"

#       github.com/google/shlex v0.0.0-20191202100458-e7afc7fbc510
# [1] git ls-remote https://github.com/google/shlex e7afc7fbc51079733e9468cdfd1efcd7d196cd1d
SRCREV_shlex="e7afc7fbc51079733e9468cdfd1efcd7d196cd1d"
SRC_URI += "git://github.com/google/shlex;name=shlex;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/shlex"

#       github.com/jackc/pgx/v5 v5.7.1
# [1] git ls-remote https://github.com/jackc/pgx 672c4a3a24849b1f34857817e6ed76f6581bbe90
SRCREV_pgx-v5="672c4a3a24849b1f34857817e6ed76f6581bbe90"
SRC_URI += "git://github.com/jackc/pgx;name=pgx-v5;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jackc/pgx/v5"

#       github.com/miekg/pkcs11 v1.1.1
# [1] git ls-remote https://github.com/miekg/pkcs11 f3481918a208bd212aa995a41f92d786eb418a7d
SRCREV_pkcs11="f3481918a208bd212aa995a41f92d786eb418a7d"
SRC_URI += "git://github.com/miekg/pkcs11;name=pkcs11;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/miekg/pkcs11"

#       github.com/morikuni/aec v1.0.0
# [1] git ls-remote https://github.com/morikuni/aec 39771216ff4c63d11f5e604076f9c45e8be1067b
SRCREV_aec="39771216ff4c63d11f5e604076f9c45e8be1067b"
SRC_URI += "git://github.com/morikuni/aec;name=aec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/morikuni/aec"

#       github.com/nats-io/nuid v1.0.1
# [1] git ls-remote https://github.com/nats-io/nuid 4b96681fa6d28dd0ab5fe79bac63b3a493d9ee94
SRCREV_nuid="4b96681fa6d28dd0ab5fe79bac63b3a493d9ee94"
SRC_URI += "git://github.com/nats-io/nuid;name=nuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/nats-io/nuid"

#       lukechampine.com/blake3 v1.2.1
# [1] git ls-remote https://github.com/lukechampine/blake3 6e4325968f64ca24b1bbc8fbf08ea320d17ebfa0
SRCREV_blake3="6e4325968f64ca24b1bbc8fbf08ea320d17ebfa0"
SRC_URI += "git://github.com/lukechampine/blake3;name=blake3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/lukechampine.com/blake3"

#       github.com/docker/docker v25.0.6+incompatible
# [1] git ls-remote https://github.com/moby/moby b08a51fe16eed67de3861c03b363ba403643b12e
SRCREV_docker="b08a51fe16eed67de3861c03b363ba403643b12e"
SRC_URI += "git://github.com/moby/moby;name=docker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker"

#       github.com/joho/godotenv v1.5.1
# [1] git ls-remote https://github.com/joho/godotenv 3fc4292b58a67b78e1dbb6e47b4879a6cc602ec4
SRCREV_godotenv="3fc4292b58a67b78e1dbb6e47b4879a6cc602ec4"
SRC_URI += "git://github.com/joho/godotenv;name=godotenv;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/joho/godotenv"

#       github.com/rancher/lasso v0.0.0-20241202185148-04649f379358
# [1] git ls-remote https://github.com/rancher/lasso 04649f379358eee112591d30fc80bce1c6a43432
SRCREV_lasso="04649f379358eee112591d30fc80bce1c6a43432"
SRC_URI += "git://github.com/rancher/lasso;name=lasso;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rancher/lasso"

#       github.com/k3s-io/spegel v0.0.22
# [1] git ls-remote https://github.com/k3s-io/spegel eb0fbdaf63ea87de804ed6ebf484af557968e6a9
SRCREV_spegel="eb0fbdaf63ea87de804ed6ebf484af557968e6a9"
SRC_URI += "git://github.com/k3s-io/spegel;name=spegel;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/spegel"

#       github.com/stretchr/objx v0.5.2
# [1] git ls-remote https://github.com/stretchr/objx 307d0db21292676ac9d469826525c3630f47f63a
SRCREV_objx="307d0db21292676ac9d469826525c3630f47f63a"
SRC_URI += "git://github.com/stretchr/objx;name=objx;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stretchr/objx"

#       github.com/armon/circbuf v0.0.0-20190214190532-5111143e8da2
# [1] git ls-remote https://github.com/armon/circbuf 5111143e8da2e98b4ea6a8f32b9065ea1821c191
SRCREV_circbuf="5111143e8da2e98b4ea6a8f32b9065ea1821c191"
SRC_URI += "git://github.com/armon/circbuf;name=circbuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/armon/circbuf"

#       github.com/goccy/go-json v0.10.2
# [1] git ls-remote https://github.com/goccy/go-json 8e8cdeacf2f2faef082f32848138f0f9af7cfb66
SRCREV_go-json="8e8cdeacf2f2faef082f32848138f0f9af7cfb66"
SRC_URI += "git://github.com/goccy/go-json;name=go-json;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/goccy/go-json"

#       github.com/gogo/protobuf v1.3.2
# [1] git ls-remote https://github.com/gogo/protobuf b03c65ea87cdc3521ede29f62fe3ce239267c1bc
SRCREV_protobuf="b03c65ea87cdc3521ede29f62fe3ce239267c1bc"
SRC_URI += "git://github.com/gogo/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gogo/protobuf"

#       github.com/golang/snappy v0.0.4
# [1] git ls-remote https://github.com/golang/snappy 544b4180ac705b7605231d4a4550a1acb22a19fe
SRCREV_snappy="544b4180ac705b7605231d4a4550a1acb22a19fe"
SRC_URI += "git://github.com/golang/snappy;name=snappy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/snappy"

#       github.com/google/cel-go v0.22.0
# [1] git ls-remote https://github.com/google/cel-go 8ad600b649be1b9ef5a003e8c5632d89b9aaf790
SRCREV_cel-go="8ad600b649be1b9ef5a003e8c5632d89b9aaf790"
SRC_URI += "git://github.com/google/cel-go;name=cel-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/cel-go"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp="c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-cmp"

#       github.com/google/gofuzz v1.2.0
# [1] git ls-remote https://github.com/google/gofuzz 379e164120fbc98885a8f494b5aa41ba94f64c56
SRCREV_gofuzz="379e164120fbc98885a8f494b5aa41ba94f64c56"
SRC_URI += "git://github.com/google/gofuzz;name=gofuzz;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/gofuzz"

#       github.com/koron/go-ssdp v0.0.4
# [1] git ls-remote https://github.com/koron/go-ssdp 615e2904c24d115f20139e60b9ab5916b1dfd55d
SRCREV_go-ssdp="615e2904c24d115f20139e60b9ab5916b1dfd55d"
SRC_URI += "git://github.com/koron/go-ssdp;name=go-ssdp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/koron/go-ssdp"

#       github.com/libp2p/go-nat v0.2.0
# [1] git ls-remote https://github.com/libp2p/go-nat 14ce74b6949ca4d3f4889568e20840bdf0b05009
SRCREV_go-nat="14ce74b6949ca4d3f4889568e20840bdf0b05009"
SRC_URI += "git://github.com/libp2p/go-nat;name=go-nat;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-nat"

#       github.com/mikioh/tcpopt v0.0.0-20190314235656-172688c1accc
# [1] git ls-remote https://github.com/mikioh/tcpopt 172688c1accceb1c8699343c22838f55e4b662ca
SRCREV_tcpopt="172688c1accceb1c8699343c22838f55e4b662ca"
SRC_URI += "git://github.com/mikioh/tcpopt;name=tcpopt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mikioh/tcpopt"

#       github.com/moby/sys/user v0.3.0
# [1] git ls-remote https://github.com/moby/sys 54475191138bd297c627eb1a59e1e54b953957f1
SRCREV_user="54475191138bd297c627eb1a59e1e54b953957f1"
SRC_URI += "git://github.com/moby/sys;name=user;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/user"

#       github.com/nats-io/nkeys v0.4.7
# [1] git ls-remote https://github.com/nats-io/nkeys c865baf4058b0ae6529eeb82fbe86bd8c21f4a36
SRCREV_nkeys="c865baf4058b0ae6529eeb82fbe86bd8c21f4a36"
SRC_URI += "git://github.com/nats-io/nkeys;name=nkeys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/nats-io/nkeys"

#       github.com/pbnjay/memory v0.0.0-20210728143218-7b4eea64cf58
# [1] git ls-remote https://github.com/pbnjay/memory 7b4eea64cf580186c0eceb10dc94ba3a098af46c
SRCREV_memory="7b4eea64cf580186c0eceb10dc94ba3a098af46c"
SRC_URI += "git://github.com/pbnjay/memory;name=memory;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pbnjay/memory"

#       github.com/quic-go/qpack v0.4.0
# [1] git ls-remote https://github.com/quic-go/qpack 3e7287cc7ce655141583b8511fbe09800d4ba896
SRCREV_qpack="3e7287cc7ce655141583b8511fbe09800d4ba896"
SRC_URI += "git://github.com/quic-go/qpack;name=qpack;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/quic-go/qpack"

#       github.com/soheilhy/cmux v0.1.5
# [1] git ls-remote https://github.com/soheilhy/cmux 5ec6847320e53b5fee0ab9a4757b56625a946c85
SRCREV_cmux="5ec6847320e53b5fee0ab9a4757b56625a946c85"
SRC_URI += "git://github.com/soheilhy/cmux;name=cmux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/soheilhy/cmux"

#       github.com/tidwall/btree v1.6.0
# [1] git ls-remote https://github.com/tidwall/btree c538c0ce1d47ebada0c423fd430978ba274d7d68
SRCREV_tidwall-btree="c538c0ce1d47ebada0c423fd430978ba274d7d68"
SRC_URI += "git://github.com/tidwall/btree;name=tidwall-btree;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tidwall/btree"

#       github.com/urfave/cli/v2 v2.27.5
# [1] git ls-remote https://github.com/urfave/cli f035ffaa3749afda2cd26fb824aa940747297ef1
SRCREV_cli-v2="f035ffaa3749afda2cd26fb824aa940747297ef1"
SRC_URI += "git://github.com/urfave/cli;name=cli-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/urfave/cli/v2"

#       go.opentelemetry.io/otel v1.28.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 81216fb002a6a76d32fdab6ef999bcf65794130d
SRCREV_otel="81216fb002a6a76d32fdab6ef999bcf65794130d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel"

#       github.com/containerd/zfs v1.1.0
# [1] git ls-remote https://github.com/containerd/zfs 26134297cde4138b412644d6819c20b105472991
SRCREV_zfs="26134297cde4138b412644d6819c20b105472991"
SRC_URI += "git://github.com/containerd/zfs;name=zfs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/zfs"

#       github.com/ipfs/go-log/v2 v2.5.1
# [1] git ls-remote https://github.com/ipfs/go-log 8625e3ec81bdeb96627de192e6fe21eab5896603
SRCREV_go-log-v2="8625e3ec81bdeb96627de192e6fe21eab5896603"
SRC_URI += "git://github.com/ipfs/go-log;name=go-log-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/go-log/v2"

#       github.com/onsi/ginkgo/v2 v2.21.0
# [1] git ls-remote https://github.com/onsi/ginkgo ac8918e9fd5e8174adc91e13b9b905b554d14e38
SRCREV_ginkgo-v2="ac8918e9fd5e8174adc91e13b9b905b554d14e38"
SRC_URI += "git://github.com/onsi/ginkgo;name=ginkgo-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/onsi/ginkgo/v2"

#       github.com/robfig/cron/v3 v3.0.1
# [1] git ls-remote https://github.com/robfig/cron ccba498c397bb90a9c84945bbb0f7af2d72b6309
SRCREV_cron-v3="ccba498c397bb90a9c84945bbb0f7af2d72b6309"
SRC_URI += "git://github.com/robfig/cron;name=cron-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/robfig/cron/v3"

#       github.com/k3s-io/klog/v2 v2.120.1-k3s1
# [1] git ls-remote https://github.com/k3s-io/klog 8aec94690700c54117016f97845530e7c75b6aeb
SRCREV_klog-v2="8aec94690700c54117016f97845530e7c75b6aeb"
SRC_URI += "git://github.com/k3s-io/klog;name=klog-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/klog/v2"

#       github.com/containerd/log v0.1.0
# [1] git ls-remote https://github.com/containerd/log 0fc1e28871fdf2786e2cc51bbe4133db6547a199
SRCREV_log="0fc1e28871fdf2786e2cc51bbe4133db6547a199"
SRC_URI += "git://github.com/containerd/log;name=log;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/log"

#       github.com/containerd/nri v0.6.1
# [1] git ls-remote https://github.com/containerd/nri fa64d110ed4a77eae5ea2e46ea2d3991e02f0789
SRCREV_nri="fa64d110ed4a77eae5ea2e46ea2d3991e02f0789"
SRC_URI += "git://github.com/containerd/nri;name=nri;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/nri"

#       github.com/coreos/go-oidc v2.2.1+incompatible
# [1] git ls-remote https://github.com/coreos/go-oidc 8d771559cf6e5111c9b9159810d0e4538e7cdc82
SRCREV_go-oidc="8d771559cf6e5111c9b9159810d0e4538e7cdc82"
SRC_URI += "git://github.com/coreos/go-oidc;name=go-oidc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-oidc"

#       github.com/godbus/dbus/v5 v5.1.0
# [1] git ls-remote https://github.com/godbus/dbus e523abc905595cf17fb0001a7d77eaaddfaa216d
SRCREV_v5="e523abc905595cf17fb0001a7d77eaaddfaa216d"
SRC_URI += "git://github.com/godbus/dbus;name=v5;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/godbus/dbus/v5"

#       github.com/mikioh/tcpinfo v0.0.0-20190314235526-30a79bb1804b
# [1] git ls-remote https://github.com/mikioh/tcpinfo 30a79bb1804bc47fa7fe29928c9109f368792a9e
SRCREV_tcpinfo="30a79bb1804bc47fa7fe29928c9109f368792a9e"
SRC_URI += "git://github.com/mikioh/tcpinfo;name=tcpinfo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mikioh/tcpinfo"

#       github.com/minio/md5-simd v1.1.2
# [1] git ls-remote https://github.com/minio/md5-simd 776275e0c9a74ceebbd50fe5c1d61b0c80c608df
SRCREV_md5-simd="776275e0c9a74ceebbd50fe5c1d61b0c80c608df"
SRC_URI += "git://github.com/minio/md5-simd;name=md5-simd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/minio/md5-simd"

#       github.com/mohae/deepcopy v0.0.0-20170929034955-c48cc78d4826
# [1] git ls-remote https://github.com/mohae/deepcopy c48cc78d482608239f6c4c92a4abd87eb8761c90
SRCREV_deepcopy="c48cc78d482608239f6c4c92a4abd87eb8761c90"
SRC_URI += "git://github.com/mohae/deepcopy;name=deepcopy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mohae/deepcopy"

#       github.com/mr-tron/base58 v1.2.0
# [1] git ls-remote https://github.com/mr-tron/base58 cd0e5141f51dfcadb8311fd8e495eb11126a8010
SRCREV_base58="cd0e5141f51dfcadb8311fd8e495eb11126a8010"
SRC_URI += "git://github.com/mr-tron/base58;name=base58;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mr-tron/base58"

#       github.com/nats-io/jsm.go v0.0.31-0.20220317133147-fe318f464eee
# [1] git ls-remote https://github.com/nats-io/jsm.go fe318f464eee9ceef6120ea851e5cf94a0497ac6
SRCREV_jsm.go="fe318f464eee9ceef6120ea851e5cf94a0497ac6"
SRC_URI += "git://github.com/nats-io/jsm.go;name=jsm.go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/nats-io/jsm.go"

#       github.com/nats-io/jwt/v2 v2.5.5
# [1] git ls-remote https://github.com/nats-io/jwt c2d30e2ffc632a1ea64030467e5a40e02e4158be
SRCREV_jwt-v2="c2d30e2ffc632a1ea64030467e5a40e02e4158be"
SRC_URI += "git://github.com/nats-io/jwt;name=jwt-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/nats-io/jwt/v2"

#       github.com/polydawn/refmt v0.89.0
# [1] git ls-remote https://github.com/polydawn/refmt ad1efcb83999082a4ec5ac34b9d5c08bc388faf3
SRCREV_refmt="ad1efcb83999082a4ec5ac34b9d5c08bc388faf3"
SRC_URI += "git://github.com/polydawn/refmt;name=refmt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/polydawn/refmt"

#       github.com/xlab/treeprint v1.2.0
# [1] git ls-remote https://github.com/xlab/treeprint 044005a3b405f660f109e066d9f589755835c2ea
SRCREV_treeprint="044005a3b405f660f109e066d9f589755835c2ea"
SRC_URI += "git://github.com/xlab/treeprint;name=treeprint;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xlab/treeprint"

#       github.com/xrash/smetrics v0.0.0-20240521201337-686a1a2994c1
# [1] git ls-remote https://github.com/xrash/smetrics 686a1a2994c11fac124829fadcb683a24ab8d25f
SRCREV_smetrics="686a1a2994c11fac124829fadcb683a24ab8d25f"
SRC_URI += "git://github.com/xrash/smetrics;name=smetrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xrash/smetrics"

#       sigs.k8s.io/kustomize/api v0.18.0
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize faccc12624644f9763fd880c0ff15b1e20df34c7
SRCREV_kustomize-api="faccc12624644f9763fd880c0ff15b1e20df34c7"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kustomize-api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/kustomize/api"

#       github.com/blang/semver/v4 v4.0.0
# [1] git ls-remote https://github.com/blang/semver af3461a9cbcf1f3f5889d21b83f5ef63880c33a8
SRCREV_v4="af3461a9cbcf1f3f5889d21b83f5ef63880c33a8"
SRC_URI += "git://github.com/blang/semver;name=v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/blang/semver/v4"

#       github.com/containerd/aufs v1.0.0
# [1] git ls-remote https://github.com/containerd/aufs fb0192dcb2c0bbfce3bd8756fc88026870c0354d
SRCREV_aufs="fb0192dcb2c0bbfce3bd8756fc88026870c0354d"
SRC_URI += "git://github.com/containerd/aufs;name=aufs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/aufs"

#       github.com/k3s-io/cadvisor v0.51.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/cadvisor 00a9372eca49b742c72098847c682175bf95c397
SRCREV_cadvisor="00a9372eca49b742c72098847c682175bf95c397"
SRC_URI += "git://github.com/k3s-io/cadvisor;name=cadvisor;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/cadvisor"

#       github.com/inetaf/tcpproxy v0.0.0-20240214030015-3ce58045626c
# [1] git ls-remote https://github.com/inetaf/tcpproxy 3ce58045626c8bc343a593c90354975e61b1817a
SRCREV_tcpproxy="3ce58045626c8bc343a593c90354975e61b1817a"
SRC_URI += "git://github.com/inetaf/tcpproxy;name=tcpproxy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/inetaf/tcpproxy"

#       github.com/rancher/wharfie v0.6.7
# [1] git ls-remote https://github.com/rancher/wharfie f0590c66dd86b2794a68e1f708467d68266a1b61
SRCREV_wharfie="f0590c66dd86b2794a68e1f708467d68266a1b61"
SRC_URI += "git://github.com/rancher/wharfie;name=wharfie;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rancher/wharfie"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus="d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/sirupsen/logrus"

#       github.com/containerd/fifo v1.1.0
# [1] git ls-remote https://github.com/containerd/fifo 151b205263c29d471e0d55c787d2ce9f5343fd46
SRCREV_fifo="151b205263c29d471e0d55c787d2ce9f5343fd46"
SRC_URI += "git://github.com/containerd/fifo;name=fifo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/fifo"

#       github.com/davecgh/go-spew v1.1.2-0.20180830191138-d8f796af33cc
# [1] git ls-remote https://github.com/davecgh/go-spew d8f796af33cc11cb798c1aaeb27a4ebc5099927d
SRCREV_go-spew="d8f796af33cc11cb798c1aaeb27a4ebc5099927d"
SRC_URI += "git://github.com/davecgh/go-spew;name=go-spew;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/davecgh/go-spew"

#       github.com/docker/go-units v0.5.0
# [1] git ls-remote https://github.com/docker/go-units e682442797b36348f8e1f98defdbf32bac0b6c6f
SRCREV_go-units="e682442797b36348f8e1f98defdbf32bac0b6c6f"
SRC_URI += "git://github.com/docker/go-units;name=go-units;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-units"

#       github.com/elastic/gosigar v0.14.2
# [1] git ls-remote https://github.com/elastic/gosigar 9d6c92629470099edd40ead9a3d8cf1b38020ec6
SRCREV_gosigar="9d6c92629470099edd40ead9a3d8cf1b38020ec6"
SRC_URI += "git://github.com/elastic/gosigar;name=gosigar;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/elastic/gosigar"

#       github.com/fatih/camelcase v1.0.0
# [1] git ls-remote https://github.com/fatih/camelcase 44e46d280b43ec1531bb25252440e34f1b800b65
SRCREV_camelcase="44e46d280b43ec1531bb25252440e34f1b800b65"
SRC_URI += "git://github.com/fatih/camelcase;name=camelcase;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fatih/camelcase"

#       github.com/go-openapi/swag v0.23.0
# [1] git ls-remote https://github.com/go-openapi/swag 53e32e82f758c8e884819330a87aef294ff10c1f
SRCREV_swag="53e32e82f758c8e884819330a87aef294ff10c1f"
SRC_URI += "git://github.com/go-openapi/swag;name=swag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-openapi/swag"

#       github.com/golang/protobuf v1.5.4
# [1] git ls-remote https://github.com/golang/protobuf 75de7c059e36b64f01d0dd234ff2fff404ec3374
SRCREV_golang-protobuf="75de7c059e36b64f01d0dd234ff2fff404ec3374"
SRC_URI += "git://github.com/golang/protobuf;name=golang-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/protobuf"

#       github.com/google/gopacket v1.1.19
# [1] git ls-remote https://github.com/google/gopacket a9779d139771f6a06fc983b18e0efd23ca30222f
SRCREV_gopacket="a9779d139771f6a06fc983b18e0efd23ca30222f"
SRC_URI += "git://github.com/google/gopacket;name=gopacket;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/gopacket"

#       github.com/intel/goresctrl v0.7.0
# [1] git ls-remote https://github.com/intel/goresctrl 5ef060bb4aa8ae3763e6dd48af375cd23e0fabba
SRCREV_goresctrl="5ef060bb4aa8ae3763e6dd48af375cd23e0fabba"
SRC_URI += "git://github.com/intel/goresctrl;name=goresctrl;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/intel/goresctrl"

#       github.com/jackc/pgerrcode v0.0.0-20220416144525-469b46aa5efa
# [1] git ls-remote https://github.com/jackc/pgerrcode 469b46aa5efae8a229646096c4d7026bf9ff89fe
SRCREV_pgerrcode="469b46aa5efae8a229646096c4d7026bf9ff89fe"
SRC_URI += "git://github.com/jackc/pgerrcode;name=pgerrcode;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jackc/pgerrcode"

#       github.com/jackc/puddle/v2 v2.2.2
# [1] git ls-remote https://github.com/jackc/puddle bd09d14bd4018b6d65a9d7770e2f3ddf8b00af1c
SRCREV_puddle-v2="bd09d14bd4018b6d65a9d7770e2f3ddf8b00af1c"
SRC_URI += "git://github.com/jackc/puddle;name=puddle-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jackc/puddle/v2"

#       github.com/libp2p/go-msgio v0.3.0
# [1] git ls-remote https://github.com/libp2p/go-msgio 12f8f7a72c7dbbb246151e4c98b5a6d59e27e0c6
SRCREV_go-msgio="12f8f7a72c7dbbb246151e4c98b5a6d59e27e0c6"
SRC_URI += "git://github.com/libp2p/go-msgio;name=go-msgio;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-msgio"

#       github.com/mailru/easyjson v0.7.7
# [1] git ls-remote https://github.com/mailru/easyjson c120ca7ced6051261161ce15e8f1542a4b2567fc
SRCREV_easyjson="c120ca7ced6051261161ce15e8f1542a4b2567fc"
SRC_URI += "git://github.com/mailru/easyjson;name=easyjson;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mailru/easyjson"

#       github.com/mattn/go-isatty v0.0.20
# [1] git ls-remote https://github.com/mattn/go-isatty a7c02353c47bc4ec6b30dc9628154ae4fe760c11
SRCREV_go-isatty="a7c02353c47bc4ec6b30dc9628154ae4fe760c11"
SRC_URI += "git://github.com/mattn/go-isatty;name=go-isatty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-isatty"

#       github.com/mdlayher/socket v0.4.1
# [1] git ls-remote https://github.com/mdlayher/socket 024cdfb30ba417ac6f1b27bb5189a8099787dcf7
SRCREV_socket="024cdfb30ba417ac6f1b27bb5189a8099787dcf7"
SRC_URI += "git://github.com/mdlayher/socket;name=socket;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mdlayher/socket"

#       github.com/moby/spdystream v0.5.0
# [1] git ls-remote https://github.com/moby/spdystream 77eb080123d208697674a07b74ceaf94c98bee8b
SRCREV_spdystream="77eb080123d208697674a07b74ceaf94c98bee8b"
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

#       github.com/nats-io/nats.go v1.34.0
# [1] git ls-remote https://github.com/nats-io/nats.go 33316cdf884166bf6231192fa88304bb6533367c
SRCREV_nats.go="33316cdf884166bf6231192fa88304bb6533367c"
SRC_URI += "git://github.com/nats-io/nats.go;name=nats.go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/nats-io/nats.go"

#       github.com/quic-go/quic-go v0.42.0
# [1] git ls-remote https://github.com/quic-go/quic-go 4a99b816ae3ab03ae5449d15aac45147c85ed47a
SRCREV_quic-go="4a99b816ae3ab03ae5449d15aac45147c85ed47a"
SRC_URI += "git://github.com/quic-go/quic-go;name=quic-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/quic-go/quic-go"

#       github.com/xiang90/probing v0.0.0-20221125231312-a49e3df8f510
# [1] git ls-remote https://github.com/xiang90/probing a49e3df8f510ee8b42e68345ca4636dbb161bd0a
SRCREV_probing="a49e3df8f510ee8b42e68345ca4636dbb161bd0a"
SRC_URI += "git://github.com/xiang90/probing;name=probing;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xiang90/probing"

#       golang.zx2c4.com/wireguard v0.0.0-20231211153847-12269c276173
# [1] git ls-remote https://git.zx2c4.com/wireguard-go 12269c2761734b15625017d8565745096325392f
SRCREV_wireguard="12269c2761734b15625017d8565745096325392f"
SRC_URI += "git://git.zx2c4.com/wireguard-go;name=wireguard;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.zx2c4.com/wireguard"

#       google.golang.org/genproto v0.0.0-20230525234035-dd9d682886f9
# [1] git ls-remote https://github.com/googleapis/go-genproto dd9d682886f99d242574cd3eaea438ce7ea66399
SRCREV_genproto="dd9d682886f99d242574cd3eaea438ce7ea66399"
SRC_URI += "git://github.com/googleapis/go-genproto;name=genproto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto"

#       google.golang.org/protobuf v1.35.2
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go c72053a9062dd4bc86a75c21f5d8134136ccbf2e
SRCREV_google.golang.org-protobuf="c72053a9062dd4bc86a75c21f5d8134136ccbf2e"
SRC_URI += "git://github.com/protocolbuffers/protobuf-go;name=google.golang.org-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/protobuf"

#       gopkg.in/square/go-jose.v2 v2.6.0
# [1] git ls-remote https://github.com/square/go-jose a10ff54e00bc6e833bf549e04ae976f0fe8ea2fd
SRCREV_go-jose.v2="a10ff54e00bc6e833bf549e04ae976f0fe8ea2fd"
SRC_URI += "git://github.com/square/go-jose;name=go-jose.v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/square/go-jose.v2"

#       github.com/json-iterator/go v1.1.12
# [1] git ls-remote https://github.com/json-iterator/go 024077e996b048517130b21ea6bf12aa23055d3d
SRCREV_go="024077e996b048517130b21ea6bf12aa23055d3d"
SRC_URI += "git://github.com/json-iterator/go;name=go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/json-iterator/go"

#       github.com/libp2p/go-libp2p v0.33.2
# [1] git ls-remote https://github.com/libp2p/go-libp2p fccfbe7a4b6841325100038b83f86cd4e097b9a1
SRCREV_go-libp2p="fccfbe7a4b6841325100038b83f86cd4e097b9a1"
SRC_URI += "git://github.com/libp2p/go-libp2p;name=go-libp2p;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-libp2p"

#       github.com/stretchr/testify v1.9.0
# [1] git ls-remote https://github.com/stretchr/testify bb548d0473d4e1c9b7bbfd6602c7bf12f7a84dd2
SRCREV_testify="bb548d0473d4e1c9b7bbfd6602c7bf12f7a84dd2"
SRC_URI += "git://github.com/stretchr/testify;name=testify;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stretchr/testify"

#       github.com/k3s-io/cri-tools v1.31.0-k3s2
# [1] git ls-remote https://github.com/k3s-io/cri-tools 5eb7322d61d3f5d27c4835c37aff590d4f45850d
SRCREV_cri-tools="5eb7322d61d3f5d27c4835c37aff590d4f45850d"
SRC_URI += "git://github.com/k3s-io/cri-tools;name=cri-tools;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/cri-tools"

#       github.com/buger/jsonparser v1.1.1
# [1] git ls-remote https://github.com/buger/jsonparser df3ea76ece10095374fd1c9a22a4fb85a44efc42
SRCREV_jsonparser="df3ea76ece10095374fd1c9a22a4fb85a44efc42"
SRC_URI += "git://github.com/buger/jsonparser;name=jsonparser;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/buger/jsonparser"

#       github.com/Microsoft/hnslib v0.0.8
# [1] git ls-remote https://github.com/microsoft/hnslib 299778423a10cd8a4c30a771578f6c3ba5506e1e
SRCREV_hnslib="299778423a10cd8a4c30a771578f6c3ba5506e1e"
SRC_URI += "git://github.com/microsoft/hnslib;name=hnslib;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/hnslib"

#       github.com/containerd/ttrpc v1.2.5
# [1] git ls-remote https://github.com/containerd/ttrpc 655622931dab8c39a563e8c82ae90cdc748f72a1
SRCREV_ttrpc="655622931dab8c39a563e8c82ae90cdc748f72a1"
SRC_URI += "git://github.com/containerd/ttrpc;name=ttrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/ttrpc"

#       github.com/coreos/go-semver v0.3.1
# [1] git ls-remote https://github.com/coreos/go-semver c16f28124668daf02b2a32a431dec2f183977ffc
SRCREV_go-semver="c16f28124668daf02b2a32a431dec2f183977ffc"
SRC_URI += "git://github.com/coreos/go-semver;name=go-semver;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-semver"

#       github.com/docker/go-events v0.0.0-20190806004212-e31b211e4f1c
# [1] git ls-remote https://github.com/docker/go-events e31b211e4f1cd09aa76fe4ac244571fab96ae47f
SRCREV_go-events="e31b211e4f1cd09aa76fe4ac244571fab96ae47f"
SRC_URI += "git://github.com/docker/go-events;name=go-events;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-events"

#       github.com/go-errors/errors v1.4.2
# [1] git ls-remote https://github.com/go-errors/errors 33d496f939bc762321a636d4035e15c302eb0b00
SRCREV_go-errors-errors="33d496f939bc762321a636d4035e15c302eb0b00"
SRC_URI += "git://github.com/go-errors/errors;name=go-errors-errors;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-errors/errors"

#       github.com/jackc/pgpassfile v1.0.0
# [1] git ls-remote https://github.com/jackc/pgpassfile 99d8e8e28945ffceaf75b0299fcb2bb656b8a683
SRCREV_pgpassfile="99d8e8e28945ffceaf75b0299fcb2bb656b8a683"
SRC_URI += "git://github.com/jackc/pgpassfile;name=pgpassfile;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jackc/pgpassfile"

#       github.com/jbenet/goprocess v0.1.4
# [1] git ls-remote https://github.com/jbenet/goprocess 23d20c20149e1f362afda26f4500cb9d6393f0ad
SRCREV_goprocess="23d20c20149e1f362afda26f4500cb9d6393f0ad"
SRC_URI += "git://github.com/jbenet/goprocess;name=goprocess;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jbenet/goprocess"

#       github.com/josharian/intern v1.0.0
# [1] git ls-remote https://github.com/josharian/intern 8e6ff32b3e7c0b018c43953085fe2ac330fe9acd
SRCREV_intern="8e6ff32b3e7c0b018c43953085fe2ac330fe9acd"
SRC_URI += "git://github.com/josharian/intern;name=intern;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/josharian/intern"

#       github.com/josharian/native v1.1.0
# [1] git ls-remote https://github.com/josharian/native c1e37c09b531b14ae12a501eb6fd529b31cecdaa
SRCREV_native="c1e37c09b531b14ae12a501eb6fd529b31cecdaa"
SRC_URI += "git://github.com/josharian/native;name=native;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/josharian/native"

#       github.com/lithammer/dedent v1.1.0
# [1] git ls-remote https://github.com/lithammer/dedent 8478954c3bc893cf36c5ee7c822266b993a3b3ee
SRCREV_dedent="8478954c3bc893cf36c5ee7c822266b993a3b3ee"
SRC_URI += "git://github.com/lithammer/dedent;name=dedent;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/lithammer/dedent"

#       github.com/mattn/go-sqlite3 v1.14.24
# [1] git ls-remote https://github.com/mattn/go-sqlite3 846fea6c1443e8cc366fc1966fe078d7f825f6a9
SRCREV_go-sqlite3="846fea6c1443e8cc366fc1966fe078d7f825f6a9"
SRC_URI += "git://github.com/mattn/go-sqlite3;name=go-sqlite3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-sqlite3"

#       github.com/mdlayher/netlink v1.7.2
# [1] git ls-remote https://github.com/mdlayher/netlink 657f7da1d9bd78d246ae610e0b5efc63a6a5f9e4
SRCREV_mdlayher-netlink="657f7da1d9bd78d246ae610e0b5efc63a6a5f9e4"
SRC_URI += "git://github.com/mdlayher/netlink;name=mdlayher-netlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mdlayher/netlink"

#       github.com/mistifyio/go-zfs v2.1.2-0.20190413222219-f784269be439+incompatible
# [1] git ls-remote https://github.com/mistifyio/go-zfs f784269be439d704d3dfa1906f45dd848fed2beb
SRCREV_go-zfs="f784269be439d704d3dfa1906f45dd848fed2beb"
SRC_URI += "git://github.com/mistifyio/go-zfs;name=go-zfs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mistifyio/go-zfs"

#       github.com/moby/sys/symlink v0.3.0
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_symlink="cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=symlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/symlink"

#       github.com/syndtr/goleveldb v1.0.0
# [1] git ls-remote https://github.com/syndtr/goleveldb 9d007e481048296f09f59bd19bb7ae584563cd95
SRCREV_goleveldb="9d007e481048296f09f59bd19bb7ae584563cd95"
SRC_URI += "git://github.com/syndtr/goleveldb;name=goleveldb;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/syndtr/goleveldb"

#       github.com/vbatts/tar-split v0.11.5
# [1] git ls-remote https://github.com/vbatts/tar-split 5ef0dd8243164ebacd755916a89d8085a5b6bb7f
SRCREV_tar-split="5ef0dd8243164ebacd755916a89d8085a5b6bb7f"
SRC_URI += "git://github.com/vbatts/tar-split;name=tar-split;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vbatts/tar-split"

#       sigs.k8s.io/kustomize/kyaml v0.18.1
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize 01cce4f6ccdbadefe3f7540114953134672feebc
SRCREV_kyaml="01cce4f6ccdbadefe3f7540114953134672feebc"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kyaml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/kustomize/kyaml"

#       github.com/Microsoft/hcsshim v0.11.7
# [1] git ls-remote https://github.com/microsoft/hcsshim 6749c2f4196edcd51cfbd85dcb0f411613b7de82
SRCREV_hcsshim="6749c2f4196edcd51cfbd85dcb0f411613b7de82"
SRC_URI += "git://github.com/microsoft/hcsshim;name=hcsshim;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/hcsshim"

#       github.com/k3s-io/containerd v1.7.23-k3s2
# [1] git ls-remote https://github.com/k3s-io/containerd a9466dd23a1d9be018292a086609565fef97e8de
SRCREV_containerd="a9466dd23a1d9be018292a086609565fef97e8de"
SRC_URI += "git://github.com/k3s-io/containerd;name=containerd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/containerd"

#       github.com/gorilla/websocket v1.5.1
# [1] git ls-remote https://github.com/gorilla/websocket ac0789be11725ab2285233e9a3800c2312cff4fc
SRCREV_websocket="ac0789be11725ab2285233e9a3800c2312cff4fc"
SRC_URI += "git://github.com/gorilla/websocket;name=websocket;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/websocket"

#       github.com/minio/minio-go/v7 v7.0.70
# [1] git ls-remote https://github.com/minio/minio-go c2fe17945c8d0b203fa01e4d04a8adf93ccf2d9f
SRCREV_v7="c2fe17945c8d0b203fa01e4d04a8adf93ccf2d9f"
SRC_URI += "git://github.com/minio/minio-go;name=v7;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/minio/minio-go/v7"

#       github.com/prometheus/common v0.55.0
# [1] git ls-remote https://github.com/prometheus/common 0c7b585c7da330aae136aaa874cb4f89f5b3e5d9
SRCREV_common="0c7b585c7da330aae136aaa874cb4f89f5b3e5d9"
SRC_URI += "git://github.com/prometheus/common;name=common;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/common"

#       github.com/yl2chen/cidranger v1.0.2
# [1] git ls-remote https://github.com/yl2chen/cidranger 7ff5a0e84593dad6fbd50551343618d7956b3c71
SRCREV_cidranger="7ff5a0e84593dad6fbd50551343618d7956b3c71"
SRC_URI += "git://github.com/yl2chen/cidranger;name=cidranger;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/yl2chen/cidranger"

#       github.com/k3s-io/kubernetes v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kubernetes="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubernetes;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes"

#       github.com/fxamacker/cbor/v2 v2.7.0
# [1] git ls-remote https://github.com/fxamacker/cbor 02b69dbb52f4ecf450b3aa5e9a04b7a0b4bf409a
SRCREV_cbor-v2="02b69dbb52f4ecf450b3aa5e9a04b7a0b4bf409a"
SRC_URI += "git://github.com/fxamacker/cbor;name=cbor-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fxamacker/cbor/v2"

#       github.com/Azure/go-ansiterm v0.0.0-20230124172434-306776ec8161
# [1] git ls-remote https://github.com/Azure/go-ansiterm 306776ec8161b5dc8676039adbf598a39bce3de0
SRCREV_go-ansiterm="306776ec8161b5dc8676039adbf598a39bce3de0"
SRC_URI += "git://github.com/Azure/go-ansiterm;name=go-ansiterm;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Azure/go-ansiterm"

#       github.com/avast/retry-go/v4 v4.6.0
# [1] git ls-remote https://github.com/avast/retry-go 839c8ceb66c3308e79d46f2552fec3980aaec6f2
SRCREV_retry-go-v4="839c8ceb66c3308e79d46f2552fec3980aaec6f2"
SRC_URI += "git://github.com/avast/retry-go;name=retry-go-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/avast/retry-go/v4"

#       github.com/benbjohnson/clock v1.3.5
# [1] git ls-remote https://github.com/benbjohnson/clock 96c602caabb567343046c08a8fca8560b4f00bb4
SRCREV_clock="96c602caabb567343046c08a8fca8560b4f00bb4"
SRC_URI += "git://github.com/benbjohnson/clock;name=clock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/benbjohnson/clock"

#       github.com/cespare/xxhash/v2 v2.3.0
# [1] git ls-remote https://github.com/cespare/xxhash 998dce232f17418a7a5721ecf87ca714025a3243
SRCREV_xxhash-v2="998dce232f17418a7a5721ecf87ca714025a3243"
SRC_URI += "git://github.com/cespare/xxhash;name=xxhash-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cespare/xxhash/v2"

#       github.com/containerd/go-cni v1.1.10
# [1] git ls-remote https://github.com/containerd/go-cni 1c1be5e9ea864c9bc1651909ae13e1e555b4098d
SRCREV_go-cni="1c1be5e9ea864c9bc1651909ae13e1e555b4098d"
SRC_URI += "git://github.com/containerd/go-cni;name=go-cni;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/go-cni"

#       github.com/docker/go-metrics v0.0.1
# [1] git ls-remote https://github.com/docker/go-metrics b619b3592b65de4f087d9f16863a7e6ff905973c
SRCREV_go-metrics="b619b3592b65de4f087d9f16863a7e6ff905973c"
SRC_URI += "git://github.com/docker/go-metrics;name=go-metrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-metrics"

#       github.com/felixge/httpsnoop v1.0.4
# [1] git ls-remote https://github.com/felixge/httpsnoop c5817c27ec125409c069052fdd171023c353501c
SRCREV_httpsnoop="c5817c27ec125409c069052fdd171023c353501c"
SRC_URI += "git://github.com/felixge/httpsnoop;name=httpsnoop;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/felixge/httpsnoop"

#       github.com/francoispqt/gojay v1.2.13
# [1] git ls-remote https://github.com/francoispqt/gojay 1398296d938f9fae26750ddc2fe356b6d897f799
SRCREV_gojay="1398296d938f9fae26750ddc2fe356b6d897f799"
SRC_URI += "git://github.com/francoispqt/gojay;name=gojay;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/francoispqt/gojay"

#       github.com/fsnotify/fsnotify v1.7.0
# [1] git ls-remote https://github.com/fsnotify/fsnotify cfc9c4f277ea6ec18de92444b31983b183deb4fb
SRCREV_fsnotify="cfc9c4f277ea6ec18de92444b31983b183deb4fb"
SRC_URI += "git://github.com/fsnotify/fsnotify;name=fsnotify;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fsnotify/fsnotify"

#       github.com/golang-jwt/jwt/v4 v4.5.1
# [1] git ls-remote https://github.com/golang-jwt/jwt 7b1c1c00a171c6c79bbdb40e4ce7d197060c1c2c
SRCREV_jwt-v4="7b1c1c00a171c6c79bbdb40e4ce7d197060c1c2c"
SRC_URI += "git://github.com/golang-jwt/jwt;name=jwt-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang-jwt/jwt/v4"

#       github.com/golang/groupcache v0.0.0-20210331224755-41bb18bfe9da
# [1] git ls-remote https://github.com/golang/groupcache 41bb18bfe9da5321badc438f91158cd790a33aa3
SRCREV_groupcache="41bb18bfe9da5321badc438f91158cd790a33aa3"
SRC_URI += "git://github.com/golang/groupcache;name=groupcache;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/groupcache"

#       github.com/hanwen/go-fuse/v2 v2.5.1
# [1] git ls-remote https://github.com/hanwen/go-fuse 2901efa04e040ebe54a951bcea93d67ab1af1ad5
SRCREV_go-fuse-v2="2901efa04e040ebe54a951bcea93d67ab1af1ad5"
SRC_URI += "git://github.com/hanwen/go-fuse;name=go-fuse-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hanwen/go-fuse/v2"

#       github.com/hashicorp/errwrap v1.1.0
# [1] git ls-remote https://github.com/hashicorp/errwrap 7b00e5db719c64d14dd0caaacbd13e76254d02c0
SRCREV_errwrap="7b00e5db719c64d14dd0caaacbd13e76254d02c0"
SRC_URI += "git://github.com/hashicorp/errwrap;name=errwrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/errwrap"

#       github.com/ipfs/go-datastore v0.6.0
# [1] git ls-remote https://github.com/ipfs/go-datastore 1de47089f5c72b61d91b5cd9043e49fe95771ac0
SRCREV_go-datastore="1de47089f5c72b61d91b5cd9043e49fe95771ac0"
SRC_URI += "git://github.com/ipfs/go-datastore;name=go-datastore;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/go-datastore"

#       github.com/karrick/godirwalk v1.17.0
# [1] git ls-remote https://github.com/karrick/godirwalk 9a7752c108e7ea76255201b9f47bd4d4d2df868e
SRCREV_godirwalk="9a7752c108e7ea76255201b9f47bd4d4d2df868e"
SRC_URI += "git://github.com/karrick/godirwalk;name=godirwalk;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/karrick/godirwalk"

#       github.com/liggitt/tabwriter v0.0.0-20181228230101-89fcab3d43de
# [1] git ls-remote https://github.com/liggitt/tabwriter 89fcab3d43de07060e4fd4c1547430ed57e87f24
SRCREV_tabwriter="89fcab3d43de07060e4fd4c1547430ed57e87f24"
SRC_URI += "git://github.com/liggitt/tabwriter;name=tabwriter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/liggitt/tabwriter"

#       github.com/minio/highwayhash v1.0.2
# [1] git ls-remote https://github.com/minio/highwayhash 08ce0b4fa7932a018438133f1b632e1c674d4107
SRCREV_highwayhash="08ce0b4fa7932a018438133f1b632e1c674d4107"
SRC_URI += "git://github.com/minio/highwayhash;name=highwayhash;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/minio/highwayhash"

#       github.com/minio/sha256-simd v1.0.1
# [1] git ls-remote https://github.com/minio/sha256-simd 6096f891a77bfe490cbea7a424c821b5fdb92849
SRCREV_sha256-simd="6096f891a77bfe490cbea7a424c821b5fdb92849"
SRC_URI += "git://github.com/minio/sha256-simd;name=sha256-simd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/minio/sha256-simd"

#       github.com/munnerz/goautoneg v0.0.0-20191010083416-a7dc8b61c822
# [1] git ls-remote https://github.com/munnerz/goautoneg a7dc8b61c822528f973a5e4e7b272055c6fdb43e
SRCREV_goautoneg="a7dc8b61c822528f973a5e4e7b272055c6fdb43e"
SRC_URI += "git://github.com/munnerz/goautoneg;name=goautoneg;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/munnerz/goautoneg"

#       github.com/pelletier/go-toml v1.9.5
# [1] git ls-remote https://github.com/pelletier/go-toml fed1464066413075eac02cd4dc368b5221845541
SRCREV_go-toml="fed1464066413075eac02cd4dc368b5221845541"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pelletier/go-toml"

#       github.com/prometheus/procfs v0.15.1
# [1] git ls-remote https://github.com/prometheus/procfs 51919fd4b9d0aaca69854ac81bdeda5f96dab366
SRCREV_procfs="51919fd4b9d0aaca69854ac81bdeda5f96dab366"
SRC_URI += "git://github.com/prometheus/procfs;name=procfs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/procfs"

#       github.com/raulk/go-watchdog v1.3.0
# [1] git ls-remote https://github.com/raulk/go-watchdog 9c5e371109037bec1852ea63c9512a94307bfea0
SRCREV_go-watchdog="9c5e371109037bec1852ea63c9512a94307bfea0"
SRC_URI += "git://github.com/raulk/go-watchdog;name=go-watchdog;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/raulk/go-watchdog"

#       github.com/spaolacci/murmur3 v1.1.0
# [1] git ls-remote https://github.com/spaolacci/murmur3 f09979ecbc725b9e6d41a297405f65e7e8804acc
SRCREV_murmur3="f09979ecbc725b9e6d41a297405f65e7e8804acc"
SRC_URI += "git://github.com/spaolacci/murmur3;name=murmur3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spaolacci/murmur3"

#       github.com/vishvananda/netns v0.0.4
# [1] git ls-remote https://github.com/vishvananda/netns 7a452d2d15292b2bfb2a2d88e6bdeac156a761b9
SRCREV_netns="7a452d2d15292b2bfb2a2d88e6bdeac156a761b9"
SRC_URI += "git://github.com/vishvananda/netns;name=netns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vishvananda/netns"

#       go.opentelemetry.io/otel/sdk v1.28.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 81216fb002a6a76d32fdab6ef999bcf65794130d
SRCREV_sdk="81216fb002a6a76d32fdab6ef999bcf65794130d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=sdk;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/sdk"

#       github.com/k3s-io/cri-dockerd v0.3.15-k3s1.32-1
# [1] git ls-remote https://github.com/k3s-io/cri-dockerd 6a0374b8aa2ec0c51e9e354725fe0e742b6f86a5
SRCREV_cri-dockerd="6a0374b8aa2ec0c51e9e354725fe0e742b6f86a5"
SRC_URI += "git://github.com/k3s-io/cri-dockerd;name=cri-dockerd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/cri-dockerd"

#       github.com/coreos/go-iptables v0.8.0
# [1] git ls-remote https://github.com/coreos/go-iptables 26e42518b22e6878bd6e479a574122c319fa923e
SRCREV_go-iptables="26e42518b22e6878bd6e479a574122c319fa923e"
SRC_URI += "git://github.com/coreos/go-iptables;name=go-iptables;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-iptables"

#       github.com/flannel-io/flannel v0.25.7
# [1] git ls-remote https://github.com/flannel-io/flannel 41d7069b8cfec1fc657adcd26e6a825879dab38f
SRCREV_flannel="41d7069b8cfec1fc657adcd26e6a825879dab38f"
SRC_URI += "git://github.com/flannel-io/flannel;name=flannel;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/flannel-io/flannel"

#       github.com/ipfs/go-ds-leveldb v0.5.0
# [1] git ls-remote https://github.com/ipfs/go-ds-leveldb 6f6dc580f7325ad411fc5967ccee67e40545e208
SRCREV_go-ds-leveldb="6f6dc580f7325ad411fc5967ccee67e40545e208"
SRC_URI += "git://github.com/ipfs/go-ds-leveldb;name=go-ds-leveldb;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/go-ds-leveldb"

#       github.com/klauspost/compress v1.17.11
# [1] git ls-remote https://github.com/klauspost/compress 72cd4a92a8b13e722763e6b6a3467163c2028d3d
SRCREV_compress="72cd4a92a8b13e722763e6b6a3467163c2028d3d"
SRC_URI += "git://github.com/klauspost/compress;name=compress;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/klauspost/compress"

#       github.com/k3s-io/etcd/api/v3 v3.5.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_api-v3="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=api-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/api/v3"

#       github.com/antlr4-go/antlr/v4 v4.13.0
# [1] git ls-remote https://github.com/antlr4-go/antlr 9549173c7ad83c2bf580a654ce0fe666fd7d2557
SRCREV_antlr-v4="9549173c7ad83c2bf580a654ce0fe666fd7d2557"
SRC_URI += "git://github.com/antlr4-go/antlr;name=antlr-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/antlr4-go/antlr/v4"

#       github.com/invopop/jsonschema v0.12.0
# [1] git ls-remote https://github.com/invopop/jsonschema 9b6bb6e8f15aa557c1df053de86d4e5043365ca9
SRCREV_jsonschema="9b6bb6e8f15aa557c1df053de86d4e5043365ca9"
SRC_URI += "git://github.com/invopop/jsonschema;name=jsonschema;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/invopop/jsonschema"

#       github.com/JeffAshton/win_pdh v0.0.0-20161109143554-76bb4ee9f0ab
# [1] git ls-remote https://github.com/JeffAshton/win_pdh 76bb4ee9f0ab50f77826f2a2ee7fb9d3880d6ec2
SRCREV_win_pdh="76bb4ee9f0ab50f77826f2a2ee7fb9d3880d6ec2"
SRC_URI += "git://github.com/JeffAshton/win_pdh;name=win_pdh;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/JeffAshton/win_pdh"

#       github.com/Microsoft/go-winio v0.6.2
# [1] git ls-remote https://github.com/microsoft/go-winio 3c9576c9346a1892dee136329e7e15309e82fb4f
SRCREV_go-winio="3c9576c9346a1892dee136329e7e15309e82fb4f"
SRC_URI += "git://github.com/microsoft/go-winio;name=go-winio;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/go-winio"

#       github.com/containerd/cgroups v1.1.0
# [1] git ls-remote https://github.com/containerd/cgroups fe7323f622bc222e72473679f12a9089aeeda177
SRCREV_cgroups="fe7323f622bc222e72473679f12a9089aeeda177"
SRC_URI += "git://github.com/containerd/cgroups;name=cgroups;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/cgroups"

#       github.com/containerd/console v1.0.4
# [1] git ls-remote https://github.com/containerd/console 8f6c4e4faef5a326d2cd907097d04c0239ee5e2f
SRCREV_console="8f6c4e4faef5a326d2cd907097d04c0239ee5e2f"
SRC_URI += "git://github.com/containerd/console;name=console;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/console"

#       github.com/containerd/errdefs v0.3.0
# [1] git ls-remote https://github.com/containerd/errdefs 9fd32fc2ca77f7bbae249b0633bfc8bd9bdfb901
SRCREV_errdefs="9fd32fc2ca77f7bbae249b0633bfc8bd9bdfb901"
SRC_URI += "git://github.com/containerd/errdefs;name=errdefs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/errdefs"

#       github.com/containerd/go-runc v1.1.0
# [1] git ls-remote https://github.com/containerd/go-runc df3c22d088ca919d1943efa8ae0cfc0514da0542
SRCREV_go-runc="df3c22d088ca919d1943efa8ae0cfc0514da0542"
SRC_URI += "git://github.com/containerd/go-runc;name=go-runc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/go-runc"

#       github.com/containerd/typeurl v1.0.2
# [1] git ls-remote https://github.com/containerd/typeurl 5e43fb8b75ed2f2305fc04e6918c8d10636771bc
SRCREV_typeurl="5e43fb8b75ed2f2305fc04e6918c8d10636771bc"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/typeurl"

#       github.com/dustin/go-humanize v1.0.1
# [1] git ls-remote https://github.com/dustin/go-humanize 9ec74ab2f7a7161664182fd4e5e292fccffbc75f
SRCREV_go-humanize="9ec74ab2f7a7161664182fd4e5e292fccffbc75f"
SRC_URI += "git://github.com/dustin/go-humanize;name=go-humanize;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/dustin/go-humanize"

#       github.com/evanphx/json-patch v5.9.0+incompatible
# [1] git ls-remote https://github.com/evanphx/json-patch b7a4e4a87a35414cd02460dac07e879df729df37
SRCREV_json-patch="b7a4e4a87a35414cd02460dac07e879df729df37"
SRC_URI += "git://github.com/evanphx/json-patch;name=json-patch;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/evanphx/json-patch"

#       github.com/go-jose/go-jose/v4 v4.0.2
# [1] git ls-remote https://github.com/go-jose/go-jose ca3a2783c470c40cc490f801fc87ff39b92b25d6
SRCREV_go-jose-v4="ca3a2783c470c40cc490f801fc87ff39b92b25d6"
SRC_URI += "git://github.com/go-jose/go-jose;name=go-jose-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-jose/go-jose/v4"

#       github.com/ipld/go-ipld-prime v0.20.0
# [1] git ls-remote https://github.com/ipld/go-ipld-prime 200b4a6b6fb6720911cb385aff05da55c39d56de
SRCREV_go-ipld-prime="200b4a6b6fb6720911cb385aff05da55c39d56de"
SRC_URI += "git://github.com/ipld/go-ipld-prime;name=go-ipld-prime;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipld/go-ipld-prime"

#       github.com/jackpal/go-nat-pmp v1.0.2
# [1] git ls-remote https://github.com/jackpal/go-nat-pmp 059203efa1edd7130293a583541b8308e7c640c4
SRCREV_go-nat-pmp="059203efa1edd7130293a583541b8308e7c640c4"
SRC_URI += "git://github.com/jackpal/go-nat-pmp;name=go-nat-pmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jackpal/go-nat-pmp"

#       github.com/klauspost/cpuid/v2 v2.2.7
# [1] git ls-remote https://github.com/klauspost/cpuid 486f6ae65fec6bbb15e6f6bff15036f7bc50d4c4
SRCREV_cpuid-v2="486f6ae65fec6bbb15e6f6bff15036f7bc50d4c4"
SRC_URI += "git://github.com/klauspost/cpuid;name=cpuid-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/klauspost/cpuid/v2"

#       github.com/kylelemons/godebug v1.1.0
# [1] git ls-remote https://github.com/kylelemons/godebug 9ff306d4fbead574800b66369df5b6144732d58e
SRCREV_godebug="9ff306d4fbead574800b66369df5b6144732d58e"
SRC_URI += "git://github.com/kylelemons/godebug;name=godebug;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/kylelemons/godebug"

#       github.com/libp2p/go-netroute v0.2.1
# [1] git ls-remote https://github.com/libp2p/go-netroute 462cbfaf52f4c2a2321e6382455a8f56396f3664
SRCREV_go-netroute="462cbfaf52f4c2a2321e6382455a8f56396f3664"
SRC_URI += "git://github.com/libp2p/go-netroute;name=go-netroute;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-netroute"

#       github.com/libp2p/go-yamux/v4 v4.0.1
# [1] git ls-remote https://github.com/libp2p/go-yamux e584a210c72651b67829477b4b4285cae25b1a1b
SRCREV_go-yamux-v4="e584a210c72651b67829477b4b4285cae25b1a1b"
SRC_URI += "git://github.com/libp2p/go-yamux;name=go-yamux-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-yamux/v4"

#       github.com/marten-seemann/tcp v0.0.0-20210406111302-dfbc87cc63fd
# [1] git ls-remote https://github.com/marten-seemann/tcp dfbc87cc63fd003b9a070c76d605769fa3e2e3b2
SRCREV_tcp="dfbc87cc63fd003b9a070c76d605769fa3e2e3b2"
SRC_URI += "git://github.com/marten-seemann/tcp;name=tcp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/marten-seemann/tcp"

#       github.com/mdlayher/genetlink v1.3.2
# [1] git ls-remote https://github.com/mdlayher/genetlink 7531bffe0f5e10d1ce558d35e6feb5d1d1600851
SRCREV_genetlink="7531bffe0f5e10d1ce558d35e6feb5d1d1600851"
SRC_URI += "git://github.com/mdlayher/genetlink;name=genetlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mdlayher/genetlink"

#       github.com/moby/sys/mountinfo v0.7.2
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_mountinfo="cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=mountinfo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mountinfo"

#       github.com/modern-go/reflect2 v1.0.2
# [1] git ls-remote https://github.com/modern-go/reflect2 2b33151c9bbc5231aea69b8861c540102b087070
SRCREV_reflect2="2b33151c9bbc5231aea69b8861c540102b087070"
SRC_URI += "git://github.com/modern-go/reflect2;name=reflect2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/modern-go/reflect2"

#       github.com/peterbourgon/diskv v2.0.1+incompatible
# [1] git ls-remote https://github.com/peterbourgon/diskv 5f041e8faa004a95c88a202771f4cc3e991971e6
SRCREV_diskv="5f041e8faa004a95c88a202771f4cc3e991971e6"
SRC_URI += "git://github.com/peterbourgon/diskv;name=diskv;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/peterbourgon/diskv"

#       github.com/pmezard/go-difflib v1.0.1-0.20181226105442-5d4384ee4fb2
# [1] git ls-remote https://github.com/pmezard/go-difflib 5d4384ee4fb2527b0a1256a821ebfc92f91efefc
SRCREV_go-difflib="5d4384ee4fb2527b0a1256a821ebfc92f91efefc"
SRC_URI += "git://github.com/pmezard/go-difflib;name=go-difflib;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pmezard/go-difflib"

#       github.com/shengdoushi/base58 v1.0.0
# [1] git ls-remote https://github.com/shengdoushi/base58 c5f44ca1af76fb63925d5fba8fa7b85870199839
SRCREV_shengdoushi-base58="c5f44ca1af76fb63925d5fba8fa7b85870199839"
SRC_URI += "git://github.com/shengdoushi/base58;name=shengdoushi-base58;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/shengdoushi/base58"

#       github.com/stoewer/go-strcase v1.3.0
# [1] git ls-remote https://github.com/stoewer/go-strcase 6c4ce445f323378b0865757ffd2c50d8bb2737f8
SRCREV_go-strcase="6c4ce445f323378b0865757ffd2c50d8bb2737f8"
SRC_URI += "git://github.com/stoewer/go-strcase;name=go-strcase;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stoewer/go-strcase"

#       github.com/k3s-io/etcd/pkg/v3 v3.5.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_pkg-v3="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=pkg-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/pkg/v3"

#       github.com/erikdubbelboer/gspt v0.0.0-20190125194910-e68493906b83
# [1] git ls-remote https://github.com/erikdubbelboer/gspt e68493906b8382891943ddc9960cb9c6ecd1a1f0
SRCREV_gspt="e68493906b8382891943ddc9960cb9c6ecd1a1f0"
SRC_URI += "git://github.com/erikdubbelboer/gspt;name=gspt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/erikdubbelboer/gspt"

#       github.com/rancher/permissions v0.0.0-20240523180510-4001d3d637f7
# [1] git ls-remote https://github.com/rancher/permissions 4001d3d637f7e7f9aa17c84d89b2462539f1b331
SRCREV_permissions="4001d3d637f7e7f9aa17c84d89b2462539f1b331"
SRC_URI += "git://github.com/rancher/permissions;name=permissions;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rancher/permissions"

#       github.com/rancher/wrangler/v3 v3.2.0-rc.1
# [1] git ls-remote https://github.com/rancher/wrangler abb0081704f3a7af13bf537a281937dadc0e6baa
SRCREV_wrangler-v3="abb0081704f3a7af13bf537a281937dadc0e6baa"
SRC_URI += "git://github.com/rancher/wrangler;name=wrangler-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rancher/wrangler/v3"

#       github.com/vishvananda/netlink v1.3.1-0.20240905180732-b1ce50cfa9be
# [1] git ls-remote https://github.com/vishvananda/netlink b1ce50cfa9bea7652382b8c5ef6083f8d3f5f853
SRCREV_netlink="b1ce50cfa9bea7652382b8c5ef6083f8d3f5f853"
SRC_URI += "git://github.com/vishvananda/netlink;name=netlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vishvananda/netlink"

#       gopkg.in/evanphx/json-patch.v4 v4.12.0
# [1] git ls-remote https://github.com/evanphx/json-patch 50fdc0b4c9ab36933e6a0c9288fef3ac5df2b907
SRCREV_json-patch.v4="50fdc0b4c9ab36933e6a0c9288fef3ac5df2b907"
SRC_URI += "git://github.com/evanphx/json-patch;name=json-patch.v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/evanphx/json-patch.v4"

#       github.com/MakeNowJust/heredoc v1.0.0
# [1] git ls-remote https://github.com/makenowjust/heredoc bbd9af33722b79a933ef99c7c94833065e2d6c20
SRCREV_heredoc="bbd9af33722b79a933ef99c7c94833065e2d6c20"
SRC_URI += "git://github.com/makenowjust/heredoc;name=heredoc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/MakeNowJust/heredoc"

#       github.com/NYTimes/gziphandler v1.1.1
# [1] git ls-remote https://github.com/nytimes/gziphandler dd0439581c7657cb652dfe5c71d7d48baf39541d
SRCREV_gziphandler="dd0439581c7657cb652dfe5c71d7d48baf39541d"
SRC_URI += "git://github.com/nytimes/gziphandler;name=gziphandler;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/NYTimes/gziphandler"

#       github.com/canonical/go-dqlite v1.5.1
# [1] git ls-remote https://github.com/canonical/go-dqlite 830c1a017995b73322e86c2a6f2ca799c1caca07
SRCREV_go-dqlite="830c1a017995b73322e86c2a6f2ca799c1caca07"
SRC_URI += "git://github.com/canonical/go-dqlite;name=go-dqlite;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/canonical/go-dqlite"

#       github.com/cenkalti/backoff/v4 v4.3.0
# [1] git ls-remote https://github.com/cenkalti/backoff 720b78985a65c0452fd37bb155c7cac4157a7c45
SRCREV_backoff-v4="720b78985a65c0452fd37bb155c7cac4157a7c45"
SRC_URI += "git://github.com/cenkalti/backoff;name=backoff-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cenkalti/backoff/v4"

#       github.com/chai2010/gettext-go v1.0.2
# [1] git ls-remote https://github.com/chai2010/gettext-go 274d1753d015d0362761b6a1cc2a572e6a035913
SRCREV_gettext-go="274d1753d015d0362761b6a1cc2a572e6a035913"
SRC_URI += "git://github.com/chai2010/gettext-go;name=gettext-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/chai2010/gettext-go"

#       github.com/containerd/btrfs/v2 v2.0.0
# [1] git ls-remote https://github.com/containerd/btrfs f611cf12b33f43269574b2ad82bcb55e4d6f9982
SRCREV_btrfs-v2="f611cf12b33f43269574b2ad82bcb55e4d6f9982"
SRC_URI += "git://github.com/containerd/btrfs;name=btrfs-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/btrfs/v2"

#       github.com/containerd/imgcrypt v1.1.11
# [1] git ls-remote https://github.com/containerd/imgcrypt 619fd33080b087702c72e93451a698c381d522d0
SRCREV_imgcrypt="619fd33080b087702c72e93451a698c381d522d0"
SRC_URI += "git://github.com/containerd/imgcrypt;name=imgcrypt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/imgcrypt"

#       github.com/containers/ocicrypt v1.2.0
# [1] git ls-remote https://github.com/containers/ocicrypt e26515dd4d77b4d8adbbccb0afb1208bcde8843f
SRCREV_ocicrypt="e26515dd4d77b4d8adbbccb0afb1208bcde8843f"
SRC_URI += "git://github.com/containers/ocicrypt;name=ocicrypt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containers/ocicrypt"

#       github.com/docker/distribution v2.8.3+incompatible
# [1] git ls-remote https://github.com/distribution/distribution 4772604ae973031ab32dd9805a4bccf61d94909f
SRCREV_distribution="4772604ae973031ab32dd9805a4bccf61d94909f"
SRC_URI += "git://github.com/distribution/distribution;name=distribution;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/distribution"

#       github.com/emicklei/go-restful v2.16.0+incompatible
# [1] git ls-remote https://github.com/emicklei/go-restful ac666c045e035603f2704c98c59e979fccbfa94f
SRCREV_go-restful="ac666c045e035603f2704c98c59e979fccbfa94f"
SRC_URI += "git://github.com/emicklei/go-restful;name=go-restful;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/emicklei/go-restful"

#       github.com/go-sql-driver/mysql v1.8.1
# [1] git ls-remote https://github.com/go-sql-driver/mysql 4395c45fd098a81c5251667cda111f94c693ab14
SRCREV_mysql="4395c45fd098a81c5251667cda111f94c693ab14"
SRC_URI += "git://github.com/go-sql-driver/mysql;name=mysql;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-sql-driver/mysql"

#       github.com/gregjones/httpcache v0.0.0-20190611155906-901d90724c79
# [1] git ls-remote https://github.com/gregjones/httpcache 901d90724c7919163f472a9812253fb26761123d
SRCREV_httpcache="901d90724c7919163f472a9812253fb26761123d"
SRC_URI += "git://github.com/gregjones/httpcache;name=httpcache;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gregjones/httpcache"

#       github.com/jackc/pgservicefile v0.0.0-20240606120523-5a60cdf6a761
# [1] git ls-remote https://github.com/jackc/pgservicefile 5a60cdf6a76120dc3d5152b95f3b5fd8aa7cc9eb
SRCREV_pgservicefile="5a60cdf6a76120dc3d5152b95f3b5fd8aa7cc9eb"
SRC_URI += "git://github.com/jackc/pgservicefile;name=pgservicefile;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jackc/pgservicefile"

#       github.com/jonboulle/clockwork v0.4.0
# [1] git ls-remote https://github.com/jonboulle/clockwork 606c48b92358fcca153952b56fb0d14d6845f84a
SRCREV_clockwork="606c48b92358fcca153952b56fb0d14d6845f84a"
SRC_URI += "git://github.com/jonboulle/clockwork;name=clockwork;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jonboulle/clockwork"

#       github.com/libp2p/go-cidranger v1.1.0
# [1] git ls-remote https://github.com/libp2p/go-cidranger 1dec7f87b45b32e24d3f59548ad61647de34586d
SRCREV_go-cidranger="1dec7f87b45b32e24d3f59548ad61647de34586d"
SRC_URI += "git://github.com/libp2p/go-cidranger;name=go-cidranger;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-cidranger"

#       github.com/libp2p/go-reuseport v0.4.0
# [1] git ls-remote https://github.com/libp2p/go-reuseport ac34b4fb35437abcc176b5bb97cc431d62d983e0
SRCREV_go-reuseport="ac34b4fb35437abcc176b5bb97cc431d62d983e0"
SRC_URI += "git://github.com/libp2p/go-reuseport;name=go-reuseport;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-reuseport"

#       github.com/mistifyio/go-zfs/v3 v3.0.1
# [1] git ls-remote https://github.com/mistifyio/go-zfs f6d5c373cf63ae2477370aa9bda9fa49804c2d72
SRCREV_go-zfs-v3="f6d5c373cf63ae2477370aa9bda9fa49804c2d72"
SRC_URI += "git://github.com/mistifyio/go-zfs;name=go-zfs-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mistifyio/go-zfs/v3"

#       github.com/moby/sys/sequential v0.6.0
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_sequential="cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=sequential;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/sequential"

#       github.com/syndtr/gocapability v0.0.0-20200815063812-42c35b437635
# [1] git ls-remote https://github.com/syndtr/gocapability 42c35b4376354fd554efc7ad35e0b7f94e3a0ffb
SRCREV_gocapability="42c35b4376354fd554efc7ad35e0b7f94e3a0ffb"
SRC_URI += "git://github.com/syndtr/gocapability;name=gocapability;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/syndtr/gocapability"

#       github.com/k3s-io/etcd/raft/v3 v3.5.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_raft-v3="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=raft-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/raft/v3"

#       go.opentelemetry.io/otel/trace v1.28.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 81216fb002a6a76d32fdab6ef999bcf65794130d
SRCREV_trace="81216fb002a6a76d32fdab6ef999bcf65794130d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=trace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/trace"

#       go.opentelemetry.io/proto/otlp v1.3.1
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-proto-go a300cca6ca2b6c700b1c0409003751b762e30dea
SRCREV_otlp="a300cca6ca2b6c700b1c0409003751b762e30dea"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-proto-go;name=otlp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/proto/otlp"

#       github.com/natefinch/lumberjack v2.0.0+incompatible
# [1] git ls-remote https://github.com/natefinch/lumberjack 7d6a1875575e09256dc552b4c0e450dcd02bd10e
SRCREV_lumberjack="7d6a1875575e09256dc552b4c0e450dcd02bd10e"
SRC_URI += "git://github.com/natefinch/lumberjack;name=lumberjack;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/natefinch/lumberjack"

#       github.com/rancher/remotedialer v0.4.1
# [1] git ls-remote https://github.com/rancher/remotedialer afe97852fef44f4b9955bd7563021dee52c2061d
SRCREV_remotedialer="afe97852fef44f4b9955bd7563021dee52c2061d"
SRC_URI += "git://github.com/rancher/remotedialer;name=remotedialer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rancher/remotedialer"

#       github.com/containerd/platforms v0.2.1
# [1] git ls-remote https://github.com/containerd/platforms 163df76b7184bb17ead614c92176995ec8fa5919
SRCREV_platforms="163df76b7184bb17ead614c92176995ec8fa5919"
SRC_URI += "git://github.com/containerd/platforms;name=platforms;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/platforms"

#       github.com/davidlazar/go-crypto v0.0.0-20200604182044-b73af7476f6c
# [1] git ls-remote https://github.com/davidlazar/go-crypto b73af7476f6c55b31aa2797d1f98afc94699548d
SRCREV_go-crypto="b73af7476f6c55b31aa2797d1f98afc94699548d"
SRC_URI += "git://github.com/davidlazar/go-crypto;name=go-crypto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/davidlazar/go-crypto"

#       github.com/euank/go-kmsg-parser v2.0.0+incompatible
# [1] git ls-remote https://github.com/euank/go-kmsg-parser 5ba4d492e455a77d25dcf0d2c4acc9f2afebef4e
SRCREV_go-kmsg-parser="5ba4d492e455a77d25dcf0d2c4acc9f2afebef4e"
SRC_URI += "git://github.com/euank/go-kmsg-parser;name=go-kmsg-parser;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/euank/go-kmsg-parser"

#       github.com/exponent-io/jsonpath v0.0.0-20210407135951-1de76d718b3f
# [1] git ls-remote https://github.com/exponent-io/jsonpath 1de76d718b3f2694498041a6e578675bf52cee06
SRCREV_jsonpath="1de76d718b3f2694498041a6e578675bf52cee06"
SRC_URI += "git://github.com/exponent-io/jsonpath;name=jsonpath;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/exponent-io/jsonpath"

#       github.com/hashicorp/go-version v1.7.0
# [1] git ls-remote https://github.com/hashicorp/go-version fcaa53267960208632e9308c93aa89535526a018
SRCREV_go-version="fcaa53267960208632e9308c93aa89535526a018"
SRC_URI += "git://github.com/hashicorp/go-version;name=go-version;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-version"

#       github.com/hashicorp/golang-lru v0.5.4
# [1] git ls-remote https://github.com/hashicorp/golang-lru 14eae340515388ca95aa8e7b86f0de668e981f54
SRCREV_golang-lru="14eae340515388ca95aa8e7b86f0de668e981f54"
SRC_URI += "git://github.com/hashicorp/golang-lru;name=golang-lru;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/golang-lru"

#       github.com/mitchellh/go-homedir v1.1.0
# [1] git ls-remote https://github.com/mitchellh/go-homedir af06845cf3004701891bf4fdb884bfe4920b3727
SRCREV_go-homedir="af06845cf3004701891bf4fdb884bfe4920b3727"
SRC_URI += "git://github.com/mitchellh/go-homedir;name=go-homedir;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/go-homedir"

#       github.com/modern-go/concurrent v0.0.0-20180306012644-bacd9c7ef1dd
# [1] git ls-remote https://github.com/modern-go/concurrent bacd9c7ef1dd9b15be4a9909b8ac7a4e313eec94
SRCREV_concurrent="bacd9c7ef1dd9b15be4a9909b8ac7a4e313eec94"
SRC_URI += "git://github.com/modern-go/concurrent;name=concurrent;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/modern-go/concurrent"

#       github.com/pelletier/go-toml/v2 v2.2.3
# [1] git ls-remote https://github.com/pelletier/go-toml b730b2be5d3ab7283067ddf61188f41cdf42ce06
SRCREV_go-toml-v2="b730b2be5d3ab7283067ddf61188f41cdf42ce06"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pelletier/go-toml/v2"

#       github.com/pquerna/cachecontrol v0.1.0
# [1] git ls-remote https://github.com/pquerna/cachecontrol fb00f8a766ae43bf209f50299ce7d69669416dfb
SRCREV_cachecontrol="fb00f8a766ae43bf209f50299ce7d69669416dfb"
SRC_URI += "git://github.com/pquerna/cachecontrol;name=cachecontrol;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pquerna/cachecontrol"

#       github.com/tchap/go-patricia/v2 v2.3.1
# [1] git ls-remote https://github.com/tchap/go-patricia 5fc88dd7937ad82ca516f7f1f6b2c06dd0180309
SRCREV_go-patricia-v2="5fc88dd7937ad82ca516f7f1f6b2c06dd0180309"
SRC_URI += "git://github.com/tchap/go-patricia;name=go-patricia-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tchap/go-patricia/v2"

#       go.opentelemetry.io/otel/metric v1.28.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 81216fb002a6a76d32fdab6ef999bcf65794130d
SRCREV_metric="81216fb002a6a76d32fdab6ef999bcf65794130d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/metric"

#       github.com/k3s-io/kube-router/v2 v2.2.1
# [1] git ls-remote https://github.com/k3s-io/kube-router 15fd7b0cbfb80056733a9ed27c6d3a6d29fa4637
SRCREV_v2="15fd7b0cbfb80056733a9ed27c6d3a6d29fa4637"
SRC_URI += "git://github.com/k3s-io/kube-router;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kube-router/v2"

#       github.com/containerd/cgroups/v3 v3.0.3
# [1] git ls-remote https://github.com/containerd/cgroups 1e056883d58ac58daf7566065a46016b4532f35c
SRCREV_v3="1e056883d58ac58daf7566065a46016b4532f35c"
SRC_URI += "git://github.com/containerd/cgroups;name=v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/cgroups/v3"

#       github.com/coreos/go-systemd/v22 v22.5.0
# [1] git ls-remote https://github.com/coreos/go-systemd d5623bf85e8e73ae6352f78ee6b55a287619dd4e
SRCREV_v22="d5623bf85e8e73ae6352f78ee6b55a287619dd4e"
SRC_URI += "git://github.com/coreos/go-systemd;name=v22;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-systemd/v22"

#       github.com/go-bindata/go-bindata v3.1.2+incompatible
# [1] git ls-remote https://github.com/go-bindata/go-bindata ff7109080027ec152dabb369e157c4f359b76f31
SRCREV_go-bindata="ff7109080027ec152dabb369e157c4f359b76f31"
SRC_URI += "git://github.com/go-bindata/go-bindata;name=go-bindata;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-bindata/go-bindata"

#       github.com/k3s-io/etcd/client/v3 v3.5.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_client-v3="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=client-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/client/v3"

#       github.com/k3s-io/etcd/server/v3 v3.5.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_server-v3="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=server-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/server/v3"

#       github.com/bahlo/generic-list-go v0.2.0
# [1] git ls-remote https://github.com/bahlo/generic-list-go 89fb9b4cdfd4b5295651f72e9f892f1595b4d6c9
SRCREV_generic-list-go="89fb9b4cdfd4b5295651f72e9f892f1595b4d6c9"
SRC_URI += "git://github.com/bahlo/generic-list-go;name=generic-list-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/bahlo/generic-list-go"

#       github.com/go-task/slim-sprig/v3 v3.0.0
# [1] git ls-remote https://github.com/go-task/slim-sprig b05cce61fffa5c6dea6ac8b9a1f12b6e3fb7c894
SRCREV_slim-sprig-v3="b05cce61fffa5c6dea6ac8b9a1f12b6e3fb7c894"
SRC_URI += "git://github.com/go-task/slim-sprig;name=slim-sprig-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-task/slim-sprig/v3"

#       github.com/wk8/go-ordered-map/v2 v2.1.8
# [1] git ls-remote https://github.com/wk8/go-ordered-map 85ca4a2b29d3241fa4513f82be3d38fe2392a791
SRCREV_go-ordered-map-v2="85ca4a2b29d3241fa4513f82be3d38fe2392a791"
SRC_URI += "git://github.com/wk8/go-ordered-map;name=go-ordered-map-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/wk8/go-ordered-map/v2"

#       github.com/containerd/continuity v0.4.3
# [1] git ls-remote https://github.com/containerd/continuity 1743d9104d944131cdedaba33a59d2f9bd80a6f2
SRCREV_continuity="1743d9104d944131cdedaba33a59d2f9bd80a6f2"
SRC_URI += "git://github.com/containerd/continuity;name=continuity;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/continuity"

#       github.com/containerd/typeurl/v2 v2.2.0
# [1] git ls-remote https://github.com/containerd/typeurl 933576d917b1a9ba697d03d982fb18cb0260e64f
SRCREV_typeurl-v2="933576d917b1a9ba697d03d982fb18cb0260e64f"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/typeurl/v2"

#       github.com/cpuguy83/go-md2man/v2 v2.0.5
# [1] git ls-remote https://github.com/cpuguy83/go-md2man b14773d4db11046c50d0d1c05955839604aae991
SRCREV_go-md2man-v2="b14773d4db11046c50d0d1c05955839604aae991"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=go-md2man-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/docker/go-connections v0.5.0
# [1] git ls-remote https://github.com/docker/go-connections fa09c952e3eadbffaf8afc5b8a1667158ba38ace
SRCREV_go-connections="fa09c952e3eadbffaf8afc5b8a1667158ba38ace"
SRC_URI += "git://github.com/docker/go-connections;name=go-connections;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-connections"

#       github.com/google/gnostic-models v0.6.9
# [1] git ls-remote https://github.com/google/gnostic-models 8182012deeb719be14a1675628e3212ff9948140
SRCREV_gnostic-models="8182012deeb719be14a1675628e3212ff9948140"
SRC_URI += "git://github.com/google/gnostic-models;name=gnostic-models;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/gnostic-models"

#       github.com/libp2p/go-buffer-pool v0.1.0
# [1] git ls-remote https://github.com/libp2p/go-buffer-pool c5070857211a0615ebd7b56588154941af580a4d
SRCREV_go-buffer-pool="c5070857211a0615ebd7b56588154941af580a4d"
SRC_URI += "git://github.com/libp2p/go-buffer-pool;name=go-buffer-pool;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-buffer-pool"

#       github.com/mitchellh/go-wordwrap v1.0.1
# [1] git ls-remote https://github.com/mitchellh/go-wordwrap ecf0936a077a4bd73a1cc2ac5c370f2b55618d62
SRCREV_go-wordwrap="ecf0936a077a4bd73a1cc2ac5c370f2b55618d62"
SRC_URI += "git://github.com/mitchellh/go-wordwrap;name=go-wordwrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/go-wordwrap"

#       github.com/k3s-io/etcd/client/v2 v2.305.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_client-v2="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=client-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/client/v2"

#       gopkg.in/natefinch/lumberjack.v2 v2.2.1
# [1] git ls-remote https://github.com/natefinch/lumberjack 4cb27fcfbb0f35cb48c542c5ea80b7c1d18933d0
SRCREV_lumberjack.v2="4cb27fcfbb0f35cb48c542c5ea80b7c1d18933d0"
SRC_URI += "git://github.com/natefinch/lumberjack;name=lumberjack.v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/natefinch/lumberjack.v2"

#       github.com/k3s-io/helm-controller v0.16.5
# [1] git ls-remote https://github.com/k3s-io/helm-controller 5d91b5fef8482219a93ed6ccfc4ea026431966f8
SRCREV_helm-controller="5d91b5fef8482219a93ed6ccfc4ea026431966f8"
SRC_URI += "git://github.com/k3s-io/helm-controller;name=helm-controller;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/helm-controller"

#       github.com/mwitkow/go-http-dialer v0.0.0-20161116154839-378f744fb2b8
# [1] git ls-remote https://github.com/mwitkow/go-http-dialer 378f744fb2b81a6b96e3f40cde4f3bcab5a9cff0
SRCREV_go-http-dialer="378f744fb2b81a6b96e3f40cde4f3bcab5a9cff0"
SRC_URI += "git://github.com/mwitkow/go-http-dialer;name=go-http-dialer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mwitkow/go-http-dialer"

#       github.com/opencontainers/selinux v1.11.0
# [1] git ls-remote https://github.com/opencontainers/selinux b68c45eb2df48c6b0c949901ccda90c8e65fe677
SRCREV_selinux="b68c45eb2df48c6b0c949901ccda90c8e65fe677"
SRC_URI += "git://github.com/opencontainers/selinux;name=selinux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/selinux"

#       github.com/k3s-io/etcd/etcdutl/v3 v3.5.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_etcdutl-v3="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=etcdutl-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/etcdutl/v3"

#       github.com/asaskevich/govalidator v0.0.0-20230301143203-a9d515a09cc2
# [1] git ls-remote https://github.com/asaskevich/govalidator a9d515a09cc289c60d55064edec5ef189859f172
SRCREV_govalidator="a9d515a09cc289c60d55064edec5ef189859f172"
SRC_URI += "git://github.com/asaskevich/govalidator;name=govalidator;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/asaskevich/govalidator"

#       github.com/containerd/errdefs/pkg v0.3.0
# [1] git ls-remote https://github.com/containerd/errdefs 4817405e4a3caeb7aee9dac68ed55339c59cb635
SRCREV_pkg="4817405e4a3caeb7aee9dac68ed55339c59cb635"
SRC_URI += "git://github.com/containerd/errdefs;name=pkg;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/errdefs/pkg"

#       github.com/distribution/reference v0.5.0
# [1] git ls-remote https://github.com/distribution/reference 49c28499d219290c3226822e9cfcd4ede6d75379
SRCREV_reference="49c28499d219290c3226822e9cfcd4ede6d75379"
SRC_URI += "git://github.com/distribution/reference;name=reference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/distribution/reference"

#       github.com/emicklei/go-restful/v3 v3.11.0
# [1] git ls-remote https://github.com/emicklei/go-restful 30bec7807481e62e1e1e59ad57e7f22054806966
SRCREV_go-restful-v3="30bec7807481e62e1e1e59ad57e7f22054806966"
SRC_URI += "git://github.com/emicklei/go-restful;name=go-restful-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/emicklei/go-restful/v3"

#       github.com/go-openapi/jsonpointer v0.21.0
# [1] git ls-remote https://github.com/go-openapi/jsonpointer 8b546b950409bd7b131488a88613339cd8937b7f
SRCREV_jsonpointer="8b546b950409bd7b131488a88613339cd8937b7f"
SRC_URI += "git://github.com/go-openapi/jsonpointer;name=jsonpointer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-openapi/jsonpointer"

#       github.com/hashicorp/go-cleanhttp v0.5.2
# [1] git ls-remote https://github.com/hashicorp/go-cleanhttp 6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2
SRCREV_go-cleanhttp="6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2"
SRC_URI += "git://github.com/hashicorp/go-cleanhttp;name=go-cleanhttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-cleanhttp"

#       github.com/libp2p/go-flow-metrics v0.1.0
# [1] git ls-remote https://github.com/libp2p/go-flow-metrics 3f13d05958e2d1be0245aed1bdb38f9ff1b4efdc
SRCREV_go-flow-metrics="3f13d05958e2d1be0245aed1bdb38f9ff1b4efdc"
SRC_URI += "git://github.com/libp2p/go-flow-metrics;name=go-flow-metrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-flow-metrics"

#       github.com/multiformats/go-base32 v0.1.0
# [1] git ls-remote https://github.com/multiformats/go-base32 a16b66327f327428b32b919939b8c93482507e1f
SRCREV_go-base32="a16b66327f327428b32b919939b8c93482507e1f"
SRC_URI += "git://github.com/multiformats/go-base32;name=go-base32;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-base32"

#       github.com/multiformats/go-base36 v0.2.0
# [1] git ls-remote https://github.com/multiformats/go-base36 da52c98bb97cfaa321be04030bc97dcee7de63ff
SRCREV_go-base36="da52c98bb97cfaa321be04030bc97dcee7de63ff"
SRC_URI += "git://github.com/multiformats/go-base36;name=go-base36;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-base36"

#       github.com/multiformats/go-varint v0.0.7
# [1] git ls-remote https://github.com/multiformats/go-varint 8c8129accb08fc978bb276c81d568c41eafdd48f
SRCREV_go-varint="8c8129accb08fc978bb276c81d568c41eafdd48f"
SRC_URI += "git://github.com/multiformats/go-varint;name=go-varint;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-varint"

#       github.com/nats-io/nats-server/v2 v2.10.12
# [1] git ls-remote https://github.com/nats-io/nats-server 121169ea86756a853a418446b9c7591df761b49d
SRCREV_nats-server-v2="121169ea86756a853a418446b9c7591df761b49d"
SRC_URI += "git://github.com/nats-io/nats-server;name=nats-server-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/nats-io/nats-server/v2"

#       golang.zx2c4.com/wireguard/wgctrl v0.0.0-20230429144221-925a1e7659e6
# [1] git ls-remote https://github.com/WireGuard/wgctrl-go 925a1e7659e675c94c1a659d39daa9141e450c7d
SRCREV_wgctrl="925a1e7659e675c94c1a659d39daa9141e450c7d"
SRC_URI += "git://github.com/WireGuard/wgctrl-go;name=wgctrl;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.zx2c4.com/wireguard/wgctrl"

#       github.com/rancher/dynamiclistener v0.6.0-rc1
# [1] git ls-remote https://github.com/rancher/dynamiclistener e507a7ad34db756ef1aad65fa2afa31a486c8e6f
SRCREV_dynamiclistener="e507a7ad34db756ef1aad65fa2afa31a486c8e6f"
SRC_URI += "git://github.com/rancher/dynamiclistener;name=dynamiclistener;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rancher/dynamiclistener"

#       github.com/containernetworking/cni v1.2.3
# [1] git ls-remote https://github.com/containernetworking/cni 309b6bbc17b2cd9eb9c26a46977ba1f1f5f032a4
SRCREV_cni="309b6bbc17b2cd9eb9c26a46977ba1f1f5f032a4"
SRC_URI += "git://github.com/containernetworking/cni;name=cni;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/cni"

#       github.com/hashicorp/go-multierror v1.1.1
# [1] git ls-remote https://github.com/hashicorp/go-multierror 9974e9ec57696378079ecc3accd3d6f29401b3a0
SRCREV_go-multierror="9974e9ec57696378079ecc3accd3d6f29401b3a0"
SRC_URI += "git://github.com/hashicorp/go-multierror;name=go-multierror;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-multierror"

#       github.com/hashicorp/golang-lru/v2 v2.0.7
# [1] git ls-remote https://github.com/hashicorp/golang-lru d8515860cebc7b25ff2d29fada3f10a43611c28b
SRCREV_golang-lru-v2="d8515860cebc7b25ff2d29fada3f10a43611c28b"
SRC_URI += "git://github.com/hashicorp/golang-lru;name=golang-lru-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/golang-lru/v2"

#       github.com/libp2p/go-libp2p-record v0.2.0
# [1] git ls-remote https://github.com/libp2p/go-libp2p-record 90bb9b0e21ffe5e9a5f1af1c1e8cc6d9a0fce24c
SRCREV_go-libp2p-record="90bb9b0e21ffe5e9a5f1af1c1e8cc6d9a0fce24c"
SRC_URI += "git://github.com/libp2p/go-libp2p-record;name=go-libp2p-record;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-libp2p-record"

#       github.com/prometheus/client_model v0.6.1
# [1] git ls-remote https://github.com/prometheus/client_model 571429e996ba2d9499e3dcb12926767ba953c0ef
SRCREV_client_model="571429e996ba2d9499e3dcb12926767ba953c0ef"
SRC_URI += "git://github.com/prometheus/client_model;name=client_model;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/client_model"

#       github.com/quic-go/webtransport-go v0.6.0
# [1] git ls-remote https://github.com/quic-go/webtransport-go 3697690b8131a891190093bd6d10ca6e3906a620
SRCREV_webtransport-go="3697690b8131a891190093bd6d10ca6e3906a620"
SRC_URI += "git://github.com/quic-go/webtransport-go;name=webtransport-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/quic-go/webtransport-go"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2="4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/russross/blackfriday/v2"

#       sigs.k8s.io/kustomize/kustomize/v5 v5.5.0
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize afe77936761f8f7ee735a67f167a8382c8406f74
SRCREV_kustomize-v5="afe77936761f8f7ee735a67f167a8382c8406f74"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kustomize-v5;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/kustomize/kustomize/v5"

#       github.com/prometheus/client_golang v1.19.1
# [1] git ls-remote https://github.com/prometheus/client_golang 6e3f4b1091875216850a486b1c2eb0e5ea852f98
SRCREV_client_golang="6e3f4b1091875216850a486b1c2eb0e5ea852f98"
SRC_URI += "git://github.com/prometheus/client_golang;name=client_golang;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/client_golang"

#       github.com/go-openapi/jsonreference v0.21.0
# [1] git ls-remote https://github.com/go-openapi/jsonreference c5fa756d84ccb15425cb8664d142ad550fe58b1b
SRCREV_jsonreference="c5fa756d84ccb15425cb8664d142ad550fe58b1b"
SRC_URI += "git://github.com/go-openapi/jsonreference;name=jsonreference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-openapi/jsonreference"

#       github.com/libp2p/go-libp2p-kad-dht v0.25.2
# [1] git ls-remote https://github.com/libp2p/go-libp2p-kad-dht bdca14419ec5f7ad0790f17856964bb99bee7436
SRCREV_go-libp2p-kad-dht="bdca14419ec5f7ad0790f17856964bb99bee7436"
SRC_URI += "git://github.com/libp2p/go-libp2p-kad-dht;name=go-libp2p-kad-dht;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-libp2p-kad-dht"

#       github.com/libp2p/go-libp2p-kbucket v0.6.3
# [1] git ls-remote https://github.com/libp2p/go-libp2p-kbucket 437b9fccd6a22835a67b8fe2a5eae0b92f307224
SRCREV_go-libp2p-kbucket="437b9fccd6a22835a67b8fe2a5eae0b92f307224"
SRC_URI += "git://github.com/libp2p/go-libp2p-kbucket;name=go-libp2p-kbucket;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-libp2p-kbucket"

#       github.com/opencontainers/go-digest v1.0.0
# [1] git ls-remote https://github.com/opencontainers/go-digest ea51bea511f75cfa3ef6098cc253c5c3609b037a
SRCREV_go-digest="ea51bea511f75cfa3ef6098cc253c5c3609b037a"
SRC_URI += "git://github.com/opencontainers/go-digest;name=go-digest;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/go-digest"

#       github.com/tmc/grpc-websocket-proxy v0.0.0-20220101234140-673ab2c3ae75
# [1] git ls-remote https://github.com/tmc/grpc-websocket-proxy 673ab2c3ae75cc01952b84b88590e30e75dcf395
SRCREV_grpc-websocket-proxy="673ab2c3ae75cc01952b84b88590e30e75dcf395"
SRC_URI += "git://github.com/tmc/grpc-websocket-proxy;name=grpc-websocket-proxy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tmc/grpc-websocket-proxy"

#       github.com/k3s-io/etcd/client/pkg/v3 v3.5.16-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd d294136463b074a18c1512967343ffd7ba582ee8
SRCREV_pkg-v3="d294136463b074a18c1512967343ffd7ba582ee8"
SRC_URI += "git://github.com/k3s-io/etcd;name=pkg-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/etcd/client/pkg/v3"

#       github.com/AdaLogics/go-fuzz-headers v0.0.0-20230811130428-ced1acdcaa24
# [1] git ls-remote https://github.com/AdaLogics/go-fuzz-headers ced1acdcaa24dc39c01b039fc37576c395f506cf
SRCREV_go-fuzz-headers="ced1acdcaa24dc39c01b039fc37576c395f506cf"
SRC_URI += "git://github.com/AdaLogics/go-fuzz-headers;name=go-fuzz-headers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AdaLogics/go-fuzz-headers"

#       github.com/containerd/containerd/api v1.8.0-rc.3
# [1] git ls-remote https://github.com/containerd/containerd e8104a48588446fe7e93e2eab5124145c1366cd0
SRCREV_containerd-api="e8104a48588446fe7e93e2eab5124145c1366cd0"
SRC_URI += "git://github.com/containerd/containerd;name=containerd-api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/containerd/api"

#       github.com/inconshreveable/mousetrap v1.1.0
# [1] git ls-remote https://github.com/inconshreveable/mousetrap 4e8053ee7ef85a6bd26368364a6d27f1641c1d21
SRCREV_mousetrap="4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/inconshreveable/mousetrap"

#       github.com/libp2p/go-libp2p-asn-util v0.4.1
# [1] git ls-remote https://github.com/libp2p/go-libp2p-asn-util 3ec6bf02c86c57c28d29b2963a9d7b9d6d74bfb2
SRCREV_go-libp2p-asn-util="3ec6bf02c86c57c28d29b2963a9d7b9d6d74bfb2"
SRC_URI += "git://github.com/libp2p/go-libp2p-asn-util;name=go-libp2p-asn-util;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-libp2p-asn-util"

#       github.com/multiformats/go-multiaddr v0.12.3
# [1] git ls-remote https://github.com/multiformats/go-multiaddr cece70d472926ca09b0eca7aca63224653d1de69
SRCREV_go-multiaddr="cece70d472926ca09b0eca7aca63224653d1de69"
SRC_URI += "git://github.com/multiformats/go-multiaddr;name=go-multiaddr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multiaddr"

#       github.com/multiformats/go-multibase v0.2.0
# [1] git ls-remote https://github.com/multiformats/go-multibase 58a41f7df1d82d16599e259325b3337d69f70e3b
SRCREV_go-multibase="58a41f7df1d82d16599e259325b3337d69f70e3b"
SRC_URI += "git://github.com/multiformats/go-multibase;name=go-multibase;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multibase"

#       github.com/multiformats/go-multihash v0.2.3
# [1] git ls-remote https://github.com/multiformats/go-multihash ff9da31500dddfc675e996601a05cdfc3ce7c764
SRCREV_go-multihash="ff9da31500dddfc675e996601a05cdfc3ce7c764"
SRC_URI += "git://github.com/multiformats/go-multihash;name=go-multihash;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multihash"

#       github.com/opencontainers/image-spec v1.1.0
# [1] git ls-remote https://github.com/opencontainers/image-spec e7f7c0ca69b21688c3cea7c87a04e4503e6099e2
SRCREV_image-spec="e7f7c0ca69b21688c3cea7c87a04e4503e6099e2"
SRC_URI += "git://github.com/opencontainers/image-spec;name=image-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/image-spec"

#       github.com/stefanberger/go-pkcs11uri v0.0.0-20230803200340-78284954bff6
# [1] git ls-remote https://github.com/stefanberger/go-pkcs11uri 78284954bff6dcce7888166bb79bbba93bea0879
SRCREV_go-pkcs11uri="78284954bff6dcce7888166bb79bbba93bea0879"
SRC_URI += "git://github.com/stefanberger/go-pkcs11uri;name=go-pkcs11uri;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stefanberger/go-pkcs11uri"

#       github.com/whyrusleeping/go-keyspace v0.0.0-20160322163242-5b898ac5add1
# [1] git ls-remote https://github.com/whyrusleeping/go-keyspace 5b898ac5add1da7178a4a98e69cb7b9205c085ee
SRCREV_go-keyspace="5b898ac5add1da7178a4a98e69cb7b9205c085ee"
SRC_URI += "git://github.com/whyrusleeping/go-keyspace;name=go-keyspace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/whyrusleeping/go-keyspace"

#       sigs.k8s.io/structured-merge-diff/v4 v4.4.3
# [1] git ls-remote https://github.com/kubernetes-sigs/structured-merge-diff db46cc3084b4575e65498a0dc7389fe7eaa15a35
SRCREV_structured-merge-diff-v4="db46cc3084b4575e65498a0dc7389fe7eaa15a35"
SRC_URI += "git://github.com/kubernetes-sigs/structured-merge-diff;name=structured-merge-diff-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/structured-merge-diff/v4"

#       github.com/cyphar/filepath-securejoin v0.3.4
# [1] git ls-remote https://github.com/cyphar/filepath-securejoin fd16ade2aea75ef1ad2b9e8144316f1931bd2df3
SRCREV_filepath-securejoin="fd16ade2aea75ef1ad2b9e8144316f1931bd2df3"
SRC_URI += "git://github.com/cyphar/filepath-securejoin;name=filepath-securejoin;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cyphar/filepath-securejoin"

#       github.com/hashicorp/go-retryablehttp v0.7.7
# [1] git ls-remote https://github.com/hashicorp/go-retryablehttp 1542b31176d3973a6ecbc06c05a2d0df89b59afb
SRCREV_go-retryablehttp="1542b31176d3973a6ecbc06c05a2d0df89b59afb"
SRC_URI += "git://github.com/hashicorp/go-retryablehttp;name=go-retryablehttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-retryablehttp"

#       github.com/jbenet/go-temp-err-catcher v0.1.0
# [1] git ls-remote https://github.com/jbenet/go-temp-err-catcher fa11adda5e7cccb838a208007c9ea79dda63c0c0
SRCREV_go-temp-err-catcher="fa11adda5e7cccb838a208007c9ea79dda63c0c0"
SRC_URI += "git://github.com/jbenet/go-temp-err-catcher;name=go-temp-err-catcher;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/jbenet/go-temp-err-catcher"

#       github.com/libopenstorage/openstorage v1.0.0
# [1] git ls-remote https://github.com/libopenstorage/openstorage 093a0c3888753c2056e7373183693d670c6bba01
SRCREV_openstorage="093a0c3888753c2056e7373183693d670c6bba01"
SRC_URI += "git://github.com/libopenstorage/openstorage;name=openstorage;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libopenstorage/openstorage"

#       github.com/multiformats/go-multicodec v0.9.0
# [1] git ls-remote https://github.com/multiformats/go-multicodec b8b4bf5270f9f220f00bcdeddf1641b13e67cc0b
SRCREV_go-multicodec="b8b4bf5270f9f220f00bcdeddf1641b13e67cc0b"
SRC_URI += "git://github.com/multiformats/go-multicodec;name=go-multicodec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multicodec"

#       github.com/opentracing/opentracing-go v1.2.0
# [1] git ls-remote https://github.com/opentracing/opentracing-go d34af3eaa63c4d08ab54863a4bdd0daa45212e12
SRCREV_opentracing-go="d34af3eaa63c4d08ab54863a4bdd0daa45212e12"
SRC_URI += "git://github.com/opentracing/opentracing-go;name=opentracing-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opentracing/opentracing-go"

#       github.com/AdamKorcz/go-118-fuzz-build v0.0.0-20230306123547-8075edf89bb0
# [1] git ls-remote https://github.com/AdamKorcz/go-118-fuzz-build 8075edf89bb034603c758f28fe93143047ac5677
SRCREV_go-118-fuzz-build="8075edf89bb034603c758f28fe93143047ac5677"
SRC_URI += "git://github.com/AdamKorcz/go-118-fuzz-build;name=go-118-fuzz-build;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AdamKorcz/go-118-fuzz-build"

#       github.com/bronze1man/goStrongswanVici v0.0.0-20231128135937-211cef3b0b20
# [1] git ls-remote https://github.com/bronze1man/goStrongswanVici 211cef3b0b20c5c00c0ad49f7b4ccb78c06eee58
SRCREV_goStrongswanVici="211cef3b0b20c5c00c0ad49f7b4ccb78c06eee58"
SRC_URI += "git://github.com/bronze1man/goStrongswanVici;name=goStrongswanVici;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/bronze1man/goStrongswanVici"

#       github.com/containernetworking/plugins v1.5.1
# [1] git ls-remote https://github.com/containernetworking/plugins c29dc79f96cd50452a247a4591443d2aac033429
SRCREV_plugins="c29dc79f96cd50452a247a4591443d2aac033429"
SRC_URI += "git://github.com/containernetworking/plugins;name=plugins;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/plugins"

#       github.com/google/go-containerregistry v0.20.2
# [1] git ls-remote https://github.com/google/go-containerregistry c195f151efe3369874c72662cd69ad43ee485128
SRCREV_go-containerregistry="c195f151efe3369874c72662cd69ad43ee485128"
SRC_URI += "git://github.com/google/go-containerregistry;name=go-containerregistry;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-containerregistry"

#       github.com/grpc-ecosystem/grpc-gateway v1.16.0
# [1] git ls-remote https://github.com/grpc-ecosystem/grpc-gateway 094a6fe78b3ca888297d090185cdf30f0e42e157
SRCREV_grpc-gateway="094a6fe78b3ca888297d090185cdf30f0e42e157"
SRC_URI += "git://github.com/grpc-ecosystem/grpc-gateway;name=grpc-gateway;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/grpc-ecosystem/grpc-gateway"

#       github.com/hashicorp/golang-lru/arc/v2 v2.0.5
# [1] git ls-remote https://github.com/hashicorp/golang-lru 3afaa48530f711754c178ceb61ff060d86c17b95
SRCREV_arc-v2="3afaa48530f711754c178ceb61ff060d86c17b95"
SRC_URI += "git://github.com/hashicorp/golang-lru;name=arc-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/golang-lru/arc/v2"

#       github.com/monochromegane/go-gitignore v0.0.0-20200626010858-205db1a8cc00
# [1] git ls-remote https://github.com/monochromegane/go-gitignore 205db1a8cc001de79230472da52edde4974df734
SRCREV_go-gitignore="205db1a8cc001de79230472da52edde4974df734"
SRC_URI += "git://github.com/monochromegane/go-gitignore;name=go-gitignore;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/monochromegane/go-gitignore"

#       github.com/multiformats/go-multistream v0.5.0
# [1] git ls-remote https://github.com/multiformats/go-multistream 8fabf3a244c16743222174f11b43cf4a47c6d5e8
SRCREV_go-multistream="8fabf3a244c16743222174f11b43cf4a47c6d5e8"
SRC_URI += "git://github.com/multiformats/go-multistream;name=go-multistream;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multistream"

#       github.com/opencontainers/runtime-spec v1.2.0
# [1] git ls-remote https://github.com/opencontainers/runtime-spec 36852b0d072a4b5da675300a9e73bc4b0853f5c6
SRCREV_runtime-spec="36852b0d072a4b5da675300a9e73bc4b0853f5c6"
SRC_URI += "git://github.com/opencontainers/runtime-spec;name=runtime-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/runtime-spec"

#       github.com/opencontainers/runtime-tools v0.9.1-0.20221107090550-2e043c6bd626
# [1] git ls-remote https://github.com/opencontainers/runtime-tools 2e043c6bd62639199bdd0d5f0c5082797de4de2a
SRCREV_runtime-tools="2e043c6bd62639199bdd0d5f0c5082797de4de2a"
SRC_URI += "git://github.com/opencontainers/runtime-tools;name=runtime-tools;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/runtime-tools"

#       tags.cncf.io/container-device-interface v0.8.0
# [1] git ls-remote https://github.com/cncf-tags/container-device-interface e66544063aa7760c4ea6330ce9e6c757f8e61df2
SRCREV_container-device-interface="e66544063aa7760c4ea6330ce9e6c757f8e61df2"
SRC_URI += "git://github.com/cncf-tags/container-device-interface;name=container-device-interface;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/tags.cncf.io/container-device-interface"

#       github.com/containerd/stargz-snapshotter v0.15.1
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 64ab83bd65cd4a763e262955984232cc5ddfeb3f
SRCREV_stargz-snapshotter="64ab83bd65cd4a763e262955984232cc5ddfeb3f"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=stargz-snapshotter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter"

#       github.com/multiformats/go-multiaddr-dns v0.3.1
# [1] git ls-remote https://github.com/multiformats/go-multiaddr-dns 448c10b622b0c09ce6834487156c1fd9a65f1597
SRCREV_go-multiaddr-dns="448c10b622b0c09ce6834487156c1fd9a65f1597"
SRC_URI += "git://github.com/multiformats/go-multiaddr-dns;name=go-multiaddr-dns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multiaddr-dns"

#       github.com/multiformats/go-multiaddr-fmt v0.1.0
# [1] git ls-remote https://github.com/multiformats/go-multiaddr-fmt 113ed87ed03cfff94f29fd95236be3ccd933fd36
SRCREV_go-multiaddr-fmt="113ed87ed03cfff94f29fd95236be3ccd933fd36"
SRC_URI += "git://github.com/multiformats/go-multiaddr-fmt;name=go-multiaddr-fmt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multiaddr-fmt"

#       github.com/decred/dcrd/dcrec/secp256k1/v4 v4.2.0
# [1] git ls-remote https://github.com/decred/dcrd bacf8444a8bc79178f9eb2c65477ab6df01a6439
SRCREV_secp256k1-v4="bacf8444a8bc79178f9eb2c65477ab6df01a6439"
SRC_URI += "git://github.com/decred/dcrd;name=secp256k1-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/decred/dcrd/dcrec/secp256k1/v4"

#       github.com/grpc-ecosystem/grpc-gateway/v2 v2.20.0
# [1] git ls-remote https://github.com/grpc-ecosystem/grpc-gateway 2da4beb003329d83c74a52d66a009110ef1fd180
SRCREV_grpc-gateway-v2="2da4beb003329d83c74a52d66a009110ef1fd180"
SRC_URI += "git://github.com/grpc-ecosystem/grpc-gateway;name=grpc-gateway-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/grpc-ecosystem/grpc-gateway/v2"

#       google.golang.org/genproto/googleapis/api v0.0.0-20240903143218-8af14fe29dc1
# [1] git ls-remote https://github.com/googleapis/go-genproto 8af14fe29dc178f8f16f3720e1da949120cecbeb
SRCREV_googleapis-api="8af14fe29dc178f8f16f3720e1da949120cecbeb"
SRC_URI += "git://github.com/googleapis/go-genproto;name=googleapis-api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/api"

#       google.golang.org/genproto/googleapis/rpc v0.0.0-20240903143218-8af14fe29dc1
# [1] git ls-remote https://github.com/googleapis/go-genproto 8af14fe29dc178f8f16f3720e1da949120cecbeb
SRCREV_rpc="8af14fe29dc178f8f16f3720e1da949120cecbeb"
SRC_URI += "git://github.com/googleapis/go-genproto;name=rpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/rpc"

#       github.com/rootless-containers/rootlesskit v1.0.1
# [1] git ls-remote https://github.com/rootless-containers/rootlesskit 5d5f4c0c26e26a6b51d1838c23e793e5836442d0
SRCREV_rootlesskit="5d5f4c0c26e26a6b51d1838c23e793e5836442d0"
SRC_URI += "git://github.com/rootless-containers/rootlesskit;name=rootlesskit;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rootless-containers/rootlesskit"

#       github.com/container-storage-interface/spec v1.9.0
# [1] git ls-remote https://github.com/container-storage-interface/spec 80d53107c70981b9da8aaf9cd1c90249562b22f0
SRCREV_spec="80d53107c70981b9da8aaf9cd1c90249562b22f0"
SRC_URI += "git://github.com/container-storage-interface/spec;name=spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/container-storage-interface/spec"

#       github.com/docker/docker-credential-helpers v0.7.0
# [1] git ls-remote https://github.com/docker/docker-credential-helpers ac5992b5f4756fc0398a7d0c93c609e624368bde
SRCREV_docker-credential-helpers="ac5992b5f4756fc0398a7d0c93c609e624368bde"
SRC_URI += "git://github.com/docker/docker-credential-helpers;name=docker-credential-helpers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker-credential-helpers"

#       github.com/libp2p/go-libp2p-routing-helpers v0.7.2
# [1] git ls-remote https://github.com/libp2p/go-libp2p-routing-helpers 71d7c965185ed346e39cc26140ac49ea13b2222f
SRCREV_go-libp2p-routing-helpers="71d7c965185ed346e39cc26140ac49ea13b2222f"
SRC_URI += "git://github.com/libp2p/go-libp2p-routing-helpers;name=go-libp2p-routing-helpers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/libp2p/go-libp2p-routing-helpers"

#       github.com/grpc-ecosystem/go-grpc-middleware v1.3.0
# [1] git ls-remote https://github.com/grpc-ecosystem/go-grpc-middleware df0f91b29bbbdfc3a686a7a8edbe2b9de2072fdd
SRCREV_go-grpc-middleware="df0f91b29bbbdfc3a686a7a8edbe2b9de2072fdd"
SRC_URI += "git://github.com/grpc-ecosystem/go-grpc-middleware;name=go-grpc-middleware;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/grpc-ecosystem/go-grpc-middleware"

#       github.com/grpc-ecosystem/go-grpc-prometheus v1.2.0
# [1] git ls-remote https://github.com/grpc-ecosystem/go-grpc-prometheus c225b8c3b01faf2899099b768856a9e916e5087b
SRCREV_go-grpc-prometheus="c225b8c3b01faf2899099b768856a9e916e5087b"
SRC_URI += "git://github.com/grpc-ecosystem/go-grpc-prometheus;name=go-grpc-prometheus;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/grpc-ecosystem/go-grpc-prometheus"

#       github.com/containerd/fuse-overlayfs-snapshotter v1.0.8
# [1] git ls-remote https://github.com/containerd/fuse-overlayfs-snapshotter c54d1c1d71bd1cdc25bbae89208bea0267858ae9
SRCREV_fuse-overlayfs-snapshotter="c54d1c1d71bd1cdc25bbae89208bea0267858ae9"
SRC_URI += "git://github.com/containerd/fuse-overlayfs-snapshotter;name=fuse-overlayfs-snapshotter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/fuse-overlayfs-snapshotter"

#       github.com/containerd/stargz-snapshotter/estargz v0.15.1
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 64ab83bd65cd4a763e262955984232cc5ddfeb3f
SRCREV_estargz="64ab83bd65cd4a763e262955984232cc5ddfeb3f"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=estargz;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter/estargz"

#       tags.cncf.io/container-device-interface/specs-go v0.8.0
# [1] git ls-remote https://github.com/cncf-tags/container-device-interface e66544063aa7760c4ea6330ce9e6c757f8e61df2
SRCREV_specs-go="e66544063aa7760c4ea6330ce9e6c757f8e61df2"
SRC_URI += "git://github.com/cncf-tags/container-device-interface;name=specs-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/tags.cncf.io/container-device-interface/specs-go"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace v1.28.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 81216fb002a6a76d32fdab6ef999bcf65794130d
SRCREV_otlptrace="81216fb002a6a76d32fdab6ef999bcf65794130d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptrace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/api v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_api="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/api"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kms v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kms="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kms;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kms"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cri-api v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_cri-api="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cri-api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cri-api"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kubectl v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kubectl="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubectl;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kubectl"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kubelet v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kubelet="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubelet;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kubelet"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/metrics v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_metrics="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=metrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/metrics"

#       sigs.k8s.io/apiserver-network-proxy/konnectivity-client v0.31.0
# [1] git ls-remote https://github.com/kubernetes-sigs/apiserver-network-proxy 14f752ee8cf2f38727b6dddf7e0906dbce5bf4c1
SRCREV_konnectivity-client="14f752ee8cf2f38727b6dddf7e0906dbce5bf4c1"
SRC_URI += "git://github.com/kubernetes-sigs/apiserver-network-proxy;name=konnectivity-client;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/sigs.k8s.io/apiserver-network-proxy/konnectivity-client"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apiserver v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_apiserver="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apiserver;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apiserver"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/client-go v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_client-go="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=client-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/client-go"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-proxy v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kube-proxy="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-proxy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-proxy"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cli-runtime v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_cli-runtime="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cli-runtime;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cli-runtime"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/externaljwt v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_externaljwt="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=externaljwt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/externaljwt"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/mount-utils v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_mount-utils="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=mount-utils;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/mount-utils"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apimachinery v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_apimachinery="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apimachinery;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apimachinery"

#       go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp v0.53.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib af75717ac4fb3ba13eaea83b88301723122060cf
SRCREV_otelhttp="af75717ac4fb3ba13eaea83b88301723122060cf"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/endpointslice v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_endpointslice="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=endpointslice;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/endpointslice"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cloud-provider v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_cloud-provider="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cloud-provider;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cloud-provider"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/component-base v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_component-base="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=component-base;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/component-base"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/code-generator v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_code-generator="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=code-generator;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/code-generator"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-scheduler v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kube-scheduler="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-scheduler;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-scheduler"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc v1.28.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 81216fb002a6a76d32fdab6ef999bcf65794130d
SRCREV_otlptracegrpc="81216fb002a6a76d32fdab6ef999bcf65794130d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptracegrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp v1.28.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 81216fb002a6a76d32fdab6ef999bcf65794130d
SRCREV_otlptracehttp="81216fb002a6a76d32fdab6ef999bcf65794130d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptracehttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-aggregator v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kube-aggregator="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-aggregator;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-aggregator"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cluster-bootstrap v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_cluster-bootstrap="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cluster-bootstrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cluster-bootstrap"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/component-helpers v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_component-helpers="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=component-helpers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/component-helpers"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/controller-manager v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_controller-manager="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=controller-manager;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/controller-manager"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/csi-translation-lib v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_csi-translation-lib="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=csi-translation-lib;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/csi-translation-lib"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/pod-security-admission v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_pod-security-admission="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=pod-security-admission;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/pod-security-admission"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apiextensions-apiserver v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_apiextensions-apiserver="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apiextensions-apiserver;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apiextensions-apiserver"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-controller-manager v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_kube-controller-manager="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-controller-manager;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-controller-manager"

#       go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc v0.53.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib af75717ac4fb3ba13eaea83b88301723122060cf
SRCREV_otelgrpc="af75717ac4fb3ba13eaea83b88301723122060cf"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelgrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/dynamic-resource-allocation v1.32.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 39f4707c882be87eb91cef02d669a5b584923fe7
SRCREV_dynamic-resource-allocation="39f4707c882be87eb91cef02d669a5b584923fe7"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=dynamic-resource-allocation;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/dynamic-resource-allocation"

#       go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful v0.44.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib fdfa6e3abf03caa6a1d3267913e01526d97eab8a
SRCREV_otelrestful="fdfa6e3abf03caa6a1d3267913e01526d97eab8a"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelrestful;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful"

