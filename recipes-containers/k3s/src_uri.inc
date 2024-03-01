#       k8s.io/utils v0.0.0-20230726121419-3b25d923346b
# [1] git ls-remote https://github.com/kubernetes/utils 3b25d923346b3814e0898684c97390092f31a61e
SRCREV_utils="3b25d923346b3814e0898684c97390092f31a61e"
SRC_URI += "git://github.com/kubernetes/utils;name=utils;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/k8s.io/utils"

#       k8s.io/gengo v0.0.0-20230829151522-9cce18d56c01
# [1] git ls-remote https://github.com/kubernetes/gengo 9cce18d56c01fab1d8ed72411ad6ef7005fc33a4
SRCREV_gengo="9cce18d56c01fab1d8ed72411ad6ef7005fc33a4"
SRC_URI += "git://github.com/kubernetes/gengo;name=gengo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/k8s.io/gengo"

#       go.uber.org/fx v1.20.0
# [1] git ls-remote https://github.com/uber-go/fx 1320bc693745e5e7c08c29843de3d7915cac826c
SRCREV_fx="1320bc693745e5e7c08c29843de3d7915cac826c"
SRC_URI += "git://github.com/uber-go/fx;name=fx;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.uber.org/fx"

#       go.uber.org/zap v1.26.0
# [1] git ls-remote https://github.com/uber-go/zap 96038b71a7d96b8c14fedb3aeddcb3d0d7605b2d
SRCREV_zap="96038b71a7d96b8c14fedb3aeddcb3d0d7605b2d"
SRC_URI += "git://github.com/uber-go/zap;name=zap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.uber.org/zap"

#       go.uber.org/dig v1.17.0
# [1] git ls-remote https://github.com/uber-go/dig a8b6f0db4f27681ad7233eed1bda9d5c69881f5b
SRCREV_dig="a8b6f0db4f27681ad7233eed1bda9d5c69881f5b"
SRC_URI += "git://github.com/uber-go/dig;name=dig;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.uber.org/dig"

#       go.starlark.net v0.0.0-20230525235612-a134d8f9ddca
# [1] git ls-remote https://github.com/google/starlark-go a134d8f9ddca7469c736775b67544671f0a135ad
SRCREV_go.starlark.net="a134d8f9ddca7469c736775b67544671f0a135ad"
SRC_URI += "git://github.com/google/starlark-go;name=go.starlark.net;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.starlark.net"

#       gopkg.in/inf.v0 v0.9.1
# [1] git ls-remote https://github.com/go-inf/inf d2d2541c53f18d2a059457998ce2876cc8e67cbf
SRCREV_inf.v0="d2d2541c53f18d2a059457998ce2876cc8e67cbf"
SRC_URI += "git://github.com/go-inf/inf;name=inf.v0;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/inf.v0"

#       gopkg.in/ini.v1 v1.67.0
# [1] git ls-remote https://github.com/go-ini/ini b2f570e5b5b844226bbefe6fb521d891f529a951
SRCREV_ini.v1="b2f570e5b5b844226bbefe6fb521d891f529a951"
SRC_URI += "git://github.com/go-ini/ini;name=ini.v1;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/ini.v1"

#       golang.org/x/net v0.17.0
# [1] git ls-remote https://go.googlesource.com/net b225e7ca6dde1ef5a5ae5ce922861bda011cfabd
SRCREV_net="b225e7ca6dde1ef5a5ae5ce922861bda011cfabd"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.13.0
# [1] git ls-remote https://go.googlesource.com/sys 2964e1e4b1dbd55a8ac69a4c9e3004a8038515b6
SRCREV_sys="2964e1e4b1dbd55a8ac69a4c9e3004a8038515b6"
SRC_URI += "git://go.googlesource.com/sys;name=sys;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v2 v2.4.0
# [1] git ls-remote https://github.com/go-yaml/yaml 7649d4548cb53a614db133b2a8ac1f31859dda8c
SRCREV_yaml.v2="7649d4548cb53a614db133b2a8ac1f31859dda8c"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/yaml.v2"

#       inet.af/tcpproxy v0.0.0-20200125044825-b6bb9b5b8252
# [1] git ls-remote https://github.com/inetaf/tcpproxy b6bb9b5b82524122bcf27291ede32d1517a14ab8
SRCREV_tcpproxy="b6bb9b5b82524122bcf27291ede32d1517a14ab8"
SRC_URI += "git://github.com/inetaf/tcpproxy;name=tcpproxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/inet.af/tcpproxy"

#       sigs.k8s.io/yaml v1.4.0
# [1] git ls-remote https://github.com/kubernetes-sigs/yaml c3772b51db126345efe2dfe4ff8dac83b8141684
SRCREV_yaml="c3772b51db126345efe2dfe4ff8dac83b8141684"
SRC_URI += "git://github.com/kubernetes-sigs/yaml;name=yaml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/yaml"

#       go.etcd.io/bbolt v1.3.8
# [1] git ls-remote https://github.com/etcd-io/bbolt 42a914d8be1995a845e12dedbbbc77b7a450f9c7
SRCREV_bbolt="42a914d8be1995a845e12dedbbbc77b7a450f9c7"
SRC_URI += "git://github.com/etcd-io/bbolt;name=bbolt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.etcd.io/bbolt"

#       go.opencensus.io v0.24.0
# [1] git ls-remote https://github.com/census-instrumentation/opencensus-go b1a01ee95db0e690d91d7193d037447816fae4c5
SRCREV_go.opencensus.io="b1a01ee95db0e690d91d7193d037447816fae4c5"
SRC_URI += "git://github.com/census-instrumentation/opencensus-go;name=go.opencensus.io;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opencensus.io"

#       golang.org/x/exp v0.0.0-20231006140011-7918f672742d
# [1] git ls-remote https://go.googlesource.com/exp 7918f672742dd40ff5cf8d3c316a9315410c2d3c
SRCREV_exp="7918f672742dd40ff5cf8d3c316a9315410c2d3c"
SRC_URI += "git://go.googlesource.com/exp;name=exp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/exp"

#       golang.org/x/mod v0.14.0
# [1] git ls-remote https://go.googlesource.com/mod 6e58e47c7bd6672665dc35cce7b1f325d2addd67
SRCREV_mod="6e58e47c7bd6672665dc35cce7b1f325d2addd67"
SRC_URI += "git://go.googlesource.com/mod;name=mod;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/mod"

#       gopkg.in/gcfg.v1 v1.2.3
# [1] git ls-remote https://github.com/go-gcfg/gcfg 61b2c08bc8f6068f7c5ca684372f9a6cb1c45ebe
SRCREV_gcfg.v1="61b2c08bc8f6068f7c5ca684372f9a6cb1c45ebe"
SRC_URI += "git://github.com/go-gcfg/gcfg;name=gcfg.v1;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/gcfg.v1"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3="f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/yaml.v3"

#       sigs.k8s.io/json v0.0.0-20221116044647-bc3834ca7abd
# [1] git ls-remote https://github.com/kubernetes-sigs/json bc3834ca7abd3a90f03ef00a27ad80cb892f9c21
SRCREV_json="bc3834ca7abd3a90f03ef00a27ad80cb892f9c21"
SRC_URI += "git://github.com/kubernetes-sigs/json;name=json;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/json"

#       github.com/lib/pq v1.10.2
# [1] git ls-remote https://github.com/lib/pq 2da6713d67f03911a05b1b6559adc85927fe076e
SRCREV_pq="2da6713d67f03911a05b1b6559adc85927fe076e"
SRC_URI += "git://github.com/lib/pq;name=pq;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/lib/pq"

#       golang.org/x/sync v0.6.0
# [1] git ls-remote https://go.googlesource.com/sync 59c1ca1e4661ed4452be4069ceea3c233f4deec1
SRCREV_sync="59c1ca1e4661ed4452be4069ceea3c233f4deec1"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/sync"

#       golang.org/x/arch v0.3.0
# [1] git ls-remote https://go.googlesource.com/arch 40c19ba4a7c5ffc92baaef5977ffc2b82dfb0e47
SRCREV_arch="40c19ba4a7c5ffc92baaef5977ffc2b82dfb0e47"
SRC_URI += "git://go.googlesource.com/arch;name=arch;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/arch"

#       github.com/rs/xid v1.5.0
# [1] git ls-remote https://github.com/rs/xid 47a0ac1e0b750ee1f43718be223bb07601c66a1f
SRCREV_xid="47a0ac1e0b750ee1f43718be223bb07601c66a1f"
SRC_URI += "git://github.com/rs/xid;name=xid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rs/xid"

#       golang.org/x/term v0.15.0
# [1] git ls-remote https://go.googlesource.com/term ee66497fa39f03ba841b568a7b4f4ee4e4546f74
SRCREV_x-term="ee66497fa39f03ba841b568a7b4f4ee4e4546f74"
SRC_URI += "git://go.googlesource.com/term;name=x-term;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/term"

#       golang.org/x/text v0.14.0
# [1] git ls-remote https://go.googlesource.com/text 6c97a165dd661335ff7bce6104a008558123c353
SRCREV_text="6c97a165dd661335ff7bce6104a008558123c353"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/text"

#       golang.org/x/time v0.5.0
# [1] git ls-remote https://go.googlesource.com/time 883aed519795b30de35e6bc28ec8f681494afa87
SRCREV_time="883aed519795b30de35e6bc28ec8f681494afa87"
SRC_URI += "git://go.googlesource.com/time;name=time;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/time"

#       gonum.org/v1/gonum v0.13.0
# [1] git ls-remote https://github.com/gonum/gonum 91a06ac64c4b32c929427846d4d1d3b8202ad7b1
SRCREV_gonum="91a06ac64c4b32c929427846d4d1d3b8202ad7b1"
SRC_URI += "git://github.com/gonum/gonum;name=gonum;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gonum.org/v1/gonum"

#       golang.org/x/tools v0.16.1
# [1] git ls-remote https://go.googlesource.com/tools 2acb2e697b49f179be93652febb89d384f0f09c9
SRCREV_tools="2acb2e697b49f179be93652febb89d384f0f09c9"
SRC_URI += "git://go.googlesource.com/tools;name=tools;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/tools"

#       golang.org/x/crypto v0.14.0
# [1] git ls-remote https://go.googlesource.com/crypto e3cc52e598e302f8c613a645bb7231264d8ec995
SRCREV_crypto="e3cc52e598e302f8c613a645bb7231264d8ec995"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/crypto"

#       golang.org/x/oauth2 v0.15.0
# [1] git ls-remote https://go.googlesource.com/oauth2 6e9ec9323da7adcd2cc6e62e4deb9fae4c309a1a
SRCREV_oauth2="6e9ec9323da7adcd2cc6e62e4deb9fae4c309a1a"
SRC_URI += "git://go.googlesource.com/oauth2;name=oauth2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/oauth2"

#       k8s.io/kube-openapi v0.0.0-20230717233707-2695361300d9
# [1] git ls-remote https://github.com/kubernetes/kube-openapi 2695361300d9d6b66602baa8cf366b7212cc9836
SRCREV_kube-openapi="2695361300d9d6b66602baa8cf366b7212cc9836"
SRC_URI += "git://github.com/kubernetes/kube-openapi;name=kube-openapi;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/k8s.io/kube-openapi"

#       github.com/ipfs/boxo v0.10.0
# [1] git ls-remote https://github.com/ipfs/boxo 6f82d77995476b0d85722539230a50a321706ead
SRCREV_boxo="6f82d77995476b0d85722539230a50a321706ead"
SRC_URI += "git://github.com/ipfs/boxo;name=boxo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ipfs/boxo"

#       github.com/miekg/dns v1.1.55
# [1] git ls-remote https://github.com/miekg/dns 48f38ebef989eedc6b57f1869ae849ccc8f5fe29
SRCREV_dns="48f38ebef989eedc6b57f1869ae849ccc8f5fe29"
SRC_URI += "git://github.com/miekg/dns;name=dns;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/miekg/dns"

#       github.com/moby/ipvs v1.1.0
# [1] git ls-remote https://github.com/moby/ipvs fe22ac585b3e22a969cbde61addd99ecd93ab22c
SRCREV_ipvs="fe22ac585b3e22a969cbde61addd99ecd93ab22c"
SRC_URI += "git://github.com/moby/ipvs;name=ipvs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/ipvs"

#       github.com/moby/term v0.0.0-20221205130635-1aeaba878587
# [1] git ls-remote https://github.com/moby/term 1aeaba8785877a66f57739be9fccb6f5cfab429e
SRCREV_term="1aeaba8785877a66f57739be9fccb6f5cfab429e"
SRC_URI += "git://github.com/moby/term;name=term;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/term"

#       go.mozilla.org/pkcs7 v0.0.0-20200128120323-432b2356ecb1
# [1] git ls-remote https://github.com/mozilla-services/pkcs7 432b2356ecb18209c1cec25680b8a23632794f21
SRCREV_pkcs7="432b2356ecb18209c1cec25680b8a23632794f21"
SRC_URI += "git://github.com/mozilla-services/pkcs7;name=pkcs7;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.mozilla.org/pkcs7"

#       go.uber.org/multierr v1.11.0
# [1] git ls-remote https://github.com/uber-go/multierr de75ae527b39a27afcb50a84427ec7b84021d5f4
SRCREV_multierr="de75ae527b39a27afcb50a84427ec7b84021d5f4"
SRC_URI += "git://github.com/uber-go/multierr;name=multierr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.uber.org/multierr"

#       gopkg.in/warnings.v0 v0.1.2
# [1] git ls-remote https://github.com/go-warnings/warnings ec4a0fea49c7b46c2aeb0b51aac55779c607e52b
SRCREV_warnings.v0="ec4a0fea49c7b46c2aeb0b51aac55779c607e52b"
SRC_URI += "git://github.com/go-warnings/warnings;name=warnings.v0;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/warnings.v0"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors="614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pkg/errors"

#       github.com/urfave/cli v1.22.14
# [1] git ls-remote https://github.com/urfave/cli f5ca62f301d773bdc9c800aa0e24aec82ad01a1d
SRCREV_cli="f5ca62f301d773bdc9c800aa0e24aec82ad01a1d"
SRC_URI += "git://github.com/urfave/cli;name=cli;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/urfave/cli"

#       github.com/docker/cli v24.0.5+incompatible
# [1] git ls-remote https://github.com/docker/cli ced099660009713e0e845eeb754e6050dbaa45d0
SRCREV_docker-cli="ced099660009713e0e845eeb754e6050dbaa45d0"
SRC_URI += "git://github.com/docker/cli;name=docker-cli;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/cli"

#       github.com/gofrs/uuid v4.4.0+incompatible
# [1] git ls-remote https://github.com/gofrs/uuid 8345c9a6e83034ec02edb1887c08c6c7fbfdd9ee
SRCREV_gofrs-uuid="8345c9a6e83034ec02edb1887c08c6c7fbfdd9ee"
SRC_URI += "git://github.com/gofrs/uuid;name=gofrs-uuid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gofrs/uuid"

#       google.golang.org/api v0.152.0
# [1] git ls-remote https://github.com/googleapis/google-api-go-client c18c15e47e02cc3fa5d9e68b88313952381d31ae
SRCREV_google.golang.org-api="c18c15e47e02cc3fa5d9e68b88313952381d31ae"
SRC_URI += "git://github.com/googleapis/google-api-go-client;name=google.golang.org-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/api"

#       github.com/golang/mock v1.6.0
# [1] git ls-remote https://github.com/golang/mock aba2ff9a6844d5e3289e8472d3217d5b3090f083
SRCREV_mock="aba2ff9a6844d5e3289e8472d3217d5b3090f083"
SRC_URI += "git://github.com/golang/mock;name=mock;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/mock"

#       github.com/google/uuid v1.4.0
# [1] git ls-remote https://github.com/google/uuid 8de8764e294f072b7a2f1a209e88fdcdb1ebc875
SRCREV_uuid="8de8764e294f072b7a2f1a209e88fdcdb1ebc875"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/uuid"

#       github.com/gorilla/mux v1.8.1
# [1] git ls-remote https://github.com/gorilla/mux b4617d0b9670ad14039b2739167fd35a60f557c5
SRCREV_mux="b4617d0b9670ad14039b2739167fd35a60f557c5"
SRC_URI += "git://github.com/gorilla/mux;name=mux;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gorilla/mux"

#       github.com/k3s-io/kine v0.11.4
# [1] git ls-remote https://github.com/k3s-io/kine 37736729c40f1e7ad18521d1eb5c2a13e314ebde
SRCREV_kine="37736729c40f1e7ad18521d1eb5c2a13e314ebde"
SRC_URI += "git://github.com/k3s-io/kine;name=kine;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kine"

#       github.com/onsi/gomega v1.27.10
# [1] git ls-remote https://github.com/onsi/gomega 9cbf7b0019d4d489d668583b0d7a6ac889ee2bc8
SRCREV_gomega="9cbf7b0019d4d489d668583b0d7a6ac889ee2bc8"
SRC_URI += "git://github.com/onsi/gomega;name=gomega;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/onsi/gomega"

#       github.com/k3s-io/runc v1.1.12-k3s1
# [1] git ls-remote https://github.com/k3s-io/runc 7d07dac287da807a624adba7ea7ccc1b3f28c614
SRCREV_runc="7d07dac287da807a624adba7ea7ccc1b3f28c614"
SRC_URI += "git://github.com/k3s-io/runc;name=runc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/runc"

#       github.com/spf13/pflag v1.0.5
# [1] git ls-remote https://github.com/spf13/pflag 2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab
SRCREV_pflag="2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/spf13/pflag"

#       google.golang.org/grpc v1.58.3
# [1] git ls-remote https://github.com/grpc/grpc-go bf05b9558c16677e362d231120f8213eb276d406
SRCREV_grpc="bf05b9558c16677e362d231120f8213eb276d406"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/grpc"

#       github.com/flynn/noise v1.0.0
# [1] git ls-remote https://github.com/flynn/noise 2499bf1bad239a8316c32932a993642350b3afdb
SRCREV_noise="2499bf1bad239a8316c32932a993642350b3afdb"
SRC_URI += "git://github.com/flynn/noise;name=noise;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/flynn/noise"

#       github.com/huin/goupnp v1.2.0
# [1] git ls-remote https://github.com/huin/goupnp 8ca2329ddbfe051b906efe0883e7a66ac296bc0a
SRCREV_goupnp="8ca2329ddbfe051b906efe0883e7a66ac296bc0a"
SRC_URI += "git://github.com/huin/goupnp;name=goupnp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/huin/goupnp"

#       github.com/ipfs/go-cid v0.4.1
# [1] git ls-remote https://github.com/ipfs/go-cid d46e7f28669cd2c463bc68fe86e7dbe4f8240ab7
SRCREV_go-cid="d46e7f28669cd2c463bc68fe86e7dbe4f8240ab7"
SRC_URI += "git://github.com/ipfs/go-cid;name=go-cid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ipfs/go-cid"

#       github.com/ipfs/go-log v1.0.5
# [1] git ls-remote https://github.com/ipfs/go-log c39ee80c0915c5cca41dc1311e848c2fd7fa4101
SRCREV_go-log="c39ee80c0915c5cca41dc1311e848c2fd7fa4101"
SRC_URI += "git://github.com/ipfs/go-log;name=go-log;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ipfs/go-log"

#       github.com/spf13/afero v1.11.0
# [1] git ls-remote https://github.com/spf13/afero 5c4385aa20510dba5ca4db12c02b0c9211d82892
SRCREV_afero="5c4385aa20510dba5ca4db12c02b0c9211d82892"
SRC_URI += "git://github.com/spf13/afero;name=afero;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/spf13/afero"

#       github.com/cilium/ebpf v0.9.1
# [1] git ls-remote https://github.com/cilium/ebpf d560e4479b395c4523851a4571b04ba0b3846cd1
SRCREV_ebpf="d560e4479b395c4523851a4571b04ba0b3846cd1"
SRC_URI += "git://github.com/cilium/ebpf;name=ebpf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cilium/ebpf"

#       github.com/ghodss/yaml v1.0.0
# [1] git ls-remote https://github.com/ghodss/yaml 0ca9ea5df5451ffdf184b4428c902747c2c11cd7
SRCREV_ghodss-yaml="0ca9ea5df5451ffdf184b4428c902747c2c11cd7"
SRC_URI += "git://github.com/ghodss/yaml;name=ghodss-yaml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ghodss/yaml"

#       github.com/gofrs/flock v0.8.1
# [1] git ls-remote https://github.com/gofrs/flock 6f010d1acea74a32f2f2066bfe324c08bbee30e3
SRCREV_flock="6f010d1acea74a32f2f2066bfe324c08bbee30e3"
SRC_URI += "git://github.com/gofrs/flock;name=flock;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gofrs/flock"

#       github.com/moby/locker v1.0.1
# [1] git ls-remote https://github.com/moby/locker 281af2d563954745bea9d1487c965f24d30742fe
SRCREV_locker="281af2d563954745bea9d1487c965f24d30742fe"
SRC_URI += "git://github.com/moby/locker;name=locker;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/locker"

#       github.com/pierrec/lz4 v2.6.0+incompatible
# [1] git ls-remote https://github.com/pierrec/lz4 0e583d326e0ec6b9c1ad223188dc709af385408e
SRCREV_lz4="0e583d326e0ec6b9c1ad223188dc709af385408e"
SRC_URI += "git://github.com/pierrec/lz4;name=lz4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pierrec/lz4"

#       github.com/spf13/cobra v1.8.0
# [1] git ls-remote https://github.com/spf13/cobra a0a6ae020bb3899ff0276067863e50523f897370
SRCREV_cobra="a0a6ae020bb3899ff0276067863e50523f897370"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/spf13/cobra"

#       github.com/go-logr/logr v1.4.1
# [1] git ls-remote https://github.com/go-logr/logr dcdc3f2cd12e8a5c4e2a6712d6958c90e2e5bd98
SRCREV_logr="dcdc3f2cd12e8a5c4e2a6712d6958c90e2e5bd98"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-logr/logr"

#       github.com/go-logr/stdr v1.2.3-0.20220714215716-96bad1d688c5
# [1] git ls-remote https://github.com/go-logr/stdr 96bad1d688c524409b0da98c82fb7d3d51e60639
SRCREV_stdr="96bad1d688c524409b0da98c82fb7d3d51e60639"
SRC_URI += "git://github.com/go-logr/stdr;name=stdr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-logr/stdr"

#       github.com/go-test/deep v1.0.7
# [1] git ls-remote https://github.com/go-test/deep c733f5ed5136b7437e29ac91bb97c653af3694b5
SRCREV_deep="c733f5ed5136b7437e29ac91bb97c653af3694b5"
SRC_URI += "git://github.com/go-test/deep;name=deep;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-test/deep"

#       github.com/otiai10/copy v1.7.0
# [1] git ls-remote https://github.com/otiai10/copy 323db161ae97db91e6e13dbcda403fdb29c3fff8
SRCREV_copy="323db161ae97db91e6e13dbcda403fdb29c3fff8"
SRC_URI += "git://github.com/otiai10/copy;name=copy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/otiai10/copy"

#       lukechampine.com/blake3 v1.2.1
# [1] git ls-remote https://github.com/lukechampine/blake3 6e4325968f64ca24b1bbc8fbf08ea320d17ebfa0
SRCREV_blake3="6e4325968f64ca24b1bbc8fbf08ea320d17ebfa0"
SRC_URI += "git://github.com/lukechampine/blake3;name=blake3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/lukechampine.com/blake3"

#       github.com/Rican7/retry v0.1.0
# [1] git ls-remote https://github.com/Rican7/retry 28d17f812805614e76f170aa3c8698155ea8e019
SRCREV_retry="28d17f812805614e76f170aa3c8698155ea8e019"
SRC_URI += "git://github.com/Rican7/retry;name=retry;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Rican7/retry"

#       github.com/beorn7/perks v1.0.1
# [1] git ls-remote https://github.com/beorn7/perks 37c8de3658fcb183f997c4e13e8337516ab753e6
SRCREV_perks="37c8de3658fcb183f997c4e13e8337516ab753e6"
SRC_URI += "git://github.com/beorn7/perks;name=perks;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/beorn7/perks"

#       github.com/blang/semver v3.5.1+incompatible
# [1] git ls-remote https://github.com/blang/semver 2ee87856327ba09384cabd113bc6b5d174e9ec0f
SRCREV_semver="2ee87856327ba09384cabd113bc6b5d174e9ec0f"
SRC_URI += "git://github.com/blang/semver;name=semver;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/blang/semver"

#       github.com/google/btree v1.1.2
# [1] git ls-remote https://github.com/google/btree 8e29150ba321eef204059de2ab494f179b6cff2c
SRCREV_btree="8e29150ba321eef204059de2ab494f179b6cff2c"
SRC_URI += "git://github.com/google/btree;name=btree;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/btree"

#       github.com/google/pprof v0.0.0-20230821062121-407c9e7a662f
# [1] git ls-remote https://github.com/google/pprof 407c9e7a662f39c592c77f0db959db282b687a32
SRCREV_pprof="407c9e7a662f39c592c77f0db959db282b687a32"
SRC_URI += "git://github.com/google/pprof;name=pprof;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/pprof"

#       github.com/google/shlex v0.0.0-20191202100458-e7afc7fbc510
# [1] git ls-remote https://github.com/google/shlex e7afc7fbc51079733e9468cdfd1efcd7d196cd1d
SRCREV_shlex="e7afc7fbc51079733e9468cdfd1efcd7d196cd1d"
SRC_URI += "git://github.com/google/shlex;name=shlex;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/shlex"

#       github.com/jackc/pgx/v5 v5.4.2
# [1] git ls-remote https://github.com/jackc/pgx 038fc448c1cc91b9372a6a0d151789f41536f033
SRCREV_pgx-v5="038fc448c1cc91b9372a6a0d151789f41536f033"
SRC_URI += "git://github.com/jackc/pgx;name=pgx-v5;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jackc/pgx/v5"

#       github.com/miekg/pkcs11 v1.1.1
# [1] git ls-remote https://github.com/miekg/pkcs11 f3481918a208bd212aa995a41f92d786eb418a7d
SRCREV_pkcs11="f3481918a208bd212aa995a41f92d786eb418a7d"
SRC_URI += "git://github.com/miekg/pkcs11;name=pkcs11;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/miekg/pkcs11"

#       github.com/morikuni/aec v1.0.0
# [1] git ls-remote https://github.com/morikuni/aec 39771216ff4c63d11f5e604076f9c45e8be1067b
SRCREV_aec="39771216ff4c63d11f5e604076f9c45e8be1067b"
SRC_URI += "git://github.com/morikuni/aec;name=aec;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/morikuni/aec"

#       github.com/nats-io/nuid v1.0.1
# [1] git ls-remote https://github.com/nats-io/nuid 4b96681fa6d28dd0ab5fe79bac63b3a493d9ee94
SRCREV_nuid="4b96681fa6d28dd0ab5fe79bac63b3a493d9ee94"
SRC_URI += "git://github.com/nats-io/nuid;name=nuid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/nuid"

#       github.com/docker/docker v24.0.0-rc.2.0.20230801142700-69c9adb7d386+incompatible
# [1] git ls-remote https://github.com/moby/moby 69c9adb7d3868cb0560b1ffcef798015c5a70510
SRCREV_docker="69c9adb7d3868cb0560b1ffcef798015c5a70510"
SRC_URI += "git://github.com/moby/moby;name=docker;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/docker"

#       github.com/rancher/lasso v0.0.0-20230830164424-d684fdeb6f29
# [1] git ls-remote https://github.com/rancher/lasso d684fdeb6f29e221289c6f59fdc390b6adbaaccf
SRCREV_lasso="d684fdeb6f29e221289c6f59fdc390b6adbaaccf"
SRC_URI += "git://github.com/rancher/lasso;name=lasso;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/lasso"

#       github.com/k3s-io/spegel v0.0.17-0.20240109004735-9466a5529330
# [1] git ls-remote https://github.com/k3s-io/spegel 9466a55293301075a2d1613a3744c6bf45342e8b
SRCREV_spegel="9466a55293301075a2d1613a3744c6bf45342e8b"
SRC_URI += "git://github.com/k3s-io/spegel;name=spegel;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/spegel"

#       github.com/gin-gonic/gin v1.9.1
# [1] git ls-remote https://github.com/gin-gonic/gin 4ea0e648e38a63d6caff14100f5eab5c50912bcd
SRCREV_gin="4ea0e648e38a63d6caff14100f5eab5c50912bcd"
SRC_URI += "git://github.com/gin-gonic/gin;name=gin;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gin-gonic/gin"

#       github.com/goccy/go-json v0.10.2
# [1] git ls-remote https://github.com/goccy/go-json 8e8cdeacf2f2faef082f32848138f0f9af7cfb66
SRCREV_go-json="8e8cdeacf2f2faef082f32848138f0f9af7cfb66"
SRC_URI += "git://github.com/goccy/go-json;name=go-json;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/goccy/go-json"

#       github.com/golang/snappy v0.0.4
# [1] git ls-remote https://github.com/golang/snappy 544b4180ac705b7605231d4a4550a1acb22a19fe
SRCREV_snappy="544b4180ac705b7605231d4a4550a1acb22a19fe"
SRC_URI += "git://github.com/golang/snappy;name=snappy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/snappy"

#       github.com/koron/go-ssdp v0.0.4
# [1] git ls-remote https://github.com/koron/go-ssdp 615e2904c24d115f20139e60b9ab5916b1dfd55d
SRCREV_go-ssdp="615e2904c24d115f20139e60b9ab5916b1dfd55d"
SRC_URI += "git://github.com/koron/go-ssdp;name=go-ssdp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/koron/go-ssdp"

#       github.com/libp2p/go-nat v0.2.0
# [1] git ls-remote https://github.com/libp2p/go-nat 14ce74b6949ca4d3f4889568e20840bdf0b05009
SRCREV_go-nat="14ce74b6949ca4d3f4889568e20840bdf0b05009"
SRC_URI += "git://github.com/libp2p/go-nat;name=go-nat;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-nat"

#       github.com/mikioh/tcpopt v0.0.0-20190314235656-172688c1accc
# [1] git ls-remote https://github.com/mikioh/tcpopt 172688c1accceb1c8699343c22838f55e4b662ca
SRCREV_tcpopt="172688c1accceb1c8699343c22838f55e4b662ca"
SRC_URI += "git://github.com/mikioh/tcpopt;name=tcpopt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mikioh/tcpopt"

#       github.com/pbnjay/memory v0.0.0-20210728143218-7b4eea64cf58
# [1] git ls-remote https://github.com/pbnjay/memory 7b4eea64cf580186c0eceb10dc94ba3a098af46c
SRCREV_memory="7b4eea64cf580186c0eceb10dc94ba3a098af46c"
SRC_URI += "git://github.com/pbnjay/memory;name=memory;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pbnjay/memory"

#       github.com/quic-go/qpack v0.4.0
# [1] git ls-remote https://github.com/quic-go/qpack 3e7287cc7ce655141583b8511fbe09800d4ba896
SRCREV_qpack="3e7287cc7ce655141583b8511fbe09800d4ba896"
SRC_URI += "git://github.com/quic-go/qpack;name=qpack;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/quic-go/qpack"

#       github.com/armon/circbuf v0.0.0-20150827004946-bbbad097214e
# [1] git ls-remote https://github.com/armon/circbuf bbbad097214e2918d8543d5201d12bfd7bca254d
SRCREV_circbuf="bbbad097214e2918d8543d5201d12bfd7bca254d"
SRC_URI += "git://github.com/armon/circbuf;name=circbuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/armon/circbuf"

#       github.com/gogo/protobuf v1.3.2
# [1] git ls-remote https://github.com/gogo/protobuf b03c65ea87cdc3521ede29f62fe3ce239267c1bc
SRCREV_protobuf="b03c65ea87cdc3521ede29f62fe3ce239267c1bc"
SRC_URI += "git://github.com/gogo/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gogo/protobuf"

#       github.com/google/cel-go v0.16.1
# [1] git ls-remote https://github.com/google/cel-go 59a1b5d69d8d826a02e8e3d7911121ea60cba987
SRCREV_cel-go="59a1b5d69d8d826a02e8e3d7911121ea60cba987"
SRC_URI += "git://github.com/google/cel-go;name=cel-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/cel-go"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp="c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/go-cmp"

#       github.com/google/gofuzz v1.2.0
# [1] git ls-remote https://github.com/google/gofuzz 379e164120fbc98885a8f494b5aa41ba94f64c56
SRCREV_gofuzz="379e164120fbc98885a8f494b5aa41ba94f64c56"
SRC_URI += "git://github.com/google/gofuzz;name=gofuzz;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/gofuzz"

#       github.com/google/s2a-go v0.1.7
# [1] git ls-remote https://github.com/google/s2a-go 141996cc2c0b07d53f1970aa1b2e8e5dde4a7a52
SRCREV_s2a-go="141996cc2c0b07d53f1970aa1b2e8e5dde4a7a52"
SRC_URI += "git://github.com/google/s2a-go;name=s2a-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/s2a-go"

#       github.com/imdario/mergo v0.3.16
# [1] git ls-remote https://github.com/darccio/mergo 14fe2b165b83359196f820886a2b24f2771729e9
SRCREV_mergo="14fe2b165b83359196f820886a2b24f2771729e9"
SRC_URI += "git://github.com/darccio/mergo;name=mergo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/imdario/mergo"

#       github.com/nats-io/nkeys v0.4.6
# [1] git ls-remote https://github.com/nats-io/nkeys 62e5d8c7c4af84283b6535bcbf1300ab25b45e2d
SRCREV_nkeys="62e5d8c7c4af84283b6535bcbf1300ab25b45e2d"
SRC_URI += "git://github.com/nats-io/nkeys;name=nkeys;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/nkeys"

#       github.com/soheilhy/cmux v0.1.5
# [1] git ls-remote https://github.com/soheilhy/cmux 5ec6847320e53b5fee0ab9a4757b56625a946c85
SRCREV_cmux="5ec6847320e53b5fee0ab9a4757b56625a946c85"
SRC_URI += "git://github.com/soheilhy/cmux;name=cmux;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/soheilhy/cmux"

#       github.com/tidwall/btree v1.6.0
# [1] git ls-remote https://github.com/tidwall/btree c538c0ce1d47ebada0c423fd430978ba274d7d68
SRCREV_tidwall-btree="c538c0ce1d47ebada0c423fd430978ba274d7d68"
SRC_URI += "git://github.com/tidwall/btree;name=tidwall-btree;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/tidwall/btree"

#       github.com/urfave/cli/v2 v2.23.5
# [1] git ls-remote https://github.com/urfave/cli 600ef6e4dd5db1819a8eb0b453487bf1c0e59099
SRCREV_cli-v2="600ef6e4dd5db1819a8eb0b453487bf1c0e59099"
SRC_URI += "git://github.com/urfave/cli;name=cli-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/urfave/cli/v2"

#       go.opentelemetry.io/otel v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_otel="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel"

#       github.com/containerd/zfs v1.1.0
# [1] git ls-remote https://github.com/containerd/zfs 26134297cde4138b412644d6819c20b105472991
SRCREV_zfs="26134297cde4138b412644d6819c20b105472991"
SRC_URI += "git://github.com/containerd/zfs;name=zfs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/zfs"

#       github.com/ipfs/go-log/v2 v2.5.1
# [1] git ls-remote https://github.com/ipfs/go-log 8625e3ec81bdeb96627de192e6fe21eab5896603
SRCREV_go-log-v2="8625e3ec81bdeb96627de192e6fe21eab5896603"
SRC_URI += "git://github.com/ipfs/go-log;name=go-log-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ipfs/go-log/v2"

#       github.com/onsi/ginkgo/v2 v2.11.0
# [1] git ls-remote https://github.com/onsi/ginkgo 5c32b2a6408b866b04774abad81eca2274f4fb5b
SRCREV_ginkgo-v2="5c32b2a6408b866b04774abad81eca2274f4fb5b"
SRC_URI += "git://github.com/onsi/ginkgo;name=ginkgo-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/onsi/ginkgo/v2"

#       github.com/robfig/cron/v3 v3.0.1
# [1] git ls-remote https://github.com/robfig/cron ccba498c397bb90a9c84945bbb0f7af2d72b6309
SRCREV_cron-v3="ccba498c397bb90a9c84945bbb0f7af2d72b6309"
SRC_URI += "git://github.com/robfig/cron;name=cron-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/robfig/cron/v3"

#       github.com/k3s-io/klog/v2 v2.100.1-k3s1
# [1] git ls-remote https://github.com/k3s-io/klog 977d5aa511a87a6cfa1d251772bcd5344c8d1280
SRCREV_klog-v2="977d5aa511a87a6cfa1d251772bcd5344c8d1280"
SRC_URI += "git://github.com/k3s-io/klog;name=klog-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/klog/v2"

#       github.com/leodido/go-urn v1.2.4
# [1] git ls-remote https://github.com/leodido/go-urn 87e1d5ed73ec8689aa799a976831dcf6c81c8c98
SRCREV_go-urn="87e1d5ed73ec8689aa799a976831dcf6c81c8c98"
SRC_URI += "git://github.com/leodido/go-urn;name=go-urn;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/leodido/go-urn"

#       github.com/mikioh/tcpinfo v0.0.0-20190314235526-30a79bb1804b
# [1] git ls-remote https://github.com/mikioh/tcpinfo 30a79bb1804bc47fa7fe29928c9109f368792a9e
SRCREV_tcpinfo="30a79bb1804bc47fa7fe29928c9109f368792a9e"
SRC_URI += "git://github.com/mikioh/tcpinfo;name=tcpinfo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mikioh/tcpinfo"

#       github.com/mr-tron/base58 v1.2.0
# [1] git ls-remote https://github.com/mr-tron/base58 cd0e5141f51dfcadb8311fd8e495eb11126a8010
SRCREV_base58="cd0e5141f51dfcadb8311fd8e495eb11126a8010"
SRC_URI += "git://github.com/mr-tron/base58;name=base58;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mr-tron/base58"

#       github.com/polydawn/refmt v0.89.0
# [1] git ls-remote https://github.com/polydawn/refmt ad1efcb83999082a4ec5ac34b9d5c08bc388faf3
SRCREV_refmt="ad1efcb83999082a4ec5ac34b9d5c08bc388faf3"
SRC_URI += "git://github.com/polydawn/refmt;name=refmt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/polydawn/refmt"

#       github.com/containerd/log v0.1.0
# [1] git ls-remote https://github.com/containerd/log 0fc1e28871fdf2786e2cc51bbe4133db6547a199
SRCREV_log="0fc1e28871fdf2786e2cc51bbe4133db6547a199"
SRC_URI += "git://github.com/containerd/log;name=log;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/log"

#       github.com/containerd/nri v0.4.0
# [1] git ls-remote https://github.com/containerd/nri e2d9a1b06b9d0916b0074340990df0fbe3388dd1
SRCREV_nri="e2d9a1b06b9d0916b0074340990df0fbe3388dd1"
SRC_URI += "git://github.com/containerd/nri;name=nri;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/nri"

#       github.com/coreos/go-oidc v2.2.1+incompatible
# [1] git ls-remote https://github.com/coreos/go-oidc 8d771559cf6e5111c9b9159810d0e4538e7cdc82
SRCREV_go-oidc="8d771559cf6e5111c9b9159810d0e4538e7cdc82"
SRC_URI += "git://github.com/coreos/go-oidc;name=go-oidc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-oidc"

#       github.com/godbus/dbus/v5 v5.1.0
# [1] git ls-remote https://github.com/godbus/dbus e523abc905595cf17fb0001a7d77eaaddfaa216d
SRCREV_dbus-v5="e523abc905595cf17fb0001a7d77eaaddfaa216d"
SRC_URI += "git://github.com/godbus/dbus;name=dbus-v5;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/godbus/dbus/v5"

#       github.com/minio/md5-simd v1.1.2
# [1] git ls-remote https://github.com/minio/md5-simd 776275e0c9a74ceebbd50fe5c1d61b0c80c608df
SRCREV_md5-simd="776275e0c9a74ceebbd50fe5c1d61b0c80c608df"
SRC_URI += "git://github.com/minio/md5-simd;name=md5-simd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/minio/md5-simd"

#       github.com/mohae/deepcopy v0.0.0-20170929034955-c48cc78d4826
# [1] git ls-remote https://github.com/mohae/deepcopy c48cc78d482608239f6c4c92a4abd87eb8761c90
SRCREV_deepcopy="c48cc78d482608239f6c4c92a4abd87eb8761c90"
SRC_URI += "git://github.com/mohae/deepcopy;name=deepcopy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mohae/deepcopy"

#       github.com/nats-io/jsm.go v0.0.31-0.20220317133147-fe318f464eee
# [1] git ls-remote https://github.com/nats-io/jsm.go fe318f464eee9ceef6120ea851e5cf94a0497ac6
SRCREV_jsm.go="fe318f464eee9ceef6120ea851e5cf94a0497ac6"
SRC_URI += "git://github.com/nats-io/jsm.go;name=jsm.go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/jsm.go"

#       github.com/nats-io/jwt/v2 v2.5.3
# [1] git ls-remote https://github.com/nats-io/jwt 457367366f2ff72a3fefeed38b56a1da281476fb
SRCREV_jwt-v2="457367366f2ff72a3fefeed38b56a1da281476fb"
SRC_URI += "git://github.com/nats-io/jwt;name=jwt-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/jwt/v2"

#       github.com/rubiojr/go-vhd v0.0.0-20200706105327-02e210299021
# [1] git ls-remote https://github.com/rubiojr/go-vhd 02e2102990218160c1cb608a3e9679312a3b8425
SRCREV_go-vhd="02e2102990218160c1cb608a3e9679312a3b8425"
SRC_URI += "git://github.com/rubiojr/go-vhd;name=go-vhd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rubiojr/go-vhd"

#       github.com/vmware/govmomi v0.30.6
# [1] git ls-remote https://github.com/vmware/govmomi 55614148d1fe0df8ac8e04174ffd2344e374adb8
SRCREV_govmomi="55614148d1fe0df8ac8e04174ffd2344e374adb8"
SRC_URI += "git://github.com/vmware/govmomi;name=govmomi;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vmware/govmomi"

#       github.com/xlab/treeprint v1.2.0
# [1] git ls-remote https://github.com/xlab/treeprint 044005a3b405f660f109e066d9f589755835c2ea
SRCREV_treeprint="044005a3b405f660f109e066d9f589755835c2ea"
SRC_URI += "git://github.com/xlab/treeprint;name=treeprint;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xlab/treeprint"

#       github.com/xrash/smetrics v0.0.0-20201216005158-039620a65673
# [1] git ls-remote https://github.com/xrash/smetrics 039620a656736e6ad994090895784a7af15e0b80
SRCREV_smetrics="039620a656736e6ad994090895784a7af15e0b80"
SRC_URI += "git://github.com/xrash/smetrics;name=smetrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xrash/smetrics"

#       sigs.k8s.io/kustomize/api v0.13.5-0.20230601165947-6ce0bf390ce3
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize 6ce0bf390ce3dae580947a2b739da3306c675eef
SRCREV_kustomize-api="6ce0bf390ce3dae580947a2b739da3306c675eef"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kustomize-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/kustomize/api"

#       github.com/blang/semver/v4 v4.0.0
# [1] git ls-remote https://github.com/blang/semver af3461a9cbcf1f3f5889d21b83f5ef63880c33a8
SRCREV_v4="af3461a9cbcf1f3f5889d21b83f5ef63880c33a8"
SRC_URI += "git://github.com/blang/semver;name=v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/blang/semver/v4"

#       github.com/containerd/aufs v1.0.0
# [1] git ls-remote https://github.com/containerd/aufs fb0192dcb2c0bbfce3bd8756fc88026870c0354d
SRCREV_aufs="fb0192dcb2c0bbfce3bd8756fc88026870c0354d"
SRC_URI += "git://github.com/containerd/aufs;name=aufs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/aufs"

#       github.com/google/cadvisor v0.47.3
# [1] git ls-remote https://github.com/google/cadvisor c5730c5a72b527a724e7333d0e2f5b9a3ce5cf4d
SRCREV_cadvisor="c5730c5a72b527a724e7333d0e2f5b9a3ce5cf4d"
SRC_URI += "git://github.com/google/cadvisor;name=cadvisor;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/cadvisor"

#       github.com/rancher/wharfie v0.6.4
# [1] git ls-remote https://github.com/rancher/wharfie afa72eb3bb2e8fc03366c87f4a51b6894ea65b2e
SRCREV_wharfie="afa72eb3bb2e8fc03366c87f4a51b6894ea65b2e"
SRC_URI += "git://github.com/rancher/wharfie;name=wharfie;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/wharfie"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus="d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/sirupsen/logrus"

#       github.com/bytedance/sonic v1.9.1
# [1] git ls-remote https://github.com/bytedance/sonic d7db21691cb8c0380c14a41037c4ce67087260c5
SRCREV_sonic="d7db21691cb8c0380c14a41037c4ce67087260c5"
SRC_URI += "git://github.com/bytedance/sonic;name=sonic;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/bytedance/sonic"

#       github.com/elastic/gosigar v0.14.2
# [1] git ls-remote https://github.com/elastic/gosigar 9d6c92629470099edd40ead9a3d8cf1b38020ec6
SRCREV_gosigar="9d6c92629470099edd40ead9a3d8cf1b38020ec6"
SRC_URI += "git://github.com/elastic/gosigar;name=gosigar;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/elastic/gosigar"

#       github.com/gin-contrib/sse v0.1.0
# [1] git ls-remote https://github.com/gin-contrib/sse 54d8467d122d380a14768b6b4e5cd7ca4755938f
SRCREV_sse="54d8467d122d380a14768b6b4e5cd7ca4755938f"
SRC_URI += "git://github.com/gin-contrib/sse;name=sse;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gin-contrib/sse"

#       github.com/google/gopacket v1.1.19
# [1] git ls-remote https://github.com/google/gopacket a9779d139771f6a06fc983b18e0efd23ca30222f
SRCREV_gopacket="a9779d139771f6a06fc983b18e0efd23ca30222f"
SRC_URI += "git://github.com/google/gopacket;name=gopacket;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/gopacket"

#       github.com/libp2p/go-msgio v0.3.0
# [1] git ls-remote https://github.com/libp2p/go-msgio 12f8f7a72c7dbbb246151e4c98b5a6d59e27e0c6
SRCREV_go-msgio="12f8f7a72c7dbbb246151e4c98b5a6d59e27e0c6"
SRC_URI += "git://github.com/libp2p/go-msgio;name=go-msgio;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-msgio"

#       github.com/mattn/go-isatty v0.0.19
# [1] git ls-remote https://github.com/mattn/go-isatty c067b4f3df49dfc0f376d884e16cfd784ea1874b
SRCREV_go-isatty="c067b4f3df49dfc0f376d884e16cfd784ea1874b"
SRC_URI += "git://github.com/mattn/go-isatty;name=go-isatty;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mattn/go-isatty"

#       github.com/quic-go/quic-go v0.38.2
# [1] git ls-remote https://github.com/quic-go/quic-go 9aaefe19fc3dc8c8917cc87e6128bb56d9e9e6cc
SRCREV_quic-go="9aaefe19fc3dc8c8917cc87e6128bb56d9e9e6cc"
SRC_URI += "git://github.com/quic-go/quic-go;name=quic-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/quic-go/quic-go"

#       github.com/ugorji/go/codec v1.2.11
# [1] git ls-remote https://github.com/ugorji/go 29258c4dfb14a196b559b89bbee11927b830537e
SRCREV_codec="29258c4dfb14a196b559b89bbee11927b830537e"
SRC_URI += "git://github.com/ugorji/go;name=codec;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ugorji/go/codec"

#       github.com/xenitab/pkg/gin v0.0.9
# [1] git ls-remote https://github.com/xenitab/pkg 9331fe68723313fdd444403a41999761a294c50f
SRCREV_pkg-gin="9331fe68723313fdd444403a41999761a294c50f"
SRC_URI += "git://github.com/xenitab/pkg;name=pkg-gin;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xenitab/pkg/gin"

#       github.com/containerd/fifo v1.1.0
# [1] git ls-remote https://github.com/containerd/fifo 151b205263c29d471e0d55c787d2ce9f5343fd46
SRCREV_fifo="151b205263c29d471e0d55c787d2ce9f5343fd46"
SRC_URI += "git://github.com/containerd/fifo;name=fifo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/fifo"

#       github.com/davecgh/go-spew v1.1.2-0.20180830191138-d8f796af33cc
# [1] git ls-remote https://github.com/davecgh/go-spew d8f796af33cc11cb798c1aaeb27a4ebc5099927d
SRCREV_go-spew="d8f796af33cc11cb798c1aaeb27a4ebc5099927d"
SRC_URI += "git://github.com/davecgh/go-spew;name=go-spew;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/davecgh/go-spew"

#       github.com/docker/go-units v0.5.0
# [1] git ls-remote https://github.com/docker/go-units e682442797b36348f8e1f98defdbf32bac0b6c6f
SRCREV_go-units="e682442797b36348f8e1f98defdbf32bac0b6c6f"
SRC_URI += "git://github.com/docker/go-units;name=go-units;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/go-units"

#       github.com/fatih/camelcase v1.0.0
# [1] git ls-remote https://github.com/fatih/camelcase 44e46d280b43ec1531bb25252440e34f1b800b65
SRCREV_camelcase="44e46d280b43ec1531bb25252440e34f1b800b65"
SRC_URI += "git://github.com/fatih/camelcase;name=camelcase;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/fatih/camelcase"

#       github.com/go-openapi/swag v0.22.4
# [1] git ls-remote https://github.com/go-openapi/swag f28dd7aae5534e2e3681204c90019f1dda8a7393
SRCREV_swag="f28dd7aae5534e2e3681204c90019f1dda8a7393"
SRC_URI += "git://github.com/go-openapi/swag;name=swag;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-openapi/swag"

#       github.com/golang/protobuf v1.5.3
# [1] git ls-remote https://github.com/golang/protobuf 5d5e8c018a13017f9d5b8bf4fad64aaa42a87308
SRCREV_golang-protobuf="5d5e8c018a13017f9d5b8bf4fad64aaa42a87308"
SRC_URI += "git://github.com/golang/protobuf;name=golang-protobuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/protobuf"

#       github.com/intel/goresctrl v0.3.0
# [1] git ls-remote https://github.com/intel/goresctrl c40cbba82c8e94fe89926174efc817586bb3950a
SRCREV_goresctrl="c40cbba82c8e94fe89926174efc817586bb3950a"
SRC_URI += "git://github.com/intel/goresctrl;name=goresctrl;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/intel/goresctrl"

#       github.com/jackc/pgerrcode v0.0.0-20220416144525-469b46aa5efa
# [1] git ls-remote https://github.com/jackc/pgerrcode 469b46aa5efae8a229646096c4d7026bf9ff89fe
SRCREV_pgerrcode="469b46aa5efae8a229646096c4d7026bf9ff89fe"
SRC_URI += "git://github.com/jackc/pgerrcode;name=pgerrcode;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jackc/pgerrcode"

#       github.com/mailru/easyjson v0.7.7
# [1] git ls-remote https://github.com/mailru/easyjson c120ca7ced6051261161ce15e8f1542a4b2567fc
SRCREV_easyjson="c120ca7ced6051261161ce15e8f1542a4b2567fc"
SRC_URI += "git://github.com/mailru/easyjson;name=easyjson;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mailru/easyjson"

#       github.com/mdlayher/socket v0.4.1
# [1] git ls-remote https://github.com/mdlayher/socket 024cdfb30ba417ac6f1b27bb5189a8099787dcf7
SRCREV_socket="024cdfb30ba417ac6f1b27bb5189a8099787dcf7"
SRC_URI += "git://github.com/mdlayher/socket;name=socket;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mdlayher/socket"

#       github.com/moby/spdystream v0.2.0
# [1] git ls-remote https://github.com/moby/spdystream dbc715126c0e3fa07721879c6d265b2b82c71e5b
SRCREV_spdystream="dbc715126c0e3fa07721879c6d265b2b82c71e5b"
SRC_URI += "git://github.com/moby/spdystream;name=spdystream;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/spdystream"

#       github.com/moby/sys/signal v0.7.0
# [1] git ls-remote https://github.com/moby/sys b8d8fabf1fa5cf0de7c1a1729145eee854ea31f5
SRCREV_signal="b8d8fabf1fa5cf0de7c1a1729145eee854ea31f5"
SRC_URI += "git://github.com/moby/sys;name=signal;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/sys/signal"

#       github.com/mxk/go-flowrate v0.0.0-20140419014527-cca7078d478f
# [1] git ls-remote https://github.com/mxk/go-flowrate cca7078d478f8520f85629ad7c68962d31ed7682
SRCREV_go-flowrate="cca7078d478f8520f85629ad7c68962d31ed7682"
SRC_URI += "git://github.com/mxk/go-flowrate;name=go-flowrate;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mxk/go-flowrate"

#       github.com/nats-io/nats.go v1.31.0
# [1] git ls-remote https://github.com/nats-io/nats.go 8712190da1d17ab0c4719bffa7c0174214c56e6c
SRCREV_nats.go="8712190da1d17ab0c4719bffa7c0174214c56e6c"
SRC_URI += "git://github.com/nats-io/nats.go;name=nats.go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/nats.go"

#       github.com/xiang90/probing v0.0.0-20221125231312-a49e3df8f510
# [1] git ls-remote https://github.com/xiang90/probing a49e3df8f510ee8b42e68345ca4636dbb161bd0a
SRCREV_probing="a49e3df8f510ee8b42e68345ca4636dbb161bd0a"
SRC_URI += "git://github.com/xiang90/probing;name=probing;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xiang90/probing"

#       golang.zx2c4.com/wireguard v0.0.0-20230325221338-052af4a8072b
# [1] git ls-remote https://git.zx2c4.com/wireguard-go 052af4a8072bbbd3bfe7edf46fe3c1b350f71f08
SRCREV_wireguard="052af4a8072bbbd3bfe7edf46fe3c1b350f71f08"
SRC_URI += "git://git.zx2c4.com/wireguard-go;name=wireguard;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.zx2c4.com/wireguard"

#       google.golang.org/genproto v0.0.0-20230525234035-dd9d682886f9
# [1] git ls-remote https://github.com/googleapis/go-genproto dd9d682886f99d242574cd3eaea438ce7ea66399
SRCREV_genproto="dd9d682886f99d242574cd3eaea438ce7ea66399"
SRC_URI += "git://github.com/googleapis/go-genproto;name=genproto;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/genproto"

#       google.golang.org/protobuf v1.31.0
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go 68463f0e96c93bc19ef36ccd3adfe690bfdb568c
SRCREV_google.golang.org-protobuf="68463f0e96c93bc19ef36ccd3adfe690bfdb568c"
SRC_URI += "git://github.com/protocolbuffers/protobuf-go;name=google.golang.org-protobuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/protobuf"

#       gopkg.in/square/go-jose.v2 v2.6.0
# [1] git ls-remote https://github.com/square/go-jose a10ff54e00bc6e833bf549e04ae976f0fe8ea2fd
SRCREV_go-jose.v2="a10ff54e00bc6e833bf549e04ae976f0fe8ea2fd"
SRC_URI += "git://github.com/square/go-jose;name=go-jose.v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/square/go-jose.v2"

#       github.com/json-iterator/go v1.1.12
# [1] git ls-remote https://github.com/json-iterator/go 024077e996b048517130b21ea6bf12aa23055d3d
SRCREV_go="024077e996b048517130b21ea6bf12aa23055d3d"
SRC_URI += "git://github.com/json-iterator/go;name=go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/json-iterator/go"

#       github.com/k3s-io/cri-tools v1.26.0-rc.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/cri-tools 029d9bbf8bfb43c46a80b013cb6bf163739df0c8
SRCREV_cri-tools="029d9bbf8bfb43c46a80b013cb6bf163739df0c8"
SRC_URI += "git://github.com/k3s-io/cri-tools;name=cri-tools;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/cri-tools"

#       github.com/libp2p/go-libp2p v0.30.0
# [1] git ls-remote https://github.com/libp2p/go-libp2p 37319a699f336e3e062c7894f44d47db3fea4dc2
SRCREV_go-libp2p="37319a699f336e3e062c7894f44d47db3fea4dc2"
SRC_URI += "git://github.com/libp2p/go-libp2p;name=go-libp2p;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-libp2p"

#       github.com/mattn/go-sqlite3 v1.14.19
# [1] git ls-remote https://github.com/mattn/go-sqlite3 00b02e0ba98effd5f157d39216e244af8a807f9b
SRCREV_go-sqlite3="00b02e0ba98effd5f157d39216e244af8a807f9b"
SRC_URI += "git://github.com/mattn/go-sqlite3;name=go-sqlite3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mattn/go-sqlite3"

#       github.com/rancher/wrangler v1.1.1-0.20230818201331-3604a6be798d
# [1] git ls-remote https://github.com/rancher/wrangler 3604a6be798d0e52e1d935d61d57b4ecbd5dfb2a
SRCREV_wrangler="3604a6be798d0e52e1d935d61d57b4ecbd5dfb2a"
SRC_URI += "git://github.com/rancher/wrangler;name=wrangler;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/wrangler"

#       github.com/stretchr/testify v1.8.4
# [1] git ls-remote https://github.com/stretchr/testify f97607b89807936ac4ff96748d766cf4b9711f78
SRCREV_testify="f97607b89807936ac4ff96748d766cf4b9711f78"
SRC_URI += "git://github.com/stretchr/testify;name=testify;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stretchr/testify"

#       github.com/jbenet/goprocess v0.1.4
# [1] git ls-remote https://github.com/jbenet/goprocess 23d20c20149e1f362afda26f4500cb9d6393f0ad
SRCREV_goprocess="23d20c20149e1f362afda26f4500cb9d6393f0ad"
SRC_URI += "git://github.com/jbenet/goprocess;name=goprocess;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jbenet/goprocess"

#       github.com/syndtr/goleveldb v1.0.0
# [1] git ls-remote https://github.com/syndtr/goleveldb 9d007e481048296f09f59bd19bb7ae584563cd95
SRCREV_goleveldb="9d007e481048296f09f59bd19bb7ae584563cd95"
SRC_URI += "git://github.com/syndtr/goleveldb;name=goleveldb;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/syndtr/goleveldb"

#       cloud.google.com/go/compute v1.23.3
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 2ba47cb7adfef32617eb11888331ccc2d2a0f84d
SRCREV_compute="2ba47cb7adfef32617eb11888331ccc2d2a0f84d"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=compute;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/compute"

#       github.com/containerd/ttrpc v1.2.2
# [1] git ls-remote https://github.com/containerd/ttrpc ac26f8cbea1c440d451dd19a4a1b847fd073f3c3
SRCREV_ttrpc="ac26f8cbea1c440d451dd19a4a1b847fd073f3c3"
SRC_URI += "git://github.com/containerd/ttrpc;name=ttrpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/ttrpc"

#       github.com/coreos/go-semver v0.3.1
# [1] git ls-remote https://github.com/coreos/go-semver c16f28124668daf02b2a32a431dec2f183977ffc
SRCREV_go-semver="c16f28124668daf02b2a32a431dec2f183977ffc"
SRC_URI += "git://github.com/coreos/go-semver;name=go-semver;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-semver"

#       github.com/docker/go-events v0.0.0-20190806004212-e31b211e4f1c
# [1] git ls-remote https://github.com/docker/go-events e31b211e4f1cd09aa76fe4ac244571fab96ae47f
SRCREV_go-events="e31b211e4f1cd09aa76fe4ac244571fab96ae47f"
SRC_URI += "git://github.com/docker/go-events;name=go-events;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/go-events"

#       github.com/go-errors/errors v1.4.2
# [1] git ls-remote https://github.com/go-errors/errors 33d496f939bc762321a636d4035e15c302eb0b00
SRCREV_go-errors-errors="33d496f939bc762321a636d4035e15c302eb0b00"
SRC_URI += "git://github.com/go-errors/errors;name=go-errors-errors;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-errors/errors"

#       github.com/jackc/pgpassfile v1.0.0
# [1] git ls-remote https://github.com/jackc/pgpassfile 99d8e8e28945ffceaf75b0299fcb2bb656b8a683
SRCREV_pgpassfile="99d8e8e28945ffceaf75b0299fcb2bb656b8a683"
SRC_URI += "git://github.com/jackc/pgpassfile;name=pgpassfile;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jackc/pgpassfile"

#       github.com/josharian/intern v1.0.0
# [1] git ls-remote https://github.com/josharian/intern 8e6ff32b3e7c0b018c43953085fe2ac330fe9acd
SRCREV_intern="8e6ff32b3e7c0b018c43953085fe2ac330fe9acd"
SRC_URI += "git://github.com/josharian/intern;name=intern;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/josharian/intern"

#       github.com/josharian/native v1.1.0
# [1] git ls-remote https://github.com/josharian/native c1e37c09b531b14ae12a501eb6fd529b31cecdaa
SRCREV_native="c1e37c09b531b14ae12a501eb6fd529b31cecdaa"
SRC_URI += "git://github.com/josharian/native;name=native;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/josharian/native"

#       github.com/lithammer/dedent v1.1.0
# [1] git ls-remote https://github.com/lithammer/dedent 8478954c3bc893cf36c5ee7c822266b993a3b3ee
SRCREV_dedent="8478954c3bc893cf36c5ee7c822266b993a3b3ee"
SRC_URI += "git://github.com/lithammer/dedent;name=dedent;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/lithammer/dedent"

#       github.com/mdlayher/netlink v1.7.2
# [1] git ls-remote https://github.com/mdlayher/netlink 657f7da1d9bd78d246ae610e0b5efc63a6a5f9e4
SRCREV_mdlayher-netlink="657f7da1d9bd78d246ae610e0b5efc63a6a5f9e4"
SRC_URI += "git://github.com/mdlayher/netlink;name=mdlayher-netlink;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mdlayher/netlink"

#       github.com/mistifyio/go-zfs v2.1.2-0.20190413222219-f784269be439+incompatible
# [1] git ls-remote https://github.com/mistifyio/go-zfs f784269be439d704d3dfa1906f45dd848fed2beb
SRCREV_go-zfs="f784269be439d704d3dfa1906f45dd848fed2beb"
SRC_URI += "git://github.com/mistifyio/go-zfs;name=go-zfs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mistifyio/go-zfs"

#       github.com/moby/sys/symlink v0.2.0
# [1] git ls-remote https://github.com/moby/sys 03b9f8d59a07f5206a2264105f4903a222aea964
SRCREV_symlink="03b9f8d59a07f5206a2264105f4903a222aea964"
SRC_URI += "git://github.com/moby/sys;name=symlink;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/sys/symlink"

#       github.com/vbatts/tar-split v0.11.5
# [1] git ls-remote https://github.com/vbatts/tar-split 5ef0dd8243164ebacd755916a89d8085a5b6bb7f
SRCREV_tar-split="5ef0dd8243164ebacd755916a89d8085a5b6bb7f"
SRC_URI += "git://github.com/vbatts/tar-split;name=tar-split;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vbatts/tar-split"

#       google.golang.org/appengine v1.6.8
# [1] git ls-remote https://github.com/golang/appengine aa58fcd18e4ab7ac816760ee266fa30a0907ab9e
SRCREV_appengine="aa58fcd18e4ab7ac816760ee266fa30a0907ab9e"
SRC_URI += "git://github.com/golang/appengine;name=appengine;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/appengine"

#       sigs.k8s.io/kustomize/kyaml v0.14.3-0.20230601165947-6ce0bf390ce3
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize 6ce0bf390ce3dae580947a2b739da3306c675eef
SRCREV_kyaml="6ce0bf390ce3dae580947a2b739da3306c675eef"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kyaml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/kustomize/kyaml"

#       github.com/Microsoft/hcsshim v0.11.0
# [1] git ls-remote https://github.com/microsoft/hcsshim 750e11bf07440fd1581413bdc1fc7731fa2d6d64
SRCREV_hcsshim="750e11bf07440fd1581413bdc1fc7731fa2d6d64"
SRC_URI += "git://github.com/microsoft/hcsshim;name=hcsshim;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Microsoft/hcsshim"

#       github.com/k3s-io/containerd v1.7.11-k3s2
# [1] git ls-remote https://github.com/k3s-io/containerd 64c566767b99d0bacf26fb6e2355775c413331c9
SRCREV_containerd="64c566767b99d0bacf26fb6e2355775c413331c9"
SRC_URI += "git://github.com/k3s-io/containerd;name=containerd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/containerd"

#       github.com/coreos/go-systemd v0.0.0-20190321100706-95778dfbb74e
# [1] git ls-remote https://github.com/coreos/go-systemd 95778dfbb74eb7e4dbaf43bf7d71809650ef8076
SRCREV_go-systemd="95778dfbb74eb7e4dbaf43bf7d71809650ef8076"
SRC_URI += "git://github.com/coreos/go-systemd;name=go-systemd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-systemd"

#       github.com/gorilla/websocket v1.5.0
# [1] git ls-remote https://github.com/gorilla/websocket 9111bb834a68b893cebbbaed5060bdbc1d9ab7d2
SRCREV_websocket="9111bb834a68b893cebbbaed5060bdbc1d9ab7d2"
SRC_URI += "git://github.com/gorilla/websocket;name=websocket;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gorilla/websocket"

#       github.com/minio/minio-go/v7 v7.0.33
# [1] git ls-remote https://github.com/minio/minio-go a80fee3343f12028079ae831a04b9583ba09c695
SRCREV_v7="a80fee3343f12028079ae831a04b9583ba09c695"
SRC_URI += "git://github.com/minio/minio-go;name=v7;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/minio/minio-go/v7"

#       github.com/yl2chen/cidranger v1.0.2
# [1] git ls-remote https://github.com/yl2chen/cidranger 7ff5a0e84593dad6fbd50551343618d7956b3c71
SRCREV_cidranger="7ff5a0e84593dad6fbd50551343618d7956b3c71"
SRC_URI += "git://github.com/yl2chen/cidranger;name=cidranger;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/yl2chen/cidranger"

#       github.com/k3s-io/kubernetes v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kubernetes="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubernetes;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes"

#       github.com/benbjohnson/clock v1.3.5
# [1] git ls-remote https://github.com/benbjohnson/clock 96c602caabb567343046c08a8fca8560b4f00bb4
SRCREV_clock="96c602caabb567343046c08a8fca8560b4f00bb4"
SRC_URI += "git://github.com/benbjohnson/clock;name=clock;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/benbjohnson/clock"

#       github.com/francoispqt/gojay v1.2.13
# [1] git ls-remote https://github.com/francoispqt/gojay 1398296d938f9fae26750ddc2fe356b6d897f799
SRCREV_gojay="1398296d938f9fae26750ddc2fe356b6d897f799"
SRC_URI += "git://github.com/francoispqt/gojay;name=gojay;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/francoispqt/gojay"

#       github.com/ipfs/go-datastore v0.6.0
# [1] git ls-remote https://github.com/ipfs/go-datastore 1de47089f5c72b61d91b5cd9043e49fe95771ac0
SRCREV_go-datastore="1de47089f5c72b61d91b5cd9043e49fe95771ac0"
SRC_URI += "git://github.com/ipfs/go-datastore;name=go-datastore;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ipfs/go-datastore"

#       github.com/raulk/go-watchdog v1.3.0
# [1] git ls-remote https://github.com/raulk/go-watchdog 9c5e371109037bec1852ea63c9512a94307bfea0
SRCREV_go-watchdog="9c5e371109037bec1852ea63c9512a94307bfea0"
SRC_URI += "git://github.com/raulk/go-watchdog;name=go-watchdog;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/raulk/go-watchdog"

#       github.com/spaolacci/murmur3 v1.1.0
# [1] git ls-remote https://github.com/spaolacci/murmur3 f09979ecbc725b9e6d41a297405f65e7e8804acc
SRCREV_murmur3="f09979ecbc725b9e6d41a297405f65e7e8804acc"
SRC_URI += "git://github.com/spaolacci/murmur3;name=murmur3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/spaolacci/murmur3"

#       github.com/Azure/go-ansiterm v0.0.0-20210617225240-d185dfc1b5a1
# [1] git ls-remote https://github.com/Azure/go-ansiterm d185dfc1b5a126116ea5a19e148e29d16b4574c9
SRCREV_go-ansiterm="d185dfc1b5a126116ea5a19e148e29d16b4574c9"
SRC_URI += "git://github.com/Azure/go-ansiterm;name=go-ansiterm;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-ansiterm"

#       github.com/Azure/go-autorest v14.2.0+incompatible
# [1] git ls-remote https://github.com/Azure/go-autorest e7b391b759b050d6719cc6fd8bb87b6dc038bca6
SRCREV_go-autorest="e7b391b759b050d6719cc6fd8bb87b6dc038bca6"
SRC_URI += "git://github.com/Azure/go-autorest;name=go-autorest;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest"

#       github.com/avast/retry-go/v4 v4.3.2
# [1] git ls-remote https://github.com/avast/retry-go c65eeae03ec06cb591b05d092457de9f691bb359
SRCREV_retry-go-v4="c65eeae03ec06cb591b05d092457de9f691bb359"
SRC_URI += "git://github.com/avast/retry-go;name=retry-go-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/avast/retry-go/v4"

#       github.com/cespare/xxhash/v2 v2.2.0
# [1] git ls-remote https://github.com/cespare/xxhash a76eb16a93c1e30527c073ca831d9048b4b935f6
SRCREV_xxhash-v2="a76eb16a93c1e30527c073ca831d9048b4b935f6"
SRC_URI += "git://github.com/cespare/xxhash;name=xxhash-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cespare/xxhash/v2"

#       github.com/containerd/go-cni v1.1.9
# [1] git ls-remote https://github.com/containerd/go-cni 6603d5bd8941d7f2026bb5627f6aa4ff434f859a
SRCREV_go-cni="6603d5bd8941d7f2026bb5627f6aa4ff434f859a"
SRC_URI += "git://github.com/containerd/go-cni;name=go-cni;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/go-cni"

#       github.com/docker/go-metrics v0.0.1
# [1] git ls-remote https://github.com/docker/go-metrics b619b3592b65de4f087d9f16863a7e6ff905973c
SRCREV_go-metrics="b619b3592b65de4f087d9f16863a7e6ff905973c"
SRC_URI += "git://github.com/docker/go-metrics;name=go-metrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/go-metrics"

#       github.com/felixge/httpsnoop v1.0.4
# [1] git ls-remote https://github.com/felixge/httpsnoop c5817c27ec125409c069052fdd171023c353501c
SRCREV_httpsnoop="c5817c27ec125409c069052fdd171023c353501c"
SRC_URI += "git://github.com/felixge/httpsnoop;name=httpsnoop;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/felixge/httpsnoop"

#       github.com/fsnotify/fsnotify v1.7.0
# [1] git ls-remote https://github.com/fsnotify/fsnotify cfc9c4f277ea6ec18de92444b31983b183deb4fb
SRCREV_fsnotify="cfc9c4f277ea6ec18de92444b31983b183deb4fb"
SRC_URI += "git://github.com/fsnotify/fsnotify;name=fsnotify;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/fsnotify/fsnotify"

#       github.com/golang-jwt/jwt/v4 v4.5.0
# [1] git ls-remote https://github.com/golang-jwt/jwt 9358574a7a1a2c8d644f22b6e8de627ba85c58d0
SRCREV_jwt-v4="9358574a7a1a2c8d644f22b6e8de627ba85c58d0"
SRC_URI += "git://github.com/golang-jwt/jwt;name=jwt-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang-jwt/jwt/v4"

#       github.com/golang/groupcache v0.0.0-20210331224755-41bb18bfe9da
# [1] git ls-remote https://github.com/golang/groupcache 41bb18bfe9da5321badc438f91158cd790a33aa3
SRCREV_groupcache="41bb18bfe9da5321badc438f91158cd790a33aa3"
SRC_URI += "git://github.com/golang/groupcache;name=groupcache;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/groupcache"

#       github.com/hanwen/go-fuse/v2 v2.3.0
# [1] git ls-remote https://github.com/hanwen/go-fuse d537a5a8d65c6552bc3844571f1d8ec76bcac5e4
SRCREV_go-fuse-v2="d537a5a8d65c6552bc3844571f1d8ec76bcac5e4"
SRC_URI += "git://github.com/hanwen/go-fuse;name=go-fuse-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hanwen/go-fuse/v2"

#       github.com/hashicorp/errwrap v1.1.0
# [1] git ls-remote https://github.com/hashicorp/errwrap 7b00e5db719c64d14dd0caaacbd13e76254d02c0
SRCREV_errwrap="7b00e5db719c64d14dd0caaacbd13e76254d02c0"
SRC_URI += "git://github.com/hashicorp/errwrap;name=errwrap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/errwrap"

#       github.com/karrick/godirwalk v1.17.0
# [1] git ls-remote https://github.com/karrick/godirwalk 9a7752c108e7ea76255201b9f47bd4d4d2df868e
SRCREV_godirwalk="9a7752c108e7ea76255201b9f47bd4d4d2df868e"
SRC_URI += "git://github.com/karrick/godirwalk;name=godirwalk;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/karrick/godirwalk"

#       github.com/liggitt/tabwriter v0.0.0-20181228230101-89fcab3d43de
# [1] git ls-remote https://github.com/liggitt/tabwriter 89fcab3d43de07060e4fd4c1547430ed57e87f24
SRCREV_tabwriter="89fcab3d43de07060e4fd4c1547430ed57e87f24"
SRC_URI += "git://github.com/liggitt/tabwriter;name=tabwriter;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/liggitt/tabwriter"

#       github.com/minio/highwayhash v1.0.2
# [1] git ls-remote https://github.com/minio/highwayhash 08ce0b4fa7932a018438133f1b632e1c674d4107
SRCREV_highwayhash="08ce0b4fa7932a018438133f1b632e1c674d4107"
SRC_URI += "git://github.com/minio/highwayhash;name=highwayhash;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/minio/highwayhash"

#       github.com/minio/sha256-simd v1.0.1
# [1] git ls-remote https://github.com/minio/sha256-simd 6096f891a77bfe490cbea7a424c821b5fdb92849
SRCREV_sha256-simd="6096f891a77bfe490cbea7a424c821b5fdb92849"
SRC_URI += "git://github.com/minio/sha256-simd;name=sha256-simd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/minio/sha256-simd"

#       github.com/mrunalp/fileutils v0.5.1
# [1] git ls-remote https://github.com/mrunalp/fileutils 7363e975f9cfb558be601bece0df81714c3c9084
SRCREV_fileutils="7363e975f9cfb558be601bece0df81714c3c9084"
SRC_URI += "git://github.com/mrunalp/fileutils;name=fileutils;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mrunalp/fileutils"

#       github.com/munnerz/goautoneg v0.0.0-20191010083416-a7dc8b61c822
# [1] git ls-remote https://github.com/munnerz/goautoneg a7dc8b61c822528f973a5e4e7b272055c6fdb43e
SRCREV_goautoneg="a7dc8b61c822528f973a5e4e7b272055c6fdb43e"
SRC_URI += "git://github.com/munnerz/goautoneg;name=goautoneg;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/munnerz/goautoneg"

#       github.com/pelletier/go-toml v1.9.5
# [1] git ls-remote https://github.com/pelletier/go-toml fed1464066413075eac02cd4dc368b5221845541
SRCREV_go-toml="fed1464066413075eac02cd4dc368b5221845541"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pelletier/go-toml"

#       github.com/prometheus/common v0.45.0
# [1] git ls-remote https://github.com/prometheus/common c59927ec74c04c0c17891bf27784fe7c484ae97f
SRCREV_common="c59927ec74c04c0c17891bf27784fe7c484ae97f"
SRC_URI += "git://github.com/prometheus/common;name=common;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/common"

#       github.com/prometheus/procfs v0.12.0
# [1] git ls-remote https://github.com/prometheus/procfs ff0ad85f7e8bcd5c677d99143f14a2a3aab533aa
SRCREV_procfs="ff0ad85f7e8bcd5c677d99143f14a2a3aab533aa"
SRC_URI += "git://github.com/prometheus/procfs;name=procfs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/procfs"

#       github.com/vishvananda/netns v0.0.4
# [1] git ls-remote https://github.com/vishvananda/netns 7a452d2d15292b2bfb2a2d88e6bdeac156a761b9
SRCREV_netns="7a452d2d15292b2bfb2a2d88e6bdeac156a761b9"
SRC_URI += "git://github.com/vishvananda/netns;name=netns;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vishvananda/netns"

#       go.opentelemetry.io/otel/sdk v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_sdk="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=sdk;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/sdk"

#       github.com/k3s-io/cri-dockerd v0.3.9-k3s2
# [1] git ls-remote https://github.com/k3s-io/cri-dockerd 0d2146805dcd844e15d02d6f1956b4cd0e4365cf
SRCREV_cri-dockerd="0d2146805dcd844e15d02d6f1956b4cd0e4365cf"
SRC_URI += "git://github.com/k3s-io/cri-dockerd;name=cri-dockerd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/cri-dockerd"

#       github.com/coreos/go-iptables v0.7.0
# [1] git ls-remote https://github.com/coreos/go-iptables b9dff5a19d9c3925da3f9b3c0a705de6c1fdc56c
SRCREV_go-iptables="b9dff5a19d9c3925da3f9b3c0a705de6c1fdc56c"
SRC_URI += "git://github.com/coreos/go-iptables;name=go-iptables;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-iptables"

#       github.com/flannel-io/flannel v0.24.2
# [1] git ls-remote https://github.com/flannel-io/flannel 3d56ed16e123a6fb06841ba920664b3ce4c99cda
SRCREV_flannel="3d56ed16e123a6fb06841ba920664b3ce4c99cda"
SRC_URI += "git://github.com/flannel-io/flannel;name=flannel;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/flannel-io/flannel"

#       github.com/ipfs/go-ds-leveldb v0.5.0
# [1] git ls-remote https://github.com/ipfs/go-ds-leveldb 6f6dc580f7325ad411fc5967ccee67e40545e208
SRCREV_go-ds-leveldb="6f6dc580f7325ad411fc5967ccee67e40545e208"
SRC_URI += "git://github.com/ipfs/go-ds-leveldb;name=go-ds-leveldb;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ipfs/go-ds-leveldb"

#       github.com/klauspost/compress v1.17.2
# [1] git ls-remote https://github.com/klauspost/compress 8eb6542f08f086fb92796f6d8a4531d754947309
SRCREV_compress="8eb6542f08f086fb92796f6d8a4531d754947309"
SRC_URI += "git://github.com/klauspost/compress;name=compress;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/klauspost/compress"

#       github.com/k3s-io/etcd/api/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_api-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=api-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/api/v3"

#       github.com/chenzhuoyu/base64x v0.0.0-20221115062448-fe3a3abad311
# [1] git ls-remote https://github.com/chenzhuoyu/base64x fe3a3abad31102e33411b1b239aa111b80ae336d
SRCREV_base64x="fe3a3abad31102e33411b1b239aa111b80ae336d"
SRC_URI += "git://github.com/chenzhuoyu/base64x;name=base64x;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/chenzhuoyu/base64x"

#       github.com/ipld/go-ipld-prime v0.20.0
# [1] git ls-remote https://github.com/ipld/go-ipld-prime 200b4a6b6fb6720911cb385aff05da55c39d56de
SRCREV_go-ipld-prime="200b4a6b6fb6720911cb385aff05da55c39d56de"
SRC_URI += "git://github.com/ipld/go-ipld-prime;name=go-ipld-prime;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/ipld/go-ipld-prime"

#       github.com/jackpal/go-nat-pmp v1.0.2
# [1] git ls-remote https://github.com/jackpal/go-nat-pmp 059203efa1edd7130293a583541b8308e7c640c4
SRCREV_go-nat-pmp="059203efa1edd7130293a583541b8308e7c640c4"
SRC_URI += "git://github.com/jackpal/go-nat-pmp;name=go-nat-pmp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jackpal/go-nat-pmp"

#       github.com/libp2p/go-netroute v0.2.1
# [1] git ls-remote https://github.com/libp2p/go-netroute 462cbfaf52f4c2a2321e6382455a8f56396f3664
SRCREV_go-netroute="462cbfaf52f4c2a2321e6382455a8f56396f3664"
SRC_URI += "git://github.com/libp2p/go-netroute;name=go-netroute;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-netroute"

#       github.com/libp2p/go-yamux/v4 v4.0.1
# [1] git ls-remote https://github.com/libp2p/go-yamux e584a210c72651b67829477b4b4285cae25b1a1b
SRCREV_go-yamux-v4="e584a210c72651b67829477b4b4285cae25b1a1b"
SRC_URI += "git://github.com/libp2p/go-yamux;name=go-yamux-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-yamux/v4"

#       github.com/marten-seemann/tcp v0.0.0-20210406111302-dfbc87cc63fd
# [1] git ls-remote https://github.com/marten-seemann/tcp dfbc87cc63fd003b9a070c76d605769fa3e2e3b2
SRCREV_tcp="dfbc87cc63fd003b9a070c76d605769fa3e2e3b2"
SRC_URI += "git://github.com/marten-seemann/tcp;name=tcp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/marten-seemann/tcp"

#       github.com/JeffAshton/win_pdh v0.0.0-20161109143554-76bb4ee9f0ab
# [1] git ls-remote https://github.com/JeffAshton/win_pdh 76bb4ee9f0ab50f77826f2a2ee7fb9d3880d6ec2
SRCREV_win_pdh="76bb4ee9f0ab50f77826f2a2ee7fb9d3880d6ec2"
SRC_URI += "git://github.com/JeffAshton/win_pdh;name=win_pdh;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/JeffAshton/win_pdh"

#       github.com/Microsoft/go-winio v0.6.1
# [1] git ls-remote https://github.com/microsoft/go-winio 070c828abb873da9e71c7247740253b50f7cf049
SRCREV_go-winio="070c828abb873da9e71c7247740253b50f7cf049"
SRC_URI += "git://github.com/microsoft/go-winio;name=go-winio;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Microsoft/go-winio"

#       github.com/containerd/cgroups v1.1.0
# [1] git ls-remote https://github.com/containerd/cgroups fe7323f622bc222e72473679f12a9089aeeda177
SRCREV_cgroups="fe7323f622bc222e72473679f12a9089aeeda177"
SRC_URI += "git://github.com/containerd/cgroups;name=cgroups;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/cgroups"

#       github.com/containerd/console v1.0.3
# [1] git ls-remote https://github.com/containerd/console b5cb846c9186d67bcae3ce3c324e47cd317d9527
SRCREV_console="b5cb846c9186d67bcae3ce3c324e47cd317d9527"
SRC_URI += "git://github.com/containerd/console;name=console;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/console"

#       github.com/containerd/go-runc v1.0.0
# [1] git ls-remote https://github.com/containerd/go-runc 16b287bc67d069a60fa48db15f330b790b74365b
SRCREV_go-runc="16b287bc67d069a60fa48db15f330b790b74365b"
SRC_URI += "git://github.com/containerd/go-runc;name=go-runc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/go-runc"

#       github.com/containerd/typeurl v1.0.2
# [1] git ls-remote https://github.com/containerd/typeurl 5e43fb8b75ed2f2305fc04e6918c8d10636771bc
SRCREV_typeurl="5e43fb8b75ed2f2305fc04e6918c8d10636771bc"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/typeurl"

#       github.com/dustin/go-humanize v1.0.1
# [1] git ls-remote https://github.com/dustin/go-humanize 9ec74ab2f7a7161664182fd4e5e292fccffbc75f
SRCREV_go-humanize="9ec74ab2f7a7161664182fd4e5e292fccffbc75f"
SRC_URI += "git://github.com/dustin/go-humanize;name=go-humanize;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/dustin/go-humanize"

#       github.com/evanphx/json-patch v5.6.0+incompatible
# [1] git ls-remote https://github.com/evanphx/json-patch 5561fe05a1ec79c9bca966376211b2ab81959671
SRCREV_json-patch="5561fe05a1ec79c9bca966376211b2ab81959671"
SRC_URI += "git://github.com/evanphx/json-patch;name=json-patch;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/evanphx/json-patch"

#       github.com/fvbommel/sortorder v1.1.0
# [1] git ls-remote https://github.com/fvbommel/sortorder a8d9302c17f9f46c6580b82b919672e58ef6e396
SRCREV_sortorder="a8d9302c17f9f46c6580b82b919672e58ef6e396"
SRC_URI += "git://github.com/fvbommel/sortorder;name=sortorder;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/fvbommel/sortorder"

#       github.com/go-task/slim-sprig v0.0.0-20230315185526-52ccab3ef572
# [1] git ls-remote https://github.com/go-task/slim-sprig 52ccab3ef572c7e1a2c258be183f9a9296d60152
SRCREV_slim-sprig="52ccab3ef572c7e1a2c258be183f9a9296d60152"
SRC_URI += "git://github.com/go-task/slim-sprig;name=slim-sprig;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-task/slim-sprig"

#       github.com/klauspost/cpuid/v2 v2.2.5
# [1] git ls-remote https://github.com/klauspost/cpuid 1af2d99c24e60b21f4c8e8ea63ed69523ebbbb16
SRCREV_cpuid-v2="1af2d99c24e60b21f4c8e8ea63ed69523ebbbb16"
SRC_URI += "git://github.com/klauspost/cpuid;name=cpuid-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/klauspost/cpuid/v2"

#       github.com/kylelemons/godebug v1.1.0
# [1] git ls-remote https://github.com/kylelemons/godebug 9ff306d4fbead574800b66369df5b6144732d58e
SRCREV_godebug="9ff306d4fbead574800b66369df5b6144732d58e"
SRC_URI += "git://github.com/kylelemons/godebug;name=godebug;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/kylelemons/godebug"

#       github.com/mdlayher/genetlink v1.3.2
# [1] git ls-remote https://github.com/mdlayher/genetlink 7531bffe0f5e10d1ce558d35e6feb5d1d1600851
SRCREV_genetlink="7531bffe0f5e10d1ce558d35e6feb5d1d1600851"
SRC_URI += "git://github.com/mdlayher/genetlink;name=genetlink;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mdlayher/genetlink"

#       github.com/moby/sys/mountinfo v0.6.2
# [1] git ls-remote https://github.com/moby/sys 1bf36f7188c31f2797c556c4c4d7d9af7a6a965b
SRCREV_mountinfo="1bf36f7188c31f2797c556c4c4d7d9af7a6a965b"
SRC_URI += "git://github.com/moby/sys;name=mountinfo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/sys/mountinfo"

#       github.com/modern-go/reflect2 v1.0.2
# [1] git ls-remote https://github.com/modern-go/reflect2 2b33151c9bbc5231aea69b8861c540102b087070
SRCREV_reflect2="2b33151c9bbc5231aea69b8861c540102b087070"
SRC_URI += "git://github.com/modern-go/reflect2;name=reflect2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/modern-go/reflect2"

#       github.com/peterbourgon/diskv v2.0.1+incompatible
# [1] git ls-remote https://github.com/peterbourgon/diskv 5f041e8faa004a95c88a202771f4cc3e991971e6
SRCREV_diskv="5f041e8faa004a95c88a202771f4cc3e991971e6"
SRC_URI += "git://github.com/peterbourgon/diskv;name=diskv;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/peterbourgon/diskv"

#       github.com/pmezard/go-difflib v1.0.1-0.20181226105442-5d4384ee4fb2
# [1] git ls-remote https://github.com/pmezard/go-difflib 5d4384ee4fb2527b0a1256a821ebfc92f91efefc
SRCREV_go-difflib="5d4384ee4fb2527b0a1256a821ebfc92f91efefc"
SRC_URI += "git://github.com/pmezard/go-difflib;name=go-difflib;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pmezard/go-difflib"

#       github.com/shengdoushi/base58 v1.0.0
# [1] git ls-remote https://github.com/shengdoushi/base58 c5f44ca1af76fb63925d5fba8fa7b85870199839
SRCREV_shengdoushi-base58="c5f44ca1af76fb63925d5fba8fa7b85870199839"
SRC_URI += "git://github.com/shengdoushi/base58;name=shengdoushi-base58;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/shengdoushi/base58"

#       github.com/stoewer/go-strcase v1.2.0
# [1] git ls-remote https://github.com/stoewer/go-strcase 7962b205553802087345c0b4c74d57b65236f676
SRCREV_go-strcase="7962b205553802087345c0b4c74d57b65236f676"
SRC_URI += "git://github.com/stoewer/go-strcase;name=go-strcase;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stoewer/go-strcase"

#       github.com/k3s-io/etcd/pkg/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_pkg-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=pkg-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/pkg/v3"

#       github.com/erikdubbelboer/gspt v0.0.0-20190125194910-e68493906b83
# [1] git ls-remote https://github.com/erikdubbelboer/gspt e68493906b8382891943ddc9960cb9c6ecd1a1f0
SRCREV_gspt="e68493906b8382891943ddc9960cb9c6ecd1a1f0"
SRC_URI += "git://github.com/erikdubbelboer/gspt;name=gspt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/erikdubbelboer/gspt"

#       github.com/go-sql-driver/mysql v1.7.1
# [1] git ls-remote https://github.com/go-sql-driver/mysql f20b2863636093e5fbf1481b59bdaff3b0fbb779
SRCREV_mysql="f20b2863636093e5fbf1481b59bdaff3b0fbb779"
SRC_URI += "git://github.com/go-sql-driver/mysql;name=mysql;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-sql-driver/mysql"

#       github.com/vishvananda/netlink v1.2.1-beta.2
# [1] git ls-remote https://github.com/vishvananda/netlink 5e915e0149386ce3d02379ff93f4c0a5601779d5
SRCREV_netlink="5e915e0149386ce3d02379ff93f4c0a5601779d5"
SRC_URI += "git://github.com/vishvananda/netlink;name=netlink;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vishvananda/netlink"

#       github.com/libp2p/go-cidranger v1.1.0
# [1] git ls-remote https://github.com/libp2p/go-cidranger 1dec7f87b45b32e24d3f59548ad61647de34586d
SRCREV_go-cidranger="1dec7f87b45b32e24d3f59548ad61647de34586d"
SRC_URI += "git://github.com/libp2p/go-cidranger;name=go-cidranger;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-cidranger"

#       github.com/libp2p/go-reuseport v0.4.0
# [1] git ls-remote https://github.com/libp2p/go-reuseport ac34b4fb35437abcc176b5bb97cc431d62d983e0
SRCREV_go-reuseport="ac34b4fb35437abcc176b5bb97cc431d62d983e0"
SRC_URI += "git://github.com/libp2p/go-reuseport;name=go-reuseport;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-reuseport"

#       github.com/quic-go/qtls-go1-20 v0.3.3
# [1] git ls-remote https://github.com/quic-go/qtls-go1-20 5ba42598e0a018acd682059ee240c6bb8d085b07
SRCREV_qtls-go1-20="5ba42598e0a018acd682059ee240c6bb8d085b07"
SRC_URI += "git://github.com/quic-go/qtls-go1-20;name=qtls-go1-20;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/quic-go/qtls-go1-20"

#       github.com/MakeNowJust/heredoc v1.0.0
# [1] git ls-remote https://github.com/makenowjust/heredoc bbd9af33722b79a933ef99c7c94833065e2d6c20
SRCREV_heredoc="bbd9af33722b79a933ef99c7c94833065e2d6c20"
SRC_URI += "git://github.com/makenowjust/heredoc;name=heredoc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/MakeNowJust/heredoc"

#       github.com/NYTimes/gziphandler v1.1.1
# [1] git ls-remote https://github.com/nytimes/gziphandler dd0439581c7657cb652dfe5c71d7d48baf39541d
SRCREV_gziphandler="dd0439581c7657cb652dfe5c71d7d48baf39541d"
SRC_URI += "git://github.com/nytimes/gziphandler;name=gziphandler;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/NYTimes/gziphandler"

#       github.com/canonical/go-dqlite v1.5.1
# [1] git ls-remote https://github.com/canonical/go-dqlite 830c1a017995b73322e86c2a6f2ca799c1caca07
SRCREV_go-dqlite="830c1a017995b73322e86c2a6f2ca799c1caca07"
SRC_URI += "git://github.com/canonical/go-dqlite;name=go-dqlite;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/canonical/go-dqlite"

#       github.com/cenkalti/backoff/v4 v4.2.1
# [1] git ls-remote https://github.com/cenkalti/backoff a04a6fe64ffb0e3fd0816460529d300be5f252df
SRCREV_backoff-v4="a04a6fe64ffb0e3fd0816460529d300be5f252df"
SRC_URI += "git://github.com/cenkalti/backoff;name=backoff-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cenkalti/backoff/v4"

#       github.com/chai2010/gettext-go v1.0.2
# [1] git ls-remote https://github.com/chai2010/gettext-go 274d1753d015d0362761b6a1cc2a572e6a035913
SRCREV_gettext-go="274d1753d015d0362761b6a1cc2a572e6a035913"
SRC_URI += "git://github.com/chai2010/gettext-go;name=gettext-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/chai2010/gettext-go"

#       github.com/containerd/btrfs/v2 v2.0.0
# [1] git ls-remote https://github.com/containerd/btrfs f611cf12b33f43269574b2ad82bcb55e4d6f9982
SRCREV_btrfs-v2="f611cf12b33f43269574b2ad82bcb55e4d6f9982"
SRC_URI += "git://github.com/containerd/btrfs;name=btrfs-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/btrfs/v2"

#       github.com/containerd/imgcrypt v1.1.7
# [1] git ls-remote https://github.com/containerd/imgcrypt 01a05dffff35aadeb0a3008016ed745e7ff6beda
SRCREV_imgcrypt="01a05dffff35aadeb0a3008016ed745e7ff6beda"
SRC_URI += "git://github.com/containerd/imgcrypt;name=imgcrypt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/imgcrypt"

#       github.com/containers/ocicrypt v1.1.6
# [1] git ls-remote https://github.com/containers/ocicrypt c61dfa5ee6c2ac10004c4e156d1a435f11c444cf
SRCREV_ocicrypt="c61dfa5ee6c2ac10004c4e156d1a435f11c444cf"
SRC_URI += "git://github.com/containers/ocicrypt;name=ocicrypt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containers/ocicrypt"

#       github.com/docker/distribution v2.8.2+incompatible
# [1] git ls-remote https://github.com/distribution/distribution 7c354a4b40feeea21d7eeae4de91c8ff7951e672
SRCREV_distribution="7c354a4b40feeea21d7eeae4de91c8ff7951e672"
SRC_URI += "git://github.com/distribution/distribution;name=distribution;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/distribution"

#       github.com/emicklei/go-restful v2.16.0+incompatible
# [1] git ls-remote https://github.com/emicklei/go-restful ac666c045e035603f2704c98c59e979fccbfa94f
SRCREV_go-restful="ac666c045e035603f2704c98c59e979fccbfa94f"
SRC_URI += "git://github.com/emicklei/go-restful;name=go-restful;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/emicklei/go-restful"

#       github.com/gregjones/httpcache v0.0.0-20180305231024-9cad4c3443a7
# [1] git ls-remote https://github.com/gregjones/httpcache 9cad4c3443a7200dd6400aef47183728de563a38
SRCREV_httpcache="9cad4c3443a7200dd6400aef47183728de563a38"
SRC_URI += "git://github.com/gregjones/httpcache;name=httpcache;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gregjones/httpcache"

#       github.com/jackc/pgservicefile v0.0.0-20221227161230-091c0ba34f0a
# [1] git ls-remote https://github.com/jackc/pgservicefile 091c0ba34f0a65a78ab8d0e313fde0695c0f7186
SRCREV_pgservicefile="091c0ba34f0a65a78ab8d0e313fde0695c0f7186"
SRC_URI += "git://github.com/jackc/pgservicefile;name=pgservicefile;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jackc/pgservicefile"

#       github.com/jonboulle/clockwork v0.4.0
# [1] git ls-remote https://github.com/jonboulle/clockwork 606c48b92358fcca153952b56fb0d14d6845f84a
SRCREV_clockwork="606c48b92358fcca153952b56fb0d14d6845f84a"
SRC_URI += "git://github.com/jonboulle/clockwork;name=clockwork;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jonboulle/clockwork"

#       github.com/mistifyio/go-zfs/v3 v3.0.1
# [1] git ls-remote https://github.com/mistifyio/go-zfs f6d5c373cf63ae2477370aa9bda9fa49804c2d72
SRCREV_go-zfs-v3="f6d5c373cf63ae2477370aa9bda9fa49804c2d72"
SRC_URI += "git://github.com/mistifyio/go-zfs;name=go-zfs-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mistifyio/go-zfs/v3"

#       github.com/moby/sys/sequential v0.5.0
# [1] git ls-remote https://github.com/moby/sys b22ba8a69b306f0b4adbbe2a529457e6283ed9f7
SRCREV_sequential="b22ba8a69b306f0b4adbbe2a529457e6283ed9f7"
SRC_URI += "git://github.com/moby/sys;name=sequential;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/sys/sequential"

#       github.com/syndtr/gocapability v0.0.0-20200815063812-42c35b437635
# [1] git ls-remote https://github.com/syndtr/gocapability 42c35b4376354fd554efc7ad35e0b7f94e3a0ffb
SRCREV_gocapability="42c35b4376354fd554efc7ad35e0b7f94e3a0ffb"
SRC_URI += "git://github.com/syndtr/gocapability;name=gocapability;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/syndtr/gocapability"

#       github.com/k3s-io/etcd/raft/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_raft-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=raft-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/raft/v3"

#       go.opentelemetry.io/otel/trace v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_trace="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=trace;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/trace"

#       go.opentelemetry.io/proto/otlp v0.19.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-proto-go c98f6b5f7362c9b4a717c7a4dab1ba90796a8f21
SRCREV_otlp="c98f6b5f7362c9b4a717c7a4dab1ba90796a8f21"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-proto-go;name=otlp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/proto/otlp"

#       github.com/natefinch/lumberjack v2.0.0+incompatible
# [1] git ls-remote https://github.com/natefinch/lumberjack 7d6a1875575e09256dc552b4c0e450dcd02bd10e
SRCREV_lumberjack="7d6a1875575e09256dc552b4c0e450dcd02bd10e"
SRC_URI += "git://github.com/natefinch/lumberjack;name=lumberjack;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/natefinch/lumberjack"

#       github.com/rancher/remotedialer v0.3.0
# [1] git ls-remote https://github.com/rancher/remotedialer 24498689a9ccec9adbdbadbe3f5d18df75ba133b
SRCREV_remotedialer="24498689a9ccec9adbdbadbe3f5d18df75ba133b"
SRC_URI += "git://github.com/rancher/remotedialer;name=remotedialer;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/remotedialer"

#       github.com/davidlazar/go-crypto v0.0.0-20200604182044-b73af7476f6c
# [1] git ls-remote https://github.com/davidlazar/go-crypto b73af7476f6c55b31aa2797d1f98afc94699548d
SRCREV_go-crypto="b73af7476f6c55b31aa2797d1f98afc94699548d"
SRC_URI += "git://github.com/davidlazar/go-crypto;name=go-crypto;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/davidlazar/go-crypto"

#       github.com/hashicorp/golang-lru v0.5.4
# [1] git ls-remote https://github.com/hashicorp/golang-lru 14eae340515388ca95aa8e7b86f0de668e981f54
SRCREV_golang-lru="14eae340515388ca95aa8e7b86f0de668e981f54"
SRC_URI += "git://github.com/hashicorp/golang-lru;name=golang-lru;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/golang-lru"

#       github.com/pelletier/go-toml/v2 v2.1.1
# [1] git ls-remote https://github.com/pelletier/go-toml 34765b4a9e937ab927b5bd57231e98c68fe13109
SRCREV_go-toml-v2="34765b4a9e937ab927b5bd57231e98c68fe13109"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pelletier/go-toml/v2"

#       github.com/slok/go-http-metrics v0.10.0
# [1] git ls-remote https://github.com/slok/go-http-metrics 9382ededffcb5ecf9f7041bfb779ddc1fc9c08dc
SRCREV_go-http-metrics="9382ededffcb5ecf9f7041bfb779ddc1fc9c08dc"
SRC_URI += "git://github.com/slok/go-http-metrics;name=go-http-metrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/slok/go-http-metrics"

#       github.com/xenitab/pkg/channels v0.0.2
# [1] git ls-remote https://github.com/xenitab/pkg 94c2ab1cbf9c7aff34ed28237765cefd6d409f34
SRCREV_channels="94c2ab1cbf9c7aff34ed28237765cefd6d409f34"
SRC_URI += "git://github.com/xenitab/pkg;name=channels;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xenitab/pkg/channels"

#       github.com/euank/go-kmsg-parser v2.0.0+incompatible
# [1] git ls-remote https://github.com/euank/go-kmsg-parser 5ba4d492e455a77d25dcf0d2c4acc9f2afebef4e
SRCREV_go-kmsg-parser="5ba4d492e455a77d25dcf0d2c4acc9f2afebef4e"
SRC_URI += "git://github.com/euank/go-kmsg-parser;name=go-kmsg-parser;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/euank/go-kmsg-parser"

#       github.com/exponent-io/jsonpath v0.0.0-20151013193312-d6023ce2651d
# [1] git ls-remote https://github.com/exponent-io/jsonpath d6023ce2651d8eafb5c75bb0c7167536102ec9f5
SRCREV_jsonpath="d6023ce2651d8eafb5c75bb0c7167536102ec9f5"
SRC_URI += "git://github.com/exponent-io/jsonpath;name=jsonpath;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/exponent-io/jsonpath"

#       github.com/googleapis/gax-go/v2 v2.12.0
# [1] git ls-remote https://github.com/googleapis/gax-go db3387b70e605dfc1f09513359d396496a91c66b
SRCREV_gax-go-v2="db3387b70e605dfc1f09513359d396496a91c66b"
SRC_URI += "git://github.com/googleapis/gax-go;name=gax-go-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/googleapis/gax-go/v2"

#       github.com/hashicorp/go-version v1.6.0
# [1] git ls-remote https://github.com/hashicorp/go-version 78d058c5618891f74d604bd15356fca690b64d8a
SRCREV_go-version="78d058c5618891f74d604bd15356fca690b64d8a"
SRC_URI += "git://github.com/hashicorp/go-version;name=go-version;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/go-version"

#       github.com/mitchellh/go-homedir v1.1.0
# [1] git ls-remote https://github.com/mitchellh/go-homedir af06845cf3004701891bf4fdb884bfe4920b3727
SRCREV_go-homedir="af06845cf3004701891bf4fdb884bfe4920b3727"
SRC_URI += "git://github.com/mitchellh/go-homedir;name=go-homedir;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mitchellh/go-homedir"

#       github.com/modern-go/concurrent v0.0.0-20180306012644-bacd9c7ef1dd
# [1] git ls-remote https://github.com/modern-go/concurrent bacd9c7ef1dd9b15be4a9909b8ac7a4e313eec94
SRCREV_concurrent="bacd9c7ef1dd9b15be4a9909b8ac7a4e313eec94"
SRC_URI += "git://github.com/modern-go/concurrent;name=concurrent;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/modern-go/concurrent"

#       github.com/pquerna/cachecontrol v0.1.0
# [1] git ls-remote https://github.com/pquerna/cachecontrol fb00f8a766ae43bf209f50299ce7d69669416dfb
SRCREV_cachecontrol="fb00f8a766ae43bf209f50299ce7d69669416dfb"
SRC_URI += "git://github.com/pquerna/cachecontrol;name=cachecontrol;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pquerna/cachecontrol"

#       github.com/tchap/go-patricia/v2 v2.3.1
# [1] git ls-remote https://github.com/tchap/go-patricia 5fc88dd7937ad82ca516f7f1f6b2c06dd0180309
SRCREV_go-patricia-v2="5fc88dd7937ad82ca516f7f1f6b2c06dd0180309"
SRC_URI += "git://github.com/tchap/go-patricia;name=go-patricia-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/tchap/go-patricia/v2"

#       go.opentelemetry.io/otel/metric v0.32.1
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go d7bfe6675fe79b0c01cae3d4c5f06330b2fece73
SRCREV_metric="d7bfe6675fe79b0c01cae3d4c5f06330b2fece73"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=metric;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/metric"

#       github.com/k3s-io/kube-router/v2 v2.0.1
# [1] git ls-remote https://github.com/k3s-io/kube-router 6842973d656f0bf1562858d278ea5d1f06a16f56
SRCREV_v2="6842973d656f0bf1562858d278ea5d1f06a16f56"
SRC_URI += "git://github.com/k3s-io/kube-router;name=v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kube-router/v2"

#       github.com/containerd/cgroups/v3 v3.0.2
# [1] git ls-remote https://github.com/containerd/cgroups 8fa64246e17ceea54277b3ad7139d9ec17545bfa
SRCREV_v3="8fa64246e17ceea54277b3ad7139d9ec17545bfa"
SRC_URI += "git://github.com/containerd/cgroups;name=v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/cgroups/v3"

#       github.com/go-bindata/go-bindata v3.1.2+incompatible
# [1] git ls-remote https://github.com/go-bindata/go-bindata ff7109080027ec152dabb369e157c4f359b76f31
SRCREV_go-bindata="ff7109080027ec152dabb369e157c4f359b76f31"
SRC_URI += "git://github.com/go-bindata/go-bindata;name=go-bindata;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-bindata/go-bindata"

#       github.com/k3s-io/etcd/client/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_client-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=client-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/client/v3"

#       github.com/k3s-io/etcd/server/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_server-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=server-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/server/v3"

#       github.com/go-playground/locales v0.14.1
# [1] git ls-remote https://github.com/go-playground/locales ce315c8672599942003599943a1e64288f55b03f
SRCREV_locales="ce315c8672599942003599943a1e64288f55b03f"
SRC_URI += "git://github.com/go-playground/locales;name=locales;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-playground/locales"

#       github.com/libp2p/go-buffer-pool v0.1.0
# [1] git ls-remote https://github.com/libp2p/go-buffer-pool c5070857211a0615ebd7b56588154941af580a4d
SRCREV_go-buffer-pool="c5070857211a0615ebd7b56588154941af580a4d"
SRC_URI += "git://github.com/libp2p/go-buffer-pool;name=go-buffer-pool;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-buffer-pool"

#       github.com/containerd/continuity v0.4.2
# [1] git ls-remote https://github.com/containerd/continuity 77a2d47a6668b82465fdf6cb749fe3a2aa2c9743
SRCREV_continuity="77a2d47a6668b82465fdf6cb749fe3a2aa2c9743"
SRC_URI += "git://github.com/containerd/continuity;name=continuity;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/continuity"

#       github.com/containerd/typeurl/v2 v2.1.1
# [1] git ls-remote https://github.com/containerd/typeurl 7ef6316b771f959cbb208b229e3423a466947df3
SRCREV_typeurl-v2="7ef6316b771f959cbb208b229e3423a466947df3"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/typeurl/v2"

#       github.com/coreos/go-systemd/v22 v22.5.0
# [1] git ls-remote https://github.com/coreos/go-systemd d5623bf85e8e73ae6352f78ee6b55a287619dd4e
SRCREV_v22="d5623bf85e8e73ae6352f78ee6b55a287619dd4e"
SRC_URI += "git://github.com/coreos/go-systemd;name=v22;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-systemd/v22"

#       github.com/cpuguy83/go-md2man/v2 v2.0.3
# [1] git ls-remote https://github.com/cpuguy83/go-md2man f67b5f6400a3ea2156517041a329ae5f5935395c
SRCREV_go-md2man-v2="f67b5f6400a3ea2156517041a329ae5f5935395c"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=go-md2man-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/docker/go-connections v0.5.0
# [1] git ls-remote https://github.com/docker/go-connections fa09c952e3eadbffaf8afc5b8a1667158ba38ace
SRCREV_go-connections="fa09c952e3eadbffaf8afc5b8a1667158ba38ace"
SRC_URI += "git://github.com/docker/go-connections;name=go-connections;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/go-connections"

#       github.com/google/gnostic-models v0.6.9-0.20230804172637-c7be7c783f49
# [1] git ls-remote https://github.com/google/gnostic-models c7be7c783f49e86348a1081eb387e01a347a4f23
SRCREV_gnostic-models="c7be7c783f49e86348a1081eb387e01a347a4f23"
SRC_URI += "git://github.com/google/gnostic-models;name=gnostic-models;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/gnostic-models"

#       github.com/mitchellh/go-wordwrap v1.0.1
# [1] git ls-remote https://github.com/mitchellh/go-wordwrap ecf0936a077a4bd73a1cc2ac5c370f2b55618d62
SRCREV_go-wordwrap="ecf0936a077a4bd73a1cc2ac5c370f2b55618d62"
SRC_URI += "git://github.com/mitchellh/go-wordwrap;name=go-wordwrap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mitchellh/go-wordwrap"

#       github.com/k3s-io/etcd/client/v2 v2.305.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_client-v2="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=client-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/client/v2"

#       gopkg.in/natefinch/lumberjack.v2 v2.2.1
# [1] git ls-remote https://github.com/natefinch/lumberjack 4cb27fcfbb0f35cb48c542c5ea80b7c1d18933d0
SRCREV_lumberjack.v2="4cb27fcfbb0f35cb48c542c5ea80b7c1d18933d0"
SRC_URI += "git://github.com/natefinch/lumberjack;name=lumberjack.v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/natefinch/lumberjack.v2"

#       github.com/k3s-io/helm-controller v0.15.8
# [1] git ls-remote https://github.com/k3s-io/helm-controller 6479edd3c7f919dd9cc65a88aca75390f391eb4f
SRCREV_helm-controller="6479edd3c7f919dd9cc65a88aca75390f391eb4f"
SRC_URI += "git://github.com/k3s-io/helm-controller;name=helm-controller;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/helm-controller"

#       github.com/mwitkow/go-http-dialer v0.0.0-20161116154839-378f744fb2b8
# [1] git ls-remote https://github.com/mwitkow/go-http-dialer 378f744fb2b81a6b96e3f40cde4f3bcab5a9cff0
SRCREV_go-http-dialer="378f744fb2b81a6b96e3f40cde4f3bcab5a9cff0"
SRC_URI += "git://github.com/mwitkow/go-http-dialer;name=go-http-dialer;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mwitkow/go-http-dialer"

#       github.com/opencontainers/selinux v1.10.1
# [1] git ls-remote https://github.com/opencontainers/selinux 84e248a28e776216cd33a51fdea90a20fe308136
SRCREV_selinux="84e248a28e776216cd33a51fdea90a20fe308136"
SRC_URI += "git://github.com/opencontainers/selinux;name=selinux;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/selinux"

#       github.com/k3s-io/etcd/etcdutl/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_etcdutl-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=etcdutl-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/etcdutl/v3"

#       github.com/libp2p/go-flow-metrics v0.1.0
# [1] git ls-remote https://github.com/libp2p/go-flow-metrics 3f13d05958e2d1be0245aed1bdb38f9ff1b4efdc
SRCREV_go-flow-metrics="3f13d05958e2d1be0245aed1bdb38f9ff1b4efdc"
SRC_URI += "git://github.com/libp2p/go-flow-metrics;name=go-flow-metrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-flow-metrics"

#       github.com/multiformats/go-base32 v0.1.0
# [1] git ls-remote https://github.com/multiformats/go-base32 a16b66327f327428b32b919939b8c93482507e1f
SRCREV_go-base32="a16b66327f327428b32b919939b8c93482507e1f"
SRC_URI += "git://github.com/multiformats/go-base32;name=go-base32;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-base32"

#       github.com/multiformats/go-base36 v0.2.0
# [1] git ls-remote https://github.com/multiformats/go-base36 da52c98bb97cfaa321be04030bc97dcee7de63ff
SRCREV_go-base36="da52c98bb97cfaa321be04030bc97dcee7de63ff"
SRC_URI += "git://github.com/multiformats/go-base36;name=go-base36;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-base36"

#       github.com/multiformats/go-varint v0.0.7
# [1] git ls-remote https://github.com/multiformats/go-varint 8c8129accb08fc978bb276c81d568c41eafdd48f
SRCREV_go-varint="8c8129accb08fc978bb276c81d568c41eafdd48f"
SRC_URI += "git://github.com/multiformats/go-varint;name=go-varint;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-varint"

#       github.com/Azure/azure-sdk-for-go v68.0.0+incompatible
# [1] git ls-remote https://github.com/Azure/azure-sdk-for-go 2187aca40bbf6931ffac666977e5d29128d82585
SRCREV_azure-sdk-for-go="2187aca40bbf6931ffac666977e5d29128d82585"
SRC_URI += "git://github.com/Azure/azure-sdk-for-go;name=azure-sdk-for-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/azure-sdk-for-go"

#       github.com/asaskevich/govalidator v0.0.0-20190424111038-f61b66f89f4a
# [1] git ls-remote https://github.com/asaskevich/govalidator f61b66f89f4a311bef65f13e575bcf1a2ffadda6
SRCREV_govalidator="f61b66f89f4a311bef65f13e575bcf1a2ffadda6"
SRC_URI += "git://github.com/asaskevich/govalidator;name=govalidator;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/asaskevich/govalidator"

#       github.com/emicklei/go-restful/v3 v3.9.0
# [1] git ls-remote https://github.com/emicklei/go-restful ce871fa2f7069b65c784c9c708da1f00b1f2bd66
SRCREV_go-restful-v3="ce871fa2f7069b65c784c9c708da1f00b1f2bd66"
SRC_URI += "git://github.com/emicklei/go-restful;name=go-restful-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/emicklei/go-restful/v3"

#       github.com/go-openapi/jsonpointer v0.20.0
# [1] git ls-remote https://github.com/go-openapi/jsonpointer 7df7a464d60e04018cf8f616a7abda94907fdf63
SRCREV_jsonpointer="7df7a464d60e04018cf8f616a7abda94907fdf63"
SRC_URI += "git://github.com/go-openapi/jsonpointer;name=jsonpointer;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-openapi/jsonpointer"

#       github.com/hashicorp/go-cleanhttp v0.5.2
# [1] git ls-remote https://github.com/hashicorp/go-cleanhttp 6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2
SRCREV_go-cleanhttp="6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2"
SRC_URI += "git://github.com/hashicorp/go-cleanhttp;name=go-cleanhttp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/go-cleanhttp"

#       github.com/nats-io/nats-server/v2 v2.10.5
# [1] git ls-remote https://github.com/nats-io/nats-server 0883d32bbcc5619603a9e5344d15aa10d069f059
SRCREV_nats-server-v2="0883d32bbcc5619603a9e5344d15aa10d069f059"
SRC_URI += "git://github.com/nats-io/nats-server;name=nats-server-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/nats-server/v2"

#       golang.zx2c4.com/wireguard/wgctrl v0.0.0-20230429144221-925a1e7659e6
# [1] git ls-remote https://github.com/WireGuard/wgctrl-go 925a1e7659e675c94c1a659d39daa9141e450c7d
SRCREV_wgctrl="925a1e7659e675c94c1a659d39daa9141e450c7d"
SRC_URI += "git://github.com/WireGuard/wgctrl-go;name=wgctrl;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.zx2c4.com/wireguard/wgctrl"

#       github.com/rancher/dynamiclistener v0.3.6
# [1] git ls-remote https://github.com/rancher/dynamiclistener 0a2d8dff62fde6dfaf009141c12b30c316d8cff3
SRCREV_dynamiclistener="0a2d8dff62fde6dfaf009141c12b30c316d8cff3"
SRC_URI += "git://github.com/rancher/dynamiclistener;name=dynamiclistener;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/dynamiclistener"

#       github.com/gabriel-vasile/mimetype v1.4.2
# [1] git ls-remote https://github.com/gabriel-vasile/mimetype 6f575b3e3509415374009db9cb81d6eae1fdfefb
SRCREV_mimetype="6f575b3e3509415374009db9cb81d6eae1fdfefb"
SRC_URI += "git://github.com/gabriel-vasile/mimetype;name=mimetype;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gabriel-vasile/mimetype"

#       github.com/hashicorp/golang-lru/v2 v2.0.5
# [1] git ls-remote https://github.com/hashicorp/golang-lru 99d7b177d1c3f01ae145e824fe627961e76edb8b
SRCREV_golang-lru-v2="99d7b177d1c3f01ae145e824fe627961e76edb8b"
SRC_URI += "git://github.com/hashicorp/golang-lru;name=golang-lru-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/golang-lru/v2"

#       github.com/libp2p/go-libp2p-record v0.2.0
# [1] git ls-remote https://github.com/libp2p/go-libp2p-record 90bb9b0e21ffe5e9a5f1af1c1e8cc6d9a0fce24c
SRCREV_go-libp2p-record="90bb9b0e21ffe5e9a5f1af1c1e8cc6d9a0fce24c"
SRC_URI += "git://github.com/libp2p/go-libp2p-record;name=go-libp2p-record;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-libp2p-record"

#       github.com/quic-go/webtransport-go v0.5.3
# [1] git ls-remote https://github.com/quic-go/webtransport-go 16472ffb325d4869a24326e509abf359a8309775
SRCREV_webtransport-go="16472ffb325d4869a24326e509abf359a8309775"
SRC_URI += "git://github.com/quic-go/webtransport-go;name=webtransport-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/quic-go/webtransport-go"

#       github.com/containernetworking/cni v1.1.2
# [1] git ls-remote https://github.com/containernetworking/cni 3363d143688bb83ca18489ac8b9dc204c1d49c4a
SRCREV_cni="3363d143688bb83ca18489ac8b9dc204c1d49c4a"
SRC_URI += "git://github.com/containernetworking/cni;name=cni;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containernetworking/cni"

#       github.com/hashicorp/go-multierror v1.1.1
# [1] git ls-remote https://github.com/hashicorp/go-multierror 9974e9ec57696378079ecc3accd3d6f29401b3a0
SRCREV_go-multierror="9974e9ec57696378079ecc3accd3d6f29401b3a0"
SRC_URI += "git://github.com/hashicorp/go-multierror;name=go-multierror;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/go-multierror"

#       github.com/prometheus/client_model v0.5.0
# [1] git ls-remote https://github.com/prometheus/client_model 1c92cadf7d8fa1726bae12e6025cca9b86d2ba5f
SRCREV_client_model="1c92cadf7d8fa1726bae12e6025cca9b86d2ba5f"
SRC_URI += "git://github.com/prometheus/client_model;name=client_model;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/client_model"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2="4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/russross/blackfriday/v2"

#       sigs.k8s.io/kustomize/kustomize/v5 v5.0.4-0.20230601165947-6ce0bf390ce3
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize 6ce0bf390ce3dae580947a2b739da3306c675eef
SRCREV_kustomize-v5="6ce0bf390ce3dae580947a2b739da3306c675eef"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kustomize-v5;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/kustomize/kustomize/v5"

#       github.com/libp2p/go-libp2p-kad-dht v0.25.2
# [1] git ls-remote https://github.com/libp2p/go-libp2p-kad-dht bdca14419ec5f7ad0790f17856964bb99bee7436
SRCREV_go-libp2p-kad-dht="bdca14419ec5f7ad0790f17856964bb99bee7436"
SRC_URI += "git://github.com/libp2p/go-libp2p-kad-dht;name=go-libp2p-kad-dht;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-libp2p-kad-dht"

#       github.com/libp2p/go-libp2p-kbucket v0.6.3
# [1] git ls-remote https://github.com/libp2p/go-libp2p-kbucket 437b9fccd6a22835a67b8fe2a5eae0b92f307224
SRCREV_go-libp2p-kbucket="437b9fccd6a22835a67b8fe2a5eae0b92f307224"
SRC_URI += "git://github.com/libp2p/go-libp2p-kbucket;name=go-libp2p-kbucket;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-libp2p-kbucket"

#       github.com/Azure/go-autorest/logger v0.2.1
# [1] git ls-remote https://github.com/Azure/go-autorest 820a319d2214dc91d083022ae5ec50070175314c
SRCREV_logger="820a319d2214dc91d083022ae5ec50070175314c"
SRC_URI += "git://github.com/Azure/go-autorest;name=logger;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/logger"

#       github.com/daviddengcn/go-colortext v1.0.0
# [1] git ls-remote https://github.com/daviddengcn/go-colortext dc4cd66b56a892657c0bea8bf4389d35210ce0ee
SRCREV_go-colortext="dc4cd66b56a892657c0bea8bf4389d35210ce0ee"
SRC_URI += "git://github.com/daviddengcn/go-colortext;name=go-colortext;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/daviddengcn/go-colortext"

#       github.com/go-openapi/jsonreference v0.20.2
# [1] git ls-remote https://github.com/go-openapi/jsonreference 1f158e563669961b8e54817e3ea57978d439ffff
SRCREV_jsonreference="1f158e563669961b8e54817e3ea57978d439ffff"
SRC_URI += "git://github.com/go-openapi/jsonreference;name=jsonreference;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-openapi/jsonreference"

#       github.com/opencontainers/go-digest v1.0.0
# [1] git ls-remote https://github.com/opencontainers/go-digest ea51bea511f75cfa3ef6098cc253c5c3609b037a
SRCREV_go-digest="ea51bea511f75cfa3ef6098cc253c5c3609b037a"
SRC_URI += "git://github.com/opencontainers/go-digest;name=go-digest;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/go-digest"

#       github.com/prometheus/client_golang v1.18.0
# [1] git ls-remote https://github.com/prometheus/client_golang 53be91d12107cb69053a8792d0a3a2a6124d59cf
SRCREV_client_golang="53be91d12107cb69053a8792d0a3a2a6124d59cf"
SRC_URI += "git://github.com/prometheus/client_golang;name=client_golang;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/client_golang"

#       github.com/tmc/grpc-websocket-proxy v0.0.0-20220101234140-673ab2c3ae75
# [1] git ls-remote https://github.com/tmc/grpc-websocket-proxy 673ab2c3ae75cc01952b84b88590e30e75dcf395
SRCREV_grpc-websocket-proxy="673ab2c3ae75cc01952b84b88590e30e75dcf395"
SRC_URI += "git://github.com/tmc/grpc-websocket-proxy;name=grpc-websocket-proxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/tmc/grpc-websocket-proxy"

#       github.com/k3s-io/etcd/client/pkg/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_pkg-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=pkg-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/client/pkg/v3"

#       github.com/libp2p/go-libp2p-asn-util v0.3.0
# [1] git ls-remote https://github.com/libp2p/go-libp2p-asn-util bce6420c4bcf80f1ab03cdfd4b64575e53328099
SRCREV_go-libp2p-asn-util="bce6420c4bcf80f1ab03cdfd4b64575e53328099"
SRC_URI += "git://github.com/libp2p/go-libp2p-asn-util;name=go-libp2p-asn-util;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-libp2p-asn-util"

#       github.com/multiformats/go-multiaddr v0.12.0
# [1] git ls-remote https://github.com/multiformats/go-multiaddr 5dd793c6fc4935fad347429a48a168acc8073474
SRCREV_go-multiaddr="5dd793c6fc4935fad347429a48a168acc8073474"
SRC_URI += "git://github.com/multiformats/go-multiaddr;name=go-multiaddr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-multiaddr"

#       github.com/multiformats/go-multibase v0.2.0
# [1] git ls-remote https://github.com/multiformats/go-multibase 58a41f7df1d82d16599e259325b3337d69f70e3b
SRCREV_go-multibase="58a41f7df1d82d16599e259325b3337d69f70e3b"
SRC_URI += "git://github.com/multiformats/go-multibase;name=go-multibase;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-multibase"

#       github.com/multiformats/go-multihash v0.2.3
# [1] git ls-remote https://github.com/multiformats/go-multihash ff9da31500dddfc675e996601a05cdfc3ce7c764
SRCREV_go-multihash="ff9da31500dddfc675e996601a05cdfc3ce7c764"
SRC_URI += "git://github.com/multiformats/go-multihash;name=go-multihash;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-multihash"

#       github.com/whyrusleeping/go-keyspace v0.0.0-20160322163242-5b898ac5add1
# [1] git ls-remote https://github.com/whyrusleeping/go-keyspace 5b898ac5add1da7178a4a98e69cb7b9205c085ee
SRCREV_go-keyspace="5b898ac5add1da7178a4a98e69cb7b9205c085ee"
SRC_URI += "git://github.com/whyrusleeping/go-keyspace;name=go-keyspace;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/whyrusleeping/go-keyspace"

#       cloud.google.com/go/compute/metadata v0.2.3
# [1] git ls-remote https://github.com/googleapis/google-cloud-go cf8081fada0955a1682ce3fc400b44bc141309c7
SRCREV_metadata="cf8081fada0955a1682ce3fc400b44bc141309c7"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=metadata;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/compute/metadata"

#       github.com/AdaLogics/go-fuzz-headers v0.0.0-20230811130428-ced1acdcaa24
# [1] git ls-remote https://github.com/AdaLogics/go-fuzz-headers ced1acdcaa24dc39c01b039fc37576c395f506cf
SRCREV_go-fuzz-headers="ced1acdcaa24dc39c01b039fc37576c395f506cf"
SRC_URI += "git://github.com/AdaLogics/go-fuzz-headers;name=go-fuzz-headers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/AdaLogics/go-fuzz-headers"

#       github.com/Azure/go-autorest/tracing v0.6.0
# [1] git ls-remote https://github.com/Azure/go-autorest b3a0b30a7423314874b3f585289e0e260cf5fc8d
SRCREV_tracing="b3a0b30a7423314874b3f585289e0e260cf5fc8d"
SRC_URI += "git://github.com/Azure/go-autorest;name=tracing;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/tracing"

#       github.com/inconshreveable/mousetrap v1.1.0
# [1] git ls-remote https://github.com/inconshreveable/mousetrap 4e8053ee7ef85a6bd26368364a6d27f1641c1d21
SRCREV_mousetrap="4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/inconshreveable/mousetrap"

#       github.com/opencontainers/image-spec v1.1.0-rc5
# [1] git ls-remote https://github.com/opencontainers/image-spec 1e54f0195ce54b4a1a2ecbac8eab7686d91d3080
SRCREV_image-spec="1e54f0195ce54b4a1a2ecbac8eab7686d91d3080"
SRC_URI += "git://github.com/opencontainers/image-spec;name=image-spec;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/image-spec"

#       github.com/seccomp/libseccomp-golang v0.10.0
# [1] git ls-remote https://github.com/seccomp/libseccomp-golang 879684a7b708c2ebc730e62fdae39ae9081b4680
SRCREV_libseccomp-golang="879684a7b708c2ebc730e62fdae39ae9081b4680"
SRC_URI += "git://github.com/seccomp/libseccomp-golang;name=libseccomp-golang;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/seccomp/libseccomp-golang"

#       github.com/stefanberger/go-pkcs11uri v0.0.0-20201008174630-78d3cae3a980
# [1] git ls-remote https://github.com/stefanberger/go-pkcs11uri 78d3cae3a9805d89aa4fa80a362ca944c89a1b99
SRCREV_go-pkcs11uri="78d3cae3a9805d89aa4fa80a362ca944c89a1b99"
SRC_URI += "git://github.com/stefanberger/go-pkcs11uri;name=go-pkcs11uri;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stefanberger/go-pkcs11uri"

#       sigs.k8s.io/structured-merge-diff/v4 v4.3.0
# [1] git ls-remote https://github.com/kubernetes-sigs/structured-merge-diff 7785c50b1768fa997df435a484ab9aa5041596a6
SRCREV_structured-merge-diff-v4="7785c50b1768fa997df435a484ab9aa5041596a6"
SRC_URI += "git://github.com/kubernetes-sigs/structured-merge-diff;name=structured-merge-diff-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/structured-merge-diff/v4"

#       github.com/jbenet/go-temp-err-catcher v0.1.0
# [1] git ls-remote https://github.com/jbenet/go-temp-err-catcher fa11adda5e7cccb838a208007c9ea79dda63c0c0
SRCREV_go-temp-err-catcher="fa11adda5e7cccb838a208007c9ea79dda63c0c0"
SRC_URI += "git://github.com/jbenet/go-temp-err-catcher;name=go-temp-err-catcher;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/jbenet/go-temp-err-catcher"

#       github.com/multiformats/go-multicodec v0.9.0
# [1] git ls-remote https://github.com/multiformats/go-multicodec b8b4bf5270f9f220f00bcdeddf1641b13e67cc0b
SRCREV_go-multicodec="b8b4bf5270f9f220f00bcdeddf1641b13e67cc0b"
SRC_URI += "git://github.com/multiformats/go-multicodec;name=go-multicodec;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-multicodec"

#       github.com/opentracing/opentracing-go v1.2.0
# [1] git ls-remote https://github.com/opentracing/opentracing-go d34af3eaa63c4d08ab54863a4bdd0daa45212e12
SRCREV_opentracing-go="d34af3eaa63c4d08ab54863a4bdd0daa45212e12"
SRC_URI += "git://github.com/opentracing/opentracing-go;name=opentracing-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opentracing/opentracing-go"

#       github.com/twitchyliquid64/golang-asm v0.15.1
# [1] git ls-remote https://github.com/twitchyliquid64/golang-asm 8d7f1f783b11f9a00f5bcdfcae17f5ac8f22512e
SRCREV_golang-asm="8d7f1f783b11f9a00f5bcdfcae17f5ac8f22512e"
SRC_URI += "git://github.com/twitchyliquid64/golang-asm;name=golang-asm;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/twitchyliquid64/golang-asm"

#       github.com/Azure/go-autorest/autorest v0.11.29
# [1] git ls-remote https://github.com/Azure/go-autorest c2958ac74c65c138045daa60f149c5f9d949d743
SRCREV_autorest="c2958ac74c65c138045daa60f149c5f9d949d743"
SRC_URI += "git://github.com/Azure/go-autorest;name=autorest;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest"

#       github.com/cyphar/filepath-securejoin v0.2.4
# [1] git ls-remote https://github.com/cyphar/filepath-securejoin 2710d06c5b4ba3168beffa0689798d2db12e8ac4
SRCREV_filepath-securejoin="2710d06c5b4ba3168beffa0689798d2db12e8ac4"
SRC_URI += "git://github.com/cyphar/filepath-securejoin;name=filepath-securejoin;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cyphar/filepath-securejoin"

#       github.com/hashicorp/go-retryablehttp v0.7.4
# [1] git ls-remote https://github.com/hashicorp/go-retryablehttp 571a88bc9c3b7c64575f0e9b0f646af1510f2c76
SRCREV_go-retryablehttp="571a88bc9c3b7c64575f0e9b0f646af1510f2c76"
SRC_URI += "git://github.com/hashicorp/go-retryablehttp;name=go-retryablehttp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/go-retryablehttp"

#       github.com/libopenstorage/openstorage v1.0.0
# [1] git ls-remote https://github.com/libopenstorage/openstorage 093a0c3888753c2056e7373183693d670c6bba01
SRCREV_openstorage="093a0c3888753c2056e7373183693d670c6bba01"
SRC_URI += "git://github.com/libopenstorage/openstorage;name=openstorage;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libopenstorage/openstorage"

#       github.com/go-playground/validator/v10 v10.14.0
# [1] git ls-remote https://github.com/go-playground/validator ce28d7c4b27fbcafff82bc87a8bf58257beb9030
SRCREV_v10="ce28d7c4b27fbcafff82bc87a8bf58257beb9030"
SRC_URI += "git://github.com/go-playground/validator;name=v10;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-playground/validator/v10"

#       github.com/hashicorp/golang-lru/arc/v2 v2.0.5
# [1] git ls-remote https://github.com/hashicorp/golang-lru 3afaa48530f711754c178ceb61ff060d86c17b95
SRCREV_arc-v2="3afaa48530f711754c178ceb61ff060d86c17b95"
SRC_URI += "git://github.com/hashicorp/golang-lru;name=arc-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/golang-lru/arc/v2"

#       github.com/multiformats/go-multistream v0.4.1
# [1] git ls-remote https://github.com/multiformats/go-multistream 5b2f48e2db22aa1db90bb5a21aa4e6702d4ee33c
SRCREV_go-multistream="5b2f48e2db22aa1db90bb5a21aa4e6702d4ee33c"
SRC_URI += "git://github.com/multiformats/go-multistream;name=go-multistream;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-multistream"

#       github.com/AdamKorcz/go-118-fuzz-build v0.0.0-20230306123547-8075edf89bb0
# [1] git ls-remote https://github.com/AdamKorcz/go-118-fuzz-build 8075edf89bb034603c758f28fe93143047ac5677
SRCREV_go-118-fuzz-build="8075edf89bb034603c758f28fe93143047ac5677"
SRC_URI += "git://github.com/AdamKorcz/go-118-fuzz-build;name=go-118-fuzz-build;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/AdamKorcz/go-118-fuzz-build"

#       github.com/bronze1man/goStrongswanVici v0.0.0-20221114103242-3f6dc524986c
# [1] git ls-remote https://github.com/bronze1man/goStrongswanVici 3f6dc524986c8a20ee1e139f9e1bef1595877b5d
SRCREV_goStrongswanVici="3f6dc524986c8a20ee1e139f9e1bef1595877b5d"
SRC_URI += "git://github.com/bronze1man/goStrongswanVici;name=goStrongswanVici;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/bronze1man/goStrongswanVici"

#       github.com/containernetworking/plugins v1.3.0
# [1] git ls-remote https://github.com/containernetworking/plugins 38f18d26ecfef550b8bac02656cc11103fd7cff1
SRCREV_plugins="38f18d26ecfef550b8bac02656cc11103fd7cff1"
SRC_URI += "git://github.com/containernetworking/plugins;name=plugins;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containernetworking/plugins"

#       github.com/google/go-containerregistry v0.14.0
# [1] git ls-remote https://github.com/google/go-containerregistry 4b081f801f399fa293f23e42ba4c4ac6a6003f2c
SRCREV_go-containerregistry="4b081f801f399fa293f23e42ba4c4ac6a6003f2c"
SRC_URI += "git://github.com/google/go-containerregistry;name=go-containerregistry;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/go-containerregistry"

#       github.com/grpc-ecosystem/grpc-gateway v1.16.0
# [1] git ls-remote https://github.com/grpc-ecosystem/grpc-gateway 094a6fe78b3ca888297d090185cdf30f0e42e157
SRCREV_grpc-gateway="094a6fe78b3ca888297d090185cdf30f0e42e157"
SRC_URI += "git://github.com/grpc-ecosystem/grpc-gateway;name=grpc-gateway;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/grpc-ecosystem/grpc-gateway"

#       github.com/monochromegane/go-gitignore v0.0.0-20200626010858-205db1a8cc00
# [1] git ls-remote https://github.com/monochromegane/go-gitignore 205db1a8cc001de79230472da52edde4974df734
SRCREV_go-gitignore="205db1a8cc001de79230472da52edde4974df734"
SRC_URI += "git://github.com/monochromegane/go-gitignore;name=go-gitignore;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/monochromegane/go-gitignore"

#       github.com/opencontainers/runtime-spec v1.0.3-0.20220909204839-494a5a6aca78
# [1] git ls-remote https://github.com/opencontainers/runtime-spec 494a5a6aca782455c0fbfc35af8e12f04e98a55e
SRCREV_runtime-spec="494a5a6aca782455c0fbfc35af8e12f04e98a55e"
SRC_URI += "git://github.com/opencontainers/runtime-spec;name=runtime-spec;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/runtime-spec"

#       github.com/opencontainers/runtime-tools v0.9.1-0.20221107090550-2e043c6bd626
# [1] git ls-remote https://github.com/opencontainers/runtime-tools 2e043c6bd62639199bdd0d5f0c5082797de4de2a
SRCREV_runtime-tools="2e043c6bd62639199bdd0d5f0c5082797de4de2a"
SRC_URI += "git://github.com/opencontainers/runtime-tools;name=runtime-tools;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/runtime-tools"

#       github.com/containerd/stargz-snapshotter v0.14.4-0.20230913082252-7275d45b185c
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 7275d45b185cd720ce13747f0d0a78e9e7cd60e3
SRCREV_stargz-snapshotter="7275d45b185cd720ce13747f0d0a78e9e7cd60e3"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=stargz-snapshotter;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/stargz-snapshotter"

#       github.com/multiformats/go-multiaddr-dns v0.3.1
# [1] git ls-remote https://github.com/multiformats/go-multiaddr-dns 448c10b622b0c09ce6834487156c1fd9a65f1597
SRCREV_go-multiaddr-dns="448c10b622b0c09ce6834487156c1fd9a65f1597"
SRC_URI += "git://github.com/multiformats/go-multiaddr-dns;name=go-multiaddr-dns;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-multiaddr-dns"

#       github.com/multiformats/go-multiaddr-fmt v0.1.0
# [1] git ls-remote https://github.com/multiformats/go-multiaddr-fmt 113ed87ed03cfff94f29fd95236be3ccd933fd36
SRCREV_go-multiaddr-fmt="113ed87ed03cfff94f29fd95236be3ccd933fd36"
SRC_URI += "git://github.com/multiformats/go-multiaddr-fmt;name=go-multiaddr-fmt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/multiformats/go-multiaddr-fmt"

#       github.com/Azure/go-autorest/autorest/to v0.4.0
# [1] git ls-remote https://github.com/Azure/go-autorest b3a0b30a7423314874b3f585289e0e260cf5fc8d
SRCREV_to="b3a0b30a7423314874b3f585289e0e260cf5fc8d"
SRC_URI += "git://github.com/Azure/go-autorest;name=to;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/to"

#       github.com/checkpoint-restore/go-criu/v5 v5.3.0
# [1] git ls-remote https://github.com/checkpoint-restore/go-criu e3059103a5cf6adca2183e08c0315e8d8d5135a5
SRCREV_v5="e3059103a5cf6adca2183e08c0315e8d8d5135a5"
SRC_URI += "git://github.com/checkpoint-restore/go-criu;name=v5;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/checkpoint-restore/go-criu/v5"

#       github.com/decred/dcrd/dcrec/secp256k1/v4 v4.2.0
# [1] git ls-remote https://github.com/decred/dcrd bacf8444a8bc79178f9eb2c65477ab6df01a6439
SRCREV_secp256k1-v4="bacf8444a8bc79178f9eb2c65477ab6df01a6439"
SRC_URI += "git://github.com/decred/dcrd;name=secp256k1-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/decred/dcrd/dcrec/secp256k1/v4"

#       github.com/grpc-ecosystem/grpc-gateway/v2 v2.16.0
# [1] git ls-remote https://github.com/grpc-ecosystem/grpc-gateway 09e3965a330155f7db8482269d7d91b9bceb7641
SRCREV_grpc-gateway-v2="09e3965a330155f7db8482269d7d91b9bceb7641"
SRC_URI += "git://github.com/grpc-ecosystem/grpc-gateway;name=grpc-gateway-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/grpc-ecosystem/grpc-gateway/v2"

#       google.golang.org/genproto/googleapis/api v0.0.0-20231106174013-bbf56f31fb17
# [1] git ls-remote https://github.com/googleapis/go-genproto bbf56f31fb17579209f44dda2d2567d20ff21a20
SRCREV_googleapis-api="bbf56f31fb17579209f44dda2d2567d20ff21a20"
SRC_URI += "git://github.com/googleapis/go-genproto;name=googleapis-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/genproto/googleapis/api"

#       google.golang.org/genproto/googleapis/rpc v0.0.0-20231120223509-83a465c0220f
# [1] git ls-remote https://github.com/googleapis/go-genproto 83a465c0220f57b4c18228172454daeffa772607
SRCREV_rpc="83a465c0220f57b4c18228172454daeffa772607"
SRC_URI += "git://github.com/googleapis/go-genproto;name=rpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/genproto/googleapis/rpc"

#       github.com/rootless-containers/rootlesskit v1.0.1
# [1] git ls-remote https://github.com/rootless-containers/rootlesskit 5d5f4c0c26e26a6b51d1838c23e793e5836442d0
SRCREV_rootlesskit="5d5f4c0c26e26a6b51d1838c23e793e5836442d0"
SRC_URI += "git://github.com/rootless-containers/rootlesskit;name=rootlesskit;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rootless-containers/rootlesskit"

#       github.com/Azure/go-autorest/autorest/adal v0.9.23
# [1] git ls-remote https://github.com/Azure/go-autorest 553a90ae65a6a2b18306fa04d7b1625960c5decb
SRCREV_adal="553a90ae65a6a2b18306fa04d7b1625960c5decb"
SRC_URI += "git://github.com/Azure/go-autorest;name=adal;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/adal"

#       github.com/Azure/go-autorest/autorest/date v0.3.0
# [1] git ls-remote https://github.com/Azure/go-autorest b3a0b30a7423314874b3f585289e0e260cf5fc8d
SRCREV_date="b3a0b30a7423314874b3f585289e0e260cf5fc8d"
SRC_URI += "git://github.com/Azure/go-autorest;name=date;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/date"

#       github.com/libp2p/go-libp2p-routing-helpers v0.7.2
# [1] git ls-remote https://github.com/libp2p/go-libp2p-routing-helpers 71d7c965185ed346e39cc26140ac49ea13b2222f
SRCREV_go-libp2p-routing-helpers="71d7c965185ed346e39cc26140ac49ea13b2222f"
SRC_URI += "git://github.com/libp2p/go-libp2p-routing-helpers;name=go-libp2p-routing-helpers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libp2p/go-libp2p-routing-helpers"

#       github.com/Azure/go-autorest/autorest/mocks v0.4.2
# [1] git ls-remote https://github.com/Azure/go-autorest a91292dd2fc10381ac9b90eea72b92e60761eac4
SRCREV_mocks="a91292dd2fc10381ac9b90eea72b92e60761eac4"
SRC_URI += "git://github.com/Azure/go-autorest;name=mocks;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/mocks"

#       github.com/antlr/antlr4/runtime/Go/antlr/v4 v4.0.0-20230305170008-8188dc5388df
# [1] git ls-remote https://github.com/antlr/antlr4 8188dc5388dfe9246deb9b6ae507c3693fd55c3f
SRCREV_antlr-v4="8188dc5388dfe9246deb9b6ae507c3693fd55c3f"
SRC_URI += "git://github.com/antlr/antlr4;name=antlr-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/antlr/antlr4/runtime/Go/antlr/v4"

#       github.com/container-storage-interface/spec v1.8.0
# [1] git ls-remote https://github.com/container-storage-interface/spec c7ab2f379311a9ae234ae42bdfbfebfa9c15e538
SRCREV_spec="c7ab2f379311a9ae234ae42bdfbfebfa9c15e538"
SRC_URI += "git://github.com/container-storage-interface/spec;name=spec;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/container-storage-interface/spec"

#       github.com/docker/docker-credential-helpers v0.7.0
# [1] git ls-remote https://github.com/docker/docker-credential-helpers ac5992b5f4756fc0398a7d0c93c609e624368bde
SRCREV_docker-credential-helpers="ac5992b5f4756fc0398a7d0c93c609e624368bde"
SRC_URI += "git://github.com/docker/docker-credential-helpers;name=docker-credential-helpers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/docker-credential-helpers"

#       github.com/grpc-ecosystem/go-grpc-middleware v1.3.0
# [1] git ls-remote https://github.com/grpc-ecosystem/go-grpc-middleware df0f91b29bbbdfc3a686a7a8edbe2b9de2072fdd
SRCREV_go-grpc-middleware="df0f91b29bbbdfc3a686a7a8edbe2b9de2072fdd"
SRC_URI += "git://github.com/grpc-ecosystem/go-grpc-middleware;name=go-grpc-middleware;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/grpc-ecosystem/go-grpc-middleware"

#       github.com/grpc-ecosystem/go-grpc-prometheus v1.2.0
# [1] git ls-remote https://github.com/grpc-ecosystem/go-grpc-prometheus c225b8c3b01faf2899099b768856a9e916e5087b
SRCREV_go-grpc-prometheus="c225b8c3b01faf2899099b768856a9e916e5087b"
SRC_URI += "git://github.com/grpc-ecosystem/go-grpc-prometheus;name=go-grpc-prometheus;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/grpc-ecosystem/go-grpc-prometheus"

#       github.com/go-playground/universal-translator v0.18.1
# [1] git ls-remote https://github.com/go-playground/universal-translator f83cd526536e253181a13835b00cd107f627c505
SRCREV_universal-translator="f83cd526536e253181a13835b00cd107f627c505"
SRC_URI += "git://github.com/go-playground/universal-translator;name=universal-translator;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-playground/universal-translator"

#       github.com/containerd/fuse-overlayfs-snapshotter v1.0.5
# [1] git ls-remote https://github.com/containerd/fuse-overlayfs-snapshotter 11c45f4d24689d8cb279813fbcb9bbd01773e0e8
SRCREV_fuse-overlayfs-snapshotter="11c45f4d24689d8cb279813fbcb9bbd01773e0e8"
SRC_URI += "git://github.com/containerd/fuse-overlayfs-snapshotter;name=fuse-overlayfs-snapshotter;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/fuse-overlayfs-snapshotter"

#       github.com/Azure/go-autorest/autorest/validation v0.3.1
# [1] git ls-remote https://github.com/Azure/go-autorest 446f41b7d65b2ab6c25b1a7afe42abd3622e9110
SRCREV_validation="446f41b7d65b2ab6c25b1a7afe42abd3622e9110"
SRC_URI += "git://github.com/Azure/go-autorest;name=validation;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/validation"

#       github.com/containerd/stargz-snapshotter/estargz v0.14.3
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 6ee6fa1a88df6ea098f6b7dddde29e33f09d5331
SRCREV_estargz="6ee6fa1a88df6ea098f6b7dddde29e33f09d5331"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=estargz;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/stargz-snapshotter/estargz"

#       github.com/GoogleCloudPlatform/k8s-cloud-provider v1.18.1-0.20220218231025-f11817397a1b
# [1] git ls-remote https://github.com/GoogleCloudPlatform/k8s-cloud-provider f11817397a1bb27e88115807a9c083a36e12eaf8
SRCREV_k8s-cloud-provider="f11817397a1bb27e88115807a9c083a36e12eaf8"
SRC_URI += "git://github.com/GoogleCloudPlatform/k8s-cloud-provider;name=k8s-cloud-provider;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/GoogleCloudPlatform/k8s-cloud-provider"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_otlptrace="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptrace;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace"

#       github.com/googleapis/enterprise-certificate-proxy v0.3.2
# [1] git ls-remote https://github.com/googleapis/enterprise-certificate-proxy d928958b5b9ec0c2d3ce5e97ea5d1f000125ba7b
SRCREV_enterprise-certificate-proxy="d928958b5b9ec0c2d3ce5e97ea5d1f000125ba7b"
SRC_URI += "git://github.com/googleapis/enterprise-certificate-proxy;name=enterprise-certificate-proxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/googleapis/enterprise-certificate-proxy"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/api v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_api="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/api"

#       github.com/matttproud/golang_protobuf_extensions/v2 v2.0.0
# [1] git ls-remote https://github.com/matttproud/golang_protobuf_extensions 5a0f9169fc38cc42a5c617c3dc049548ddc27487
SRCREV_golang_protobuf_extensions-v2="5a0f9169fc38cc42a5c617c3dc049548ddc27487"
SRC_URI += "git://github.com/matttproud/golang_protobuf_extensions;name=golang_protobuf_extensions-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/matttproud/golang_protobuf_extensions/v2"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kms v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kms="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kms;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kms"

#       go.opentelemetry.io/otel/exporters/otlp/internal/retry v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_internal-retry="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=internal-retry;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/internal/retry"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cri-api v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_cri-api="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cri-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cri-api"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kubectl v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kubectl="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubectl;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kubectl"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kubelet v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kubelet="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubelet;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kubelet"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/metrics v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_metrics="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=metrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/metrics"

#       sigs.k8s.io/apiserver-network-proxy/konnectivity-client v0.1.2
# [1] git ls-remote https://github.com/kubernetes-sigs/apiserver-network-proxy 60b5f0e02800910cbb363668e285ec0e78d7cae1
SRCREV_konnectivity-client="60b5f0e02800910cbb363668e285ec0e78d7cae1"
SRC_URI += "git://github.com/kubernetes-sigs/apiserver-network-proxy;name=konnectivity-client;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/apiserver-network-proxy/konnectivity-client"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apiserver v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_apiserver="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apiserver;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apiserver"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/client-go v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_client-go="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=client-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/client-go"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-proxy v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kube-proxy="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-proxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-proxy"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cli-runtime v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_cli-runtime="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cli-runtime;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cli-runtime"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/mount-utils v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_mount-utils="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=mount-utils;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/mount-utils"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apimachinery v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_apimachinery="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apimachinery;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apimachinery"

#       go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp v0.35.1
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 356ee7f4343df3704346603fbde1b8d3d8fb86e9
SRCREV_otelhttp="356ee7f4343df3704346603fbde1b8d3d8fb86e9"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/endpointslice v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_endpointslice="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=endpointslice;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/endpointslice"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cloud-provider v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_cloud-provider="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cloud-provider;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cloud-provider"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/component-base v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_component-base="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=component-base;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/component-base"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/code-generator v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_code-generator="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=code-generator;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/code-generator"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-scheduler v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kube-scheduler="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-scheduler;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-scheduler"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_otlptracegrpc="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptracegrpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-aggregator v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kube-aggregator="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-aggregator;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-aggregator"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cluster-bootstrap v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_cluster-bootstrap="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cluster-bootstrap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cluster-bootstrap"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/component-helpers v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_component-helpers="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=component-helpers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/component-helpers"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/controller-manager v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_controller-manager="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=controller-manager;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/controller-manager"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/csi-translation-lib v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_csi-translation-lib="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=csi-translation-lib;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/csi-translation-lib"

#       github.com/container-orchestrated-devices/container-device-interface v0.5.4
# [1] git ls-remote https://github.com/cncf-tags/container-device-interface 0a1a5bea37b41bbdbb65d0e42b6305eba051f185
SRCREV_container-device-interface="0a1a5bea37b41bbdbb65d0e42b6305eba051f185"
SRC_URI += "git://github.com/cncf-tags/container-device-interface;name=container-device-interface;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/container-orchestrated-devices/container-device-interface"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/legacy-cloud-providers v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_legacy-cloud-providers="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=legacy-cloud-providers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/legacy-cloud-providers"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/pod-security-admission v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_pod-security-admission="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=pod-security-admission;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/pod-security-admission"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apiextensions-apiserver v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_apiextensions-apiserver="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apiextensions-apiserver;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apiextensions-apiserver"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-controller-manager v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_kube-controller-manager="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-controller-manager;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-controller-manager"

#       go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc v0.35.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib c4876c33a8e2e4b09501013f3543153d8aa10178
SRCREV_otelgrpc="c4876c33a8e2e4b09501013f3543153d8aa10178"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelgrpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/dynamic-resource-allocation v1.28.7-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 94b07a975a29425d3f5f835ef5e7d9c22f33f8c1
SRCREV_dynamic-resource-allocation="94b07a975a29425d3f5f835ef5e7d9c22f33f8c1"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=dynamic-resource-allocation;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/dynamic-resource-allocation"

#       go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful v0.35.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib c4876c33a8e2e4b09501013f3543153d8aa10178
SRCREV_otelrestful="c4876c33a8e2e4b09501013f3543153d8aa10178"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelrestful;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful"

