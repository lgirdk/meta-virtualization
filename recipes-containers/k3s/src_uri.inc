#       k8s.io/utils v0.0.0-20230220204549-a5ecb0141aa5
# [1] git ls-remote https://github.com/kubernetes/utils a5ecb0141aa5b1b224e745aca203afdfd22d8b3a
SRCREV_utils="a5ecb0141aa5b1b224e745aca203afdfd22d8b3a"
SRC_URI += "git://github.com/kubernetes/utils;name=utils;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/k8s.io/utils"

#       k8s.io/gengo v0.0.0-20220902162205-c0856e24416d
# [1] git ls-remote https://github.com/kubernetes/gengo c0856e24416daea2775735ff996a5870c2033839
SRCREV_gengo="c0856e24416daea2775735ff996a5870c2033839"
SRC_URI += "git://github.com/kubernetes/gengo;name=gengo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/k8s.io/gengo"

#       go.uber.org/zap v1.24.0
# [1] git ls-remote https://github.com/uber-go/zap a55bdc32f526699c3b4cc51a2cc97e944d02fbbf
SRCREV_zap="a55bdc32f526699c3b4cc51a2cc97e944d02fbbf"
SRC_URI += "git://github.com/uber-go/zap;name=zap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.uber.org/zap"

#       go.starlark.net v0.0.0-20200306205701-8dd3e2ee1dd5
# [1] git ls-remote https://github.com/google/starlark-go 8dd3e2ee1dd5d034baada4c7b4fcf231294a1013
SRCREV_go.starlark.net="8dd3e2ee1dd5d034baada4c7b4fcf231294a1013"
SRC_URI += "git://github.com/google/starlark-go;name=go.starlark.net;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.starlark.net"

#       gopkg.in/inf.v0 v0.9.1
# [1] git ls-remote https://github.com/go-inf/inf d2d2541c53f18d2a059457998ce2876cc8e67cbf
SRCREV_inf.v0="d2d2541c53f18d2a059457998ce2876cc8e67cbf"
SRC_URI += "git://github.com/go-inf/inf;name=inf.v0;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/inf.v0"

#       gopkg.in/ini.v1 v1.67.0
# [1] git ls-remote https://github.com/go-ini/ini b2f570e5b5b844226bbefe6fb521d891f529a951
SRCREV_ini.v1="b2f570e5b5b844226bbefe6fb521d891f529a951"
SRC_URI += "git://github.com/go-ini/ini;name=ini.v1;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/ini.v1"

#       golang.org/x/net v0.8.0
# [1] git ls-remote https://go.googlesource.com/net dfa2b5dffd96fb2ae13e7d182501f0bce044a0a4
SRCREV_net="dfa2b5dffd96fb2ae13e7d182501f0bce044a0a4"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.6.0
# [1] git ls-remote https://go.googlesource.com/sys c7a1bf9a0b0aa7c0c0e35a435924dd68e64d1653
SRCREV_sys="c7a1bf9a0b0aa7c0c0e35a435924dd68e64d1653"
SRC_URI += "git://go.googlesource.com/sys;name=sys;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v2 v2.4.0
# [1] git ls-remote https://github.com/go-yaml/yaml 7649d4548cb53a614db133b2a8ac1f31859dda8c
SRCREV_yaml.v2="7649d4548cb53a614db133b2a8ac1f31859dda8c"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/yaml.v2"

#       inet.af/tcpproxy v0.0.0-20200125044825-b6bb9b5b8252
# [1] git ls-remote https://github.com/inetaf/tcpproxy b6bb9b5b82524122bcf27291ede32d1517a14ab8
SRCREV_tcpproxy="b6bb9b5b82524122bcf27291ede32d1517a14ab8"
SRC_URI += "git://github.com/inetaf/tcpproxy;name=tcpproxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/inet.af/tcpproxy"

#       sigs.k8s.io/yaml v1.3.0
# [1] git ls-remote https://github.com/kubernetes-sigs/yaml 9535b3b1e2893fe44efb37c5c9f5665e245d786a
SRCREV_yaml="9535b3b1e2893fe44efb37c5c9f5665e245d786a"
SRC_URI += "git://github.com/kubernetes-sigs/yaml;name=yaml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/yaml"

#       go.etcd.io/bbolt v1.3.7
# [1] git ls-remote https://github.com/etcd-io/bbolt da2f2a53f6e2f25b215b79db2cd417488ef8e955
SRCREV_bbolt="da2f2a53f6e2f25b215b79db2cd417488ef8e955"
SRC_URI += "git://github.com/etcd-io/bbolt;name=bbolt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.etcd.io/bbolt"

#       go.opencensus.io v0.24.0
# [1] git ls-remote https://github.com/census-instrumentation/opencensus-go b1a01ee95db0e690d91d7193d037447816fae4c5
SRCREV_go.opencensus.io="b1a01ee95db0e690d91d7193d037447816fae4c5"
SRC_URI += "git://github.com/census-instrumentation/opencensus-go;name=go.opencensus.io;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opencensus.io"

#       golang.org/x/mod v0.10.0
# [1] git ls-remote https://go.googlesource.com/mod ad6fd61f94f8fdf6926f5dee6e45bdd13add2f9f
SRCREV_mod="ad6fd61f94f8fdf6926f5dee6e45bdd13add2f9f"
SRC_URI += "git://go.googlesource.com/mod;name=mod;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/mod"

#       gopkg.in/gcfg.v1 v1.2.0
# [1] git ls-remote https://github.com/go-gcfg/gcfg 27e4946190b4a327b539185f2b5b1f7c84730728
SRCREV_gcfg.v1="27e4946190b4a327b539185f2b5b1f7c84730728"
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

#       golang.org/x/sync v0.1.0
# [1] git ls-remote https://go.googlesource.com/sync 8fcdb60fdcc0539c5e357b2308249e4e752147f1
SRCREV_sync="8fcdb60fdcc0539c5e357b2308249e4e752147f1"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/sync"

#       github.com/rs/xid v1.4.0
# [1] git ls-remote https://github.com/rs/xid 66f8c42da230c3323ed4e29805e73eefbad41fc5
SRCREV_xid="66f8c42da230c3323ed4e29805e73eefbad41fc5"
SRC_URI += "git://github.com/rs/xid;name=xid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rs/xid"

#       golang.org/x/term v0.7.0
# [1] git ls-remote https://go.googlesource.com/term 7ae6be6d0150527c2c41e70586b9ade6a972a186
SRCREV_x-term="7ae6be6d0150527c2c41e70586b9ade6a972a186"
SRC_URI += "git://go.googlesource.com/term;name=x-term;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/term"

#       golang.org/x/text v0.10.0
# [1] git ls-remote https://go.googlesource.com/text 3a7a2557e7386e7e39d8b31290c3e8962c39e0fc
SRCREV_text="3a7a2557e7386e7e39d8b31290c3e8962c39e0fc"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/text"

#       golang.org/x/time v0.3.0
# [1] git ls-remote https://go.googlesource.com/time 2c09566ef13fb5556401ddff3c53c3dbc2a42dac
SRCREV_time="2c09566ef13fb5556401ddff3c53c3dbc2a42dac"
SRC_URI += "git://go.googlesource.com/time;name=time;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/time"

#       go.uber.org/atomic v1.10.0
# [1] git ls-remote https://github.com/uber-go/atomic 96800363039fbf926a6c826795797abcde5f07a5
SRCREV_atomic="96800363039fbf926a6c826795797abcde5f07a5"
SRC_URI += "git://github.com/uber-go/atomic;name=atomic;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.uber.org/atomic"

#       golang.org/x/tools v0.8.0
# [1] git ls-remote https://go.googlesource.com/tools 5ef3193183ecbeb75ee5b12e4d0d76129ec4da3d
SRCREV_tools="5ef3193183ecbeb75ee5b12e4d0d76129ec4da3d"
SRC_URI += "git://go.googlesource.com/tools;name=tools;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/tools"

#       golang.org/x/crypto v0.1.0
# [1] git ls-remote https://go.googlesource.com/crypto 642fcc37f5043eadb2509c84b2769e729e7d27ef
SRCREV_crypto="642fcc37f5043eadb2509c84b2769e729e7d27ef"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/crypto"

#       cloud.google.com/go v0.97.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 26286e362470c1b4e60e33d07cb2e12b62843ed7
SRCREV_cloud.google.com-go="26286e362470c1b4e60e33d07cb2e12b62843ed7"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=cloud.google.com-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go"

#       golang.org/x/oauth2 v0.4.0
# [1] git ls-remote https://go.googlesource.com/oauth2 34ffb07a9918c019c2d5080521104d2598ed8266
SRCREV_oauth2="34ffb07a9918c019c2d5080521104d2598ed8266"
SRC_URI += "git://go.googlesource.com/oauth2;name=oauth2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/oauth2"

#       k8s.io/kube-openapi v0.0.0-20230501164219-8b0f38b5fd1f
# [1] git ls-remote https://github.com/kubernetes/kube-openapi 8b0f38b5fd1f5300d4275b3f886e267124a57c58
SRCREV_kube-openapi="8b0f38b5fd1f5300d4275b3f886e267124a57c58"
SRC_URI += "git://github.com/kubernetes/kube-openapi;name=kube-openapi;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/k8s.io/kube-openapi"

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

#       go.uber.org/multierr v1.9.0
# [1] git ls-remote https://github.com/uber-go/multierr 39ca40c628bce6779c9725af600b737220b87602
SRCREV_multierr="39ca40c628bce6779c9725af600b737220b87602"
SRC_URI += "git://github.com/uber-go/multierr;name=multierr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.uber.org/multierr"

#       gopkg.in/warnings.v0 v0.1.1
# [1] git ls-remote https://github.com/go-warnings/warnings 8a331561fe74dadba6edfc59f3be66c22c3b065d
SRCREV_warnings.v0="8a331561fe74dadba6edfc59f3be66c22c3b065d"
SRC_URI += "git://github.com/go-warnings/warnings;name=warnings.v0;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/warnings.v0"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors="614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pkg/errors"

#       github.com/urfave/cli v1.22.12
# [1] git ls-remote https://github.com/urfave/cli 49f9838d8bf2c455c8102de0cf761314194c2396
SRCREV_cli="49f9838d8bf2c455c8102de0cf761314194c2396"
SRC_URI += "git://github.com/urfave/cli;name=cli;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/urfave/cli"

#       github.com/docker/cli v23.0.3+incompatible
# [1] git ls-remote https://github.com/docker/cli 3e7cbfdee1eb5be2ac23ed3668c654362dcd29b5
SRCREV_docker-cli="3e7cbfdee1eb5be2ac23ed3668c654362dcd29b5"
SRC_URI += "git://github.com/docker/cli;name=docker-cli;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/cli"

#       github.com/gofrs/uuid v4.0.0+incompatible
# [1] git ls-remote https://github.com/gofrs/uuid 4b36aa0ea796d49630bbae624f8f05ab7013af77
SRCREV_gofrs-uuid="4b36aa0ea796d49630bbae624f8f05ab7013af77"
SRC_URI += "git://github.com/gofrs/uuid;name=gofrs-uuid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gofrs/uuid"

#       google.golang.org/api v0.60.0
# [1] git ls-remote https://github.com/googleapis/google-api-go-client ccca5aa6d9d9aba8ad11c879ccea89c94663ea39
SRCREV_google.golang.org-api="ccca5aa6d9d9aba8ad11c879ccea89c94663ea39"
SRC_URI += "git://github.com/googleapis/google-api-go-client;name=google.golang.org-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/api"

#       github.com/google/uuid v1.3.0
# [1] git ls-remote https://github.com/google/uuid 44b5fee7c49cf3bcdf723f106b36d56ef13ccc88
SRCREV_uuid="44b5fee7c49cf3bcdf723f106b36d56ef13ccc88"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/uuid"

#       github.com/gorilla/mux v1.8.0
# [1] git ls-remote https://github.com/gorilla/mux 98cb6bf42e086f6af920b965c38cacc07402d51b
SRCREV_mux="98cb6bf42e086f6af920b965c38cacc07402d51b"
SRC_URI += "git://github.com/gorilla/mux;name=mux;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gorilla/mux"

#       github.com/k3s-io/kine v0.10.2
# [1] git ls-remote https://github.com/k3s-io/kine 3253842d2f5fbf157506d35db6f911f1c593bfef
SRCREV_kine="3253842d2f5fbf157506d35db6f911f1c593bfef"
SRC_URI += "git://github.com/k3s-io/kine;name=kine;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kine"

#       github.com/onsi/gomega v1.27.6
# [1] git ls-remote https://github.com/onsi/gomega 64305cbf9d7c2209f13bcfd65dc4aafd6ec4b898
SRCREV_gomega="64305cbf9d7c2209f13bcfd65dc4aafd6ec4b898"
SRC_URI += "git://github.com/onsi/gomega;name=gomega;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/onsi/gomega"

#       github.com/spf13/pflag v1.0.5
# [1] git ls-remote https://github.com/spf13/pflag 2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab
SRCREV_pflag="2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/spf13/pflag"

#       google.golang.org/grpc v1.51.0
# [1] git ls-remote https://github.com/grpc/grpc-go eeb9afa1f6b6388152955eeca8926e36ca94c768
SRCREV_grpc="eeb9afa1f6b6388152955eeca8926e36ca94c768"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/grpc"

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

#       github.com/golang/mock v1.6.0
# [1] git ls-remote https://github.com/golang/mock aba2ff9a6844d5e3289e8472d3217d5b3090f083
SRCREV_mock="aba2ff9a6844d5e3289e8472d3217d5b3090f083"
SRC_URI += "git://github.com/golang/mock;name=mock;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/mock"

#       github.com/moby/locker v1.0.1
# [1] git ls-remote https://github.com/moby/locker 281af2d563954745bea9d1487c965f24d30742fe
SRCREV_locker="281af2d563954745bea9d1487c965f24d30742fe"
SRC_URI += "git://github.com/moby/locker;name=locker;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/moby/locker"

#       github.com/pierrec/lz4 v2.6.0+incompatible
# [1] git ls-remote https://github.com/pierrec/lz4 0e583d326e0ec6b9c1ad223188dc709af385408e
SRCREV_lz4="0e583d326e0ec6b9c1ad223188dc709af385408e"
SRC_URI += "git://github.com/pierrec/lz4;name=lz4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pierrec/lz4"

#       github.com/spf13/cobra v1.6.1
# [1] git ls-remote https://github.com/spf13/cobra b43be995ebb4bee335a787bd44498b91aef7619c
SRCREV_cobra="b43be995ebb4bee335a787bd44498b91aef7619c"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/spf13/cobra"

#       github.com/go-test/deep v1.0.7
# [1] git ls-remote https://github.com/go-test/deep c733f5ed5136b7437e29ac91bb97c653af3694b5
SRCREV_deep="c733f5ed5136b7437e29ac91bb97c653af3694b5"
SRC_URI += "git://github.com/go-test/deep;name=deep;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-test/deep"

#       github.com/otiai10/copy v1.7.0
# [1] git ls-remote https://github.com/otiai10/copy 323db161ae97db91e6e13dbcda403fdb29c3fff8
SRCREV_copy="323db161ae97db91e6e13dbcda403fdb29c3fff8"
SRC_URI += "git://github.com/otiai10/copy;name=copy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/otiai10/copy"

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

#       github.com/go-logr/logr v1.2.4
# [1] git ls-remote https://github.com/go-logr/logr 4da5305ff29a64c62f54ad43ebbfcb5e1b015fb2
SRCREV_logr="4da5305ff29a64c62f54ad43ebbfcb5e1b015fb2"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-logr/logr"

#       github.com/go-logr/stdr v1.2.2
# [1] git ls-remote https://github.com/go-logr/stdr 521af2addfa7c81c8a65d0e85ed34bb6bb6dc262
SRCREV_stdr="521af2addfa7c81c8a65d0e85ed34bb6bb6dc262"
SRC_URI += "git://github.com/go-logr/stdr;name=stdr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-logr/stdr"

#       github.com/google/btree v1.1.2
# [1] git ls-remote https://github.com/google/btree 8e29150ba321eef204059de2ab494f179b6cff2c
SRCREV_btree="8e29150ba321eef204059de2ab494f179b6cff2c"
SRC_URI += "git://github.com/google/btree;name=btree;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/btree"

#       github.com/google/pprof v0.0.0-20210720184732-4bb14d4b1be1
# [1] git ls-remote https://github.com/google/pprof 4bb14d4b1be14417e47d0bbaf2bd4e188eda647f
SRCREV_pprof="4bb14d4b1be14417e47d0bbaf2bd4e188eda647f"
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

#       github.com/rancher/lasso v0.0.0-20221227210133-6ea88ca2fbcc
# [1] git ls-remote https://github.com/rancher/lasso 6ea88ca2fbcc8cadc89c30421b0766e9993c4b7a
SRCREV_lasso="6ea88ca2fbcc8cadc89c30421b0766e9993c4b7a"
SRC_URI += "git://github.com/rancher/lasso;name=lasso;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/lasso"

#       github.com/armon/circbuf v0.0.0-20150827004946-bbbad097214e
# [1] git ls-remote https://github.com/armon/circbuf bbbad097214e2918d8543d5201d12bfd7bca254d
SRCREV_circbuf="bbbad097214e2918d8543d5201d12bfd7bca254d"
SRC_URI += "git://github.com/armon/circbuf;name=circbuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/armon/circbuf"

#       github.com/gogo/protobuf v1.3.2
# [1] git ls-remote https://github.com/gogo/protobuf b03c65ea87cdc3521ede29f62fe3ce239267c1bc
SRCREV_protobuf="b03c65ea87cdc3521ede29f62fe3ce239267c1bc"
SRC_URI += "git://github.com/gogo/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gogo/protobuf"

#       github.com/google/cel-go v0.12.6
# [1] git ls-remote https://github.com/google/cel-go 1b7cccf5b8f9ff65dee6e383c7e9d9c42a848f3a
SRCREV_cel-go="1b7cccf5b8f9ff65dee6e383c7e9d9c42a848f3a"
SRC_URI += "git://github.com/google/cel-go;name=cel-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/cel-go"

#       github.com/google/go-cmp v0.5.9
# [1] git ls-remote https://github.com/google/go-cmp a97318bf6562f2ed2632c5f985db51b1bc5bdcd0
SRCREV_go-cmp="a97318bf6562f2ed2632c5f985db51b1bc5bdcd0"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/go-cmp"

#       github.com/google/gofuzz v1.2.0
# [1] git ls-remote https://github.com/google/gofuzz 379e164120fbc98885a8f494b5aa41ba94f64c56
SRCREV_gofuzz="379e164120fbc98885a8f494b5aa41ba94f64c56"
SRC_URI += "git://github.com/google/gofuzz;name=gofuzz;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/gofuzz"

#       github.com/imdario/mergo v0.3.13
# [1] git ls-remote https://github.com/darccio/mergo 194978757031c1a5c8ff8e059ae75fc2fc2a04f7
SRCREV_mergo="194978757031c1a5c8ff8e059ae75fc2fc2a04f7"
SRC_URI += "git://github.com/darccio/mergo;name=mergo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/imdario/mergo"

#       github.com/nats-io/nkeys v0.4.4
# [1] git ls-remote https://github.com/nats-io/nkeys 73b08e02f4e8ed17521951fdf7542a6a61955ce6
SRCREV_nkeys="73b08e02f4e8ed17521951fdf7542a6a61955ce6"
SRC_URI += "git://github.com/nats-io/nkeys;name=nkeys;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/nkeys"

#       github.com/soheilhy/cmux v0.1.5
# [1] git ls-remote https://github.com/soheilhy/cmux 5ec6847320e53b5fee0ab9a4757b56625a946c85
SRCREV_cmux="5ec6847320e53b5fee0ab9a4757b56625a946c85"
SRC_URI += "git://github.com/soheilhy/cmux;name=cmux;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/soheilhy/cmux"

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

#       github.com/onsi/ginkgo/v2 v2.9.4
# [1] git ls-remote https://github.com/onsi/ginkgo 909d19387f14c77d47f73878e5d6e63c26fd7afa
SRCREV_ginkgo-v2="909d19387f14c77d47f73878e5d6e63c26fd7afa"
SRC_URI += "git://github.com/onsi/ginkgo;name=ginkgo-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/onsi/ginkgo/v2"

#       github.com/robfig/cron/v3 v3.0.1
# [1] git ls-remote https://github.com/robfig/cron ccba498c397bb90a9c84945bbb0f7af2d72b6309
SRCREV_v3="ccba498c397bb90a9c84945bbb0f7af2d72b6309"
SRC_URI += "git://github.com/robfig/cron;name=v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/robfig/cron/v3"

#       github.com/k3s-io/klog/v2 v2.90.1-k3s1
# [1] git ls-remote https://github.com/k3s-io/klog 79c569094edd4a7ca048d9b9b1e47edc6b22e7c6
SRCREV_klog-v2="79c569094edd4a7ca048d9b9b1e47edc6b22e7c6"
SRC_URI += "git://github.com/k3s-io/klog;name=klog-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/klog/v2"

#       github.com/containerd/nri v0.3.0
# [1] git ls-remote https://github.com/containerd/nri 2a8b6558e9fd2045471d9c77386441e1ad060a87
SRCREV_nri="2a8b6558e9fd2045471d9c77386441e1ad060a87"
SRC_URI += "git://github.com/containerd/nri;name=nri;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/nri"

#       github.com/coreos/go-oidc v2.1.0+incompatible
# [1] git ls-remote https://github.com/coreos/go-oidc 2be1c5b8a260760503f66dc0996e102b683b3ac3
SRCREV_go-oidc="2be1c5b8a260760503f66dc0996e102b683b3ac3"
SRC_URI += "git://github.com/coreos/go-oidc;name=go-oidc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-oidc"

#       github.com/godbus/dbus/v5 v5.1.0
# [1] git ls-remote https://github.com/godbus/dbus e523abc905595cf17fb0001a7d77eaaddfaa216d
SRCREV_dbus-v5="e523abc905595cf17fb0001a7d77eaaddfaa216d"
SRC_URI += "git://github.com/godbus/dbus;name=dbus-v5;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/godbus/dbus/v5"

#       github.com/google/gnostic v0.5.7-v3refs
# [1] git ls-remote https://github.com/google/gnostic b49832d97d25b6a41cbe34ea12257924a934eeee
SRCREV_gnostic="b49832d97d25b6a41cbe34ea12257924a934eeee"
SRC_URI += "git://github.com/google/gnostic;name=gnostic;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/gnostic"

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

#       github.com/nats-io/jwt/v2 v2.4.1
# [1] git ls-remote https://github.com/nats-io/jwt 535a7674fb6149ba5d35297b3125b337ee281e13
SRCREV_jwt-v2="535a7674fb6149ba5d35297b3125b337ee281e13"
SRC_URI += "git://github.com/nats-io/jwt;name=jwt-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/jwt/v2"

#       github.com/rubiojr/go-vhd v0.0.0-20200706105327-02e210299021
# [1] git ls-remote https://github.com/rubiojr/go-vhd 02e2102990218160c1cb608a3e9679312a3b8425
SRCREV_go-vhd="02e2102990218160c1cb608a3e9679312a3b8425"
SRC_URI += "git://github.com/rubiojr/go-vhd;name=go-vhd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rubiojr/go-vhd"

#       github.com/vmware/govmomi v0.30.0
# [1] git ls-remote https://github.com/vmware/govmomi eabc29ba6d1015a55593f71cf84d99f4518a2589
SRCREV_govmomi="eabc29ba6d1015a55593f71cf84d99f4518a2589"
SRC_URI += "git://github.com/vmware/govmomi;name=govmomi;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vmware/govmomi"

#       github.com/xlab/treeprint v1.1.0
# [1] git ls-remote https://github.com/xlab/treeprint 31541c3fc088ae2b344370e3b1141f999ef3d03a
SRCREV_treeprint="31541c3fc088ae2b344370e3b1141f999ef3d03a"
SRC_URI += "git://github.com/xlab/treeprint;name=treeprint;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xlab/treeprint"

#       github.com/xrash/smetrics v0.0.0-20201216005158-039620a65673
# [1] git ls-remote https://github.com/xrash/smetrics 039620a656736e6ad994090895784a7af15e0b80
SRCREV_smetrics="039620a656736e6ad994090895784a7af15e0b80"
SRC_URI += "git://github.com/xrash/smetrics;name=smetrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xrash/smetrics"

#       sigs.k8s.io/kustomize/api v0.13.2
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize efe13749409367df57fa5c488885afebe1eabd6a
SRCREV_kustomize-api="efe13749409367df57fa5c488885afebe1eabd6a"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kustomize-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/kustomize/api"

#       github.com/containerd/aufs v1.0.0
# [1] git ls-remote https://github.com/containerd/aufs fb0192dcb2c0bbfce3bd8756fc88026870c0354d
SRCREV_aufs="fb0192dcb2c0bbfce3bd8756fc88026870c0354d"
SRC_URI += "git://github.com/containerd/aufs;name=aufs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/aufs"

#       github.com/google/cadvisor v0.47.2
# [1] git ls-remote https://github.com/google/cadvisor 6730be153c6b6cfc1a8782496b5c24ec2dfc0f56
SRCREV_cadvisor="6730be153c6b6cfc1a8782496b5c24ec2dfc0f56"
SRC_URI += "git://github.com/google/cadvisor;name=cadvisor;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/cadvisor"

#       github.com/rancher/wharfie v0.5.3
# [1] git ls-remote https://github.com/rancher/wharfie 3ede7b88d327b06884f70978da9e87a0a210c6b3
SRCREV_wharfie="3ede7b88d327b06884f70978da9e87a0a210c6b3"
SRC_URI += "git://github.com/rancher/wharfie;name=wharfie;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/wharfie"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus="d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/sirupsen/logrus"

#       github.com/blang/semver/v4 v4.0.0
# [1] git ls-remote https://github.com/blang/semver af3461a9cbcf1f3f5889d21b83f5ef63880c33a8
SRCREV_semver-v4="af3461a9cbcf1f3f5889d21b83f5ef63880c33a8"
SRC_URI += "git://github.com/blang/semver;name=semver-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/blang/semver/v4"

#       github.com/containerd/fifo v1.1.0
# [1] git ls-remote https://github.com/containerd/fifo 151b205263c29d471e0d55c787d2ce9f5343fd46
SRCREV_fifo="151b205263c29d471e0d55c787d2ce9f5343fd46"
SRC_URI += "git://github.com/containerd/fifo;name=fifo;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/fifo"

#       github.com/davecgh/go-spew v1.1.1
# [1] git ls-remote https://github.com/davecgh/go-spew 8991bc29aa16c548c550c7ff78260e27b9ab7c73
SRCREV_go-spew="8991bc29aa16c548c550c7ff78260e27b9ab7c73"
SRC_URI += "git://github.com/davecgh/go-spew;name=go-spew;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/davecgh/go-spew"

#       github.com/docker/go-units v0.5.0
# [1] git ls-remote https://github.com/docker/go-units e682442797b36348f8e1f98defdbf32bac0b6c6f
SRCREV_go-units="e682442797b36348f8e1f98defdbf32bac0b6c6f"
SRC_URI += "git://github.com/docker/go-units;name=go-units;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/go-units"

#       github.com/fatih/camelcase v1.0.0
# [1] git ls-remote https://github.com/fatih/camelcase 44e46d280b43ec1531bb25252440e34f1b800b65
SRCREV_camelcase="44e46d280b43ec1531bb25252440e34f1b800b65"
SRC_URI += "git://github.com/fatih/camelcase;name=camelcase;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/fatih/camelcase"

#       github.com/go-openapi/swag v0.22.3
# [1] git ls-remote https://github.com/go-openapi/swag 0579829e66fde26b27d401921afb73704c4d463d
SRCREV_swag="0579829e66fde26b27d401921afb73704c4d463d"
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

#       github.com/nats-io/nats.go v1.27.1
# [1] git ls-remote https://github.com/nats-io/nats.go e86764410c409ae5021bc5d73484ca4685c10dbd
SRCREV_nats.go="e86764410c409ae5021bc5d73484ca4685c10dbd"
SRC_URI += "git://github.com/nats-io/nats.go;name=nats.go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/nats.go"

#       github.com/xiang90/probing v0.0.0-20221125231312-a49e3df8f510
# [1] git ls-remote https://github.com/xiang90/probing a49e3df8f510ee8b42e68345ca4636dbb161bd0a
SRCREV_probing="a49e3df8f510ee8b42e68345ca4636dbb161bd0a"
SRC_URI += "git://github.com/xiang90/probing;name=probing;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xiang90/probing"

#       golang.zx2c4.com/wireguard v0.0.0-20230325221338-052af4a8072b
# [1] git ls-remote https://git.zx2c4.com/wireguard-go 052af4a8072bbbd3bfe7edf46fe3c1b350f71f08
SRCREV_wireguard="052af4a8072bbbd3bfe7edf46fe3c1b350f71f08"
SRC_URI += "git://git.zx2c4.com/wireguard-go;name=wireguard;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.zx2c4.com/wireguard"

#       google.golang.org/genproto v0.0.0-20220502173005-c8bf987b8c21
# [1] git ls-remote https://github.com/googleapis/go-genproto c8bf987b8c21778beffccfd5a923546432c2d250
SRCREV_genproto="c8bf987b8c21778beffccfd5a923546432c2d250"
SRC_URI += "git://github.com/googleapis/go-genproto;name=genproto;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/genproto"

#       google.golang.org/protobuf v1.29.1
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go 095a62b71f4b42d145df9699b90429dd082b43ed
SRCREV_google.golang.org-protobuf="095a62b71f4b42d145df9699b90429dd082b43ed"
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

#       github.com/mattn/go-sqlite3 v1.14.17
# [1] git ls-remote https://github.com/mattn/go-sqlite3 f08f1b6b9ce62b2496d8d64df26c1e278887bc1c
SRCREV_go-sqlite3="f08f1b6b9ce62b2496d8d64df26c1e278887bc1c"
SRC_URI += "git://github.com/mattn/go-sqlite3;name=go-sqlite3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mattn/go-sqlite3"

#       github.com/rancher/wrangler v1.1.1-0.20230425173236-39a4707f0689
# [1] git ls-remote https://github.com/rancher/wrangler 39a4707f0689cc97ca955f5eea5d0b37e1664cae
SRCREV_wrangler="39a4707f0689cc97ca955f5eea5d0b37e1664cae"
SRC_URI += "git://github.com/rancher/wrangler;name=wrangler;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/wrangler"

#       github.com/stretchr/testify v1.8.2
# [1] git ls-remote https://github.com/stretchr/testify f36bfe3c337aa95c86f04c721acdbafb5ffb1611
SRCREV_testify="f36bfe3c337aa95c86f04c721acdbafb5ffb1611"
SRC_URI += "git://github.com/stretchr/testify;name=testify;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stretchr/testify"

#       github.com/containerd/ttrpc v1.2.2
# [1] git ls-remote https://github.com/containerd/ttrpc ac26f8cbea1c440d451dd19a4a1b847fd073f3c3
SRCREV_ttrpc="ac26f8cbea1c440d451dd19a4a1b847fd073f3c3"
SRC_URI += "git://github.com/containerd/ttrpc;name=ttrpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/ttrpc"

#       github.com/coreos/go-semver v0.3.0
# [1] git ls-remote https://github.com/coreos/go-semver e214231b295a8ea9479f11b70b35d5acf3556d9b
SRCREV_go-semver="e214231b295a8ea9479f11b70b35d5acf3556d9b"
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

#       github.com/vbatts/tar-split v0.11.2
# [1] git ls-remote https://github.com/vbatts/tar-split 80a436fd6164c557b131f7c59ed69bd81af69761
SRCREV_tar-split="80a436fd6164c557b131f7c59ed69bd81af69761"
SRC_URI += "git://github.com/vbatts/tar-split;name=tar-split;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vbatts/tar-split"

#       google.golang.org/appengine v1.6.7
# [1] git ls-remote https://github.com/golang/appengine 5d1c1d03f8703c2e81478d9a30e9afa2d3e4bd8a
SRCREV_appengine="5d1c1d03f8703c2e81478d9a30e9afa2d3e4bd8a"
SRC_URI += "git://github.com/golang/appengine;name=appengine;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/appengine"

#       sigs.k8s.io/kustomize/kyaml v0.14.1
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize 4ffc8618547a62189d278bd800b3a1fbe5627790
SRCREV_kyaml="4ffc8618547a62189d278bd800b3a1fbe5627790"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kyaml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/kustomize/kyaml"

#       github.com/k3s-io/containerd v1.7.3-k3s1
# [1] git ls-remote https://github.com/k3s-io/containerd 383ce4e834e4d2ae5e1869475379e70618bdcc33
SRCREV_containerd="383ce4e834e4d2ae5e1869475379e70618bdcc33"
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

#       github.com/k3s-io/kubernetes v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kubernetes="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubernetes;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes"

#       github.com/Azure/go-ansiterm v0.0.0-20210617225240-d185dfc1b5a1
# [1] git ls-remote https://github.com/Azure/go-ansiterm d185dfc1b5a126116ea5a19e148e29d16b4574c9
SRCREV_go-ansiterm="d185dfc1b5a126116ea5a19e148e29d16b4574c9"
SRC_URI += "git://github.com/Azure/go-ansiterm;name=go-ansiterm;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-ansiterm"

#       github.com/Azure/go-autorest v14.2.0+incompatible
# [1] git ls-remote https://github.com/Azure/go-autorest e7b391b759b050d6719cc6fd8bb87b6dc038bca6
SRCREV_go-autorest="e7b391b759b050d6719cc6fd8bb87b6dc038bca6"
SRC_URI += "git://github.com/Azure/go-autorest;name=go-autorest;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest"

#       github.com/Microsoft/hcsshim v0.8.25
# [1] git ls-remote https://github.com/microsoft/hcsshim 619117bc0844a5d3e9e29f3a24303b7bce5ab9d0
SRCREV_hcsshim="619117bc0844a5d3e9e29f3a24303b7bce5ab9d0"
SRC_URI += "git://github.com/microsoft/hcsshim;name=hcsshim;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Microsoft/hcsshim"

#       github.com/avast/retry-go/v4 v4.3.2
# [1] git ls-remote https://github.com/avast/retry-go c65eeae03ec06cb591b05d092457de9f691bb359
SRCREV_v4="c65eeae03ec06cb591b05d092457de9f691bb359"
SRC_URI += "git://github.com/avast/retry-go;name=v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/avast/retry-go/v4"

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

#       github.com/felixge/httpsnoop v1.0.3
# [1] git ls-remote https://github.com/felixge/httpsnoop ef9fc62cdc3cc5abc33d6018fe1324890bb48145
SRCREV_httpsnoop="ef9fc62cdc3cc5abc33d6018fe1324890bb48145"
SRC_URI += "git://github.com/felixge/httpsnoop;name=httpsnoop;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/felixge/httpsnoop"

#       github.com/fsnotify/fsnotify v1.6.0
# [1] git ls-remote https://github.com/fsnotify/fsnotify 5f8c606accbcc6913853fe7e083ee461d181d88d
SRCREV_fsnotify="5f8c606accbcc6913853fe7e083ee461d181d88d"
SRC_URI += "git://github.com/fsnotify/fsnotify;name=fsnotify;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/fsnotify/fsnotify"

#       github.com/golang-jwt/jwt/v4 v4.4.2
# [1] git ls-remote https://github.com/golang-jwt/jwt 9294af54b5fcb8c9c92e3d10ed83d2a7c87fe632
SRCREV_jwt-v4="9294af54b5fcb8c9c92e3d10ed83d2a7c87fe632"
SRC_URI += "git://github.com/golang-jwt/jwt;name=jwt-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang-jwt/jwt/v4"

#       github.com/golang/groupcache v0.0.0-20210331224755-41bb18bfe9da
# [1] git ls-remote https://github.com/golang/groupcache 41bb18bfe9da5321badc438f91158cd790a33aa3
SRCREV_groupcache="41bb18bfe9da5321badc438f91158cd790a33aa3"
SRC_URI += "git://github.com/golang/groupcache;name=groupcache;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/groupcache"

#       github.com/hanwen/go-fuse/v2 v2.2.0
# [1] git ls-remote https://github.com/hanwen/go-fuse 915cf5413cdef5370ae3f953f8eb4cd9ac176d5c
SRCREV_go-fuse-v2="915cf5413cdef5370ae3f953f8eb4cd9ac176d5c"
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

#       github.com/minio/sha256-simd v1.0.0
# [1] git ls-remote https://github.com/minio/sha256-simd 6a57409d8e0fa3ae883aee331b71aaa40d5a7dd9
SRCREV_sha256-simd="6a57409d8e0fa3ae883aee331b71aaa40d5a7dd9"
SRC_URI += "git://github.com/minio/sha256-simd;name=sha256-simd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/minio/sha256-simd"

#       github.com/mrunalp/fileutils v0.5.0
# [1] git ls-remote https://github.com/mrunalp/fileutils d7fdd64cc1cabe10bc154ee7d2318b07b7f296ef
SRCREV_fileutils="d7fdd64cc1cabe10bc154ee7d2318b07b7f296ef"
SRC_URI += "git://github.com/mrunalp/fileutils;name=fileutils;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mrunalp/fileutils"

#       github.com/munnerz/goautoneg v0.0.0-20191010083416-a7dc8b61c822
# [1] git ls-remote https://github.com/munnerz/goautoneg a7dc8b61c822528f973a5e4e7b272055c6fdb43e
SRCREV_goautoneg="a7dc8b61c822528f973a5e4e7b272055c6fdb43e"
SRC_URI += "git://github.com/munnerz/goautoneg;name=goautoneg;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/munnerz/goautoneg"

#       github.com/pelletier/go-toml v1.9.5
# [1] git ls-remote https://github.com/pelletier/go-toml fed1464066413075eac02cd4dc368b5221845541
SRCREV_go-toml="fed1464066413075eac02cd4dc368b5221845541"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pelletier/go-toml"

#       github.com/prometheus/common v0.39.0
# [1] git ls-remote https://github.com/prometheus/common 296ec92f02fd5e3c15443437e98b573d968eaa14
SRCREV_common="296ec92f02fd5e3c15443437e98b573d968eaa14"
SRC_URI += "git://github.com/prometheus/common;name=common;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/common"

#       github.com/prometheus/procfs v0.9.0
# [1] git ls-remote https://github.com/prometheus/procfs bb7727a9ca9b3cd1559b42ffa74e13ef7efb6283
SRCREV_procfs="bb7727a9ca9b3cd1559b42ffa74e13ef7efb6283"
SRC_URI += "git://github.com/prometheus/procfs;name=procfs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/procfs"

#       github.com/vishvananda/netns v0.0.4
# [1] git ls-remote https://github.com/vishvananda/netns 7a452d2d15292b2bfb2a2d88e6bdeac156a761b9
SRCREV_netns="7a452d2d15292b2bfb2a2d88e6bdeac156a761b9"
SRC_URI += "git://github.com/vishvananda/netns;name=netns;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vishvananda/netns"

#       go.opentelemetry.io/otel/sdk v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_sdk="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=sdk;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/sdk"

#       github.com/k3s-io/cri-dockerd v0.3.4-k3s1
# [1] git ls-remote https://github.com/k3s-io/cri-dockerd c70f3789d5171077b2c2d79df75245d872377034
SRCREV_cri-dockerd="c70f3789d5171077b2c2d79df75245d872377034"
SRC_URI += "git://github.com/k3s-io/cri-dockerd;name=cri-dockerd;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/cri-dockerd"

#       github.com/containerd/cgroups v1.1.0
# [1] git ls-remote https://github.com/containerd/cgroups fe7323f622bc222e72473679f12a9089aeeda177
SRCREV_cgroups="fe7323f622bc222e72473679f12a9089aeeda177"
SRC_URI += "git://github.com/containerd/cgroups;name=cgroups;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/cgroups"

#       github.com/coreos/go-iptables v0.6.0
# [1] git ls-remote https://github.com/coreos/go-iptables 14d56d57c892f27a717aa6026fd2d3293221395b
SRCREV_go-iptables="14d56d57c892f27a717aa6026fd2d3293221395b"
SRC_URI += "git://github.com/coreos/go-iptables;name=go-iptables;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-iptables"

#       github.com/flannel-io/flannel v0.22.2
# [1] git ls-remote https://github.com/flannel-io/flannel 148b6d6a58deb864519bbc474f4c531a0799e910
SRCREV_flannel="148b6d6a58deb864519bbc474f4c531a0799e910"
SRC_URI += "git://github.com/flannel-io/flannel;name=flannel;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/flannel-io/flannel"

#       github.com/klauspost/compress v1.16.6
# [1] git ls-remote https://github.com/klauspost/compress d9eae825a4326bf9310d64c63654194a0254b0c1
SRCREV_compress="d9eae825a4326bf9310d64c63654194a0254b0c1"
SRC_URI += "git://github.com/klauspost/compress;name=compress;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/klauspost/compress"

#       github.com/k3s-io/etcd/api/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_api-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=api-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/api/v3"

#       github.com/JeffAshton/win_pdh v0.0.0-20161109143554-76bb4ee9f0ab
# [1] git ls-remote https://github.com/JeffAshton/win_pdh 76bb4ee9f0ab50f77826f2a2ee7fb9d3880d6ec2
SRCREV_win_pdh="76bb4ee9f0ab50f77826f2a2ee7fb9d3880d6ec2"
SRC_URI += "git://github.com/JeffAshton/win_pdh;name=win_pdh;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/JeffAshton/win_pdh"

#       github.com/Microsoft/go-winio v0.6.1
# [1] git ls-remote https://github.com/microsoft/go-winio 070c828abb873da9e71c7247740253b50f7cf049
SRCREV_go-winio="070c828abb873da9e71c7247740253b50f7cf049"
SRC_URI += "git://github.com/microsoft/go-winio;name=go-winio;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Microsoft/go-winio"

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

#       github.com/dustin/go-humanize v1.0.0
# [1] git ls-remote https://github.com/dustin/go-humanize 9f541cc9db5d55bce703bd99987c9d5cb8eea45e
SRCREV_go-humanize="9f541cc9db5d55bce703bd99987c9d5cb8eea45e"
SRC_URI += "git://github.com/dustin/go-humanize;name=go-humanize;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/dustin/go-humanize"

#       github.com/evanphx/json-patch v4.12.0+incompatible
# [1] git ls-remote https://github.com/evanphx/json-patch 50fdc0b4c9ab36933e6a0c9288fef3ac5df2b907
SRCREV_json-patch="50fdc0b4c9ab36933e6a0c9288fef3ac5df2b907"
SRC_URI += "git://github.com/evanphx/json-patch;name=json-patch;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/evanphx/json-patch"

#       github.com/fvbommel/sortorder v1.0.1
# [1] git ls-remote https://github.com/fvbommel/sortorder a1ddee917217bbd0691affdca9c88d24d3f5c27d
SRCREV_sortorder="a1ddee917217bbd0691affdca9c88d24d3f5c27d"
SRC_URI += "git://github.com/fvbommel/sortorder;name=sortorder;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/fvbommel/sortorder"

#       github.com/go-task/slim-sprig v0.0.0-20230315185526-52ccab3ef572
# [1] git ls-remote https://github.com/go-task/slim-sprig 52ccab3ef572c7e1a2c258be183f9a9296d60152
SRCREV_slim-sprig="52ccab3ef572c7e1a2c258be183f9a9296d60152"
SRC_URI += "git://github.com/go-task/slim-sprig;name=slim-sprig;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-task/slim-sprig"

#       github.com/klauspost/cpuid/v2 v2.1.0
# [1] git ls-remote https://github.com/klauspost/cpuid 4645384556483379792c7a2ac8fcacaf5d80141b
SRCREV_cpuid-v2="4645384556483379792c7a2ac8fcacaf5d80141b"
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

#       github.com/pmezard/go-difflib v1.0.0
# [1] git ls-remote https://github.com/pmezard/go-difflib 792786c7400a136282c1664665ae0a8db921c6c2
SRCREV_go-difflib="792786c7400a136282c1664665ae0a8db921c6c2"
SRC_URI += "git://github.com/pmezard/go-difflib;name=go-difflib;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pmezard/go-difflib"

#       github.com/shengdoushi/base58 v1.0.0
# [1] git ls-remote https://github.com/shengdoushi/base58 c5f44ca1af76fb63925d5fba8fa7b85870199839
SRCREV_base58="c5f44ca1af76fb63925d5fba8fa7b85870199839"
SRC_URI += "git://github.com/shengdoushi/base58;name=base58;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/shengdoushi/base58"

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

#       github.com/opencontainers/runc v1.1.8
# [1] git ls-remote https://github.com/opencontainers/runc 82f18fe0e44a59034f3e1f45e475fa5636e539aa
SRCREV_runc="82f18fe0e44a59034f3e1f45e475fa5636e539aa"
SRC_URI += "git://github.com/opencontainers/runc;name=runc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/runc"

#       github.com/vishvananda/netlink v1.2.1-beta.2
# [1] git ls-remote https://github.com/vishvananda/netlink 5e915e0149386ce3d02379ff93f4c0a5601779d5
SRCREV_netlink="5e915e0149386ce3d02379ff93f4c0a5601779d5"
SRC_URI += "git://github.com/vishvananda/netlink;name=netlink;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/vishvananda/netlink"

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

#       github.com/cenkalti/backoff/v4 v4.2.0
# [1] git ls-remote https://github.com/cenkalti/backoff e5c9822f4eaffe6a2abac94d7fbf85380dd629a8
SRCREV_backoff-v4="e5c9822f4eaffe6a2abac94d7fbf85380dd629a8"
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

#       github.com/jonboulle/clockwork v0.3.0
# [1] git ls-remote https://github.com/jonboulle/clockwork 6a247c35607b17156e639c6e0606887fa6fc304f
SRCREV_clockwork="6a247c35607b17156e639c6e0606887fa6fc304f"
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

#       github.com/euank/go-kmsg-parser v2.0.0+incompatible
# [1] git ls-remote https://github.com/euank/go-kmsg-parser 5ba4d492e455a77d25dcf0d2c4acc9f2afebef4e
SRCREV_go-kmsg-parser="5ba4d492e455a77d25dcf0d2c4acc9f2afebef4e"
SRC_URI += "git://github.com/euank/go-kmsg-parser;name=go-kmsg-parser;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/euank/go-kmsg-parser"

#       github.com/exponent-io/jsonpath v0.0.0-20151013193312-d6023ce2651d
# [1] git ls-remote https://github.com/exponent-io/jsonpath d6023ce2651d8eafb5c75bb0c7167536102ec9f5
SRCREV_jsonpath="d6023ce2651d8eafb5c75bb0c7167536102ec9f5"
SRC_URI += "git://github.com/exponent-io/jsonpath;name=jsonpath;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/exponent-io/jsonpath"

#       github.com/googleapis/gax-go/v2 v2.1.1
# [1] git ls-remote https://github.com/googleapis/gax-go 0968b165da19974432147e6058bc859f6c488642
SRCREV_gax-go-v2="0968b165da19974432147e6058bc859f6c488642"
SRC_URI += "git://github.com/googleapis/gax-go;name=gax-go-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/googleapis/gax-go/v2"

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

#       github.com/k3s-io/kube-router/v2 v2.0.1-0.20230508174102-b42e5faded1c
# [1] git ls-remote https://github.com/k3s-io/kube-router b42e5faded1c6f744fd7067f88f1c83a16a989c0
SRCREV_v2="b42e5faded1c6f744fd7067f88f1c83a16a989c0"
SRC_URI += "git://github.com/k3s-io/kube-router;name=v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kube-router/v2"

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

#       github.com/containerd/cgroups/v3 v3.0.2
# [1] git ls-remote https://github.com/containerd/cgroups 8fa64246e17ceea54277b3ad7139d9ec17545bfa
SRCREV_cgroups-v3="8fa64246e17ceea54277b3ad7139d9ec17545bfa"
SRC_URI += "git://github.com/containerd/cgroups;name=cgroups-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/cgroups/v3"

#       github.com/containerd/continuity v0.4.1
# [1] git ls-remote https://github.com/containerd/continuity 25762ef7c27a37645197ed6d1d708e55a230e35d
SRCREV_continuity="25762ef7c27a37645197ed6d1d708e55a230e35d"
SRC_URI += "git://github.com/containerd/continuity;name=continuity;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/continuity"

#       github.com/containerd/typeurl/v2 v2.1.1
# [1] git ls-remote https://github.com/containerd/typeurl 7ef6316b771f959cbb208b229e3423a466947df3
SRCREV_typeurl-v2="7ef6316b771f959cbb208b229e3423a466947df3"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containerd/typeurl/v2"

#       github.com/coreos/go-systemd/v22 v22.5.0
# [1] git ls-remote https://github.com/coreos/go-systemd d5623bf85e8e73ae6352f78ee6b55a287619dd4e
SRCREV_v22="d5623bf85e8e73ae6352f78ee6b55a287619dd4e"
SRC_URI += "git://github.com/coreos/go-systemd;name=v22;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/coreos/go-systemd/v22"

#       github.com/cpuguy83/go-md2man/v2 v2.0.2
# [1] git ls-remote https://github.com/cpuguy83/go-md2man d97078115282836e16d0dca10b4b42ce60fc70e6
SRCREV_go-md2man-v2="d97078115282836e16d0dca10b4b42ce60fc70e6"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=go-md2man-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/docker/go-connections v0.4.0
# [1] git ls-remote https://github.com/docker/go-connections 7395e3f8aa162843a74ed6d48e79627d9792ac55
SRCREV_go-connections="7395e3f8aa162843a74ed6d48e79627d9792ac55"
SRC_URI += "git://github.com/docker/go-connections;name=go-connections;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/docker/go-connections"

#       github.com/mitchellh/go-wordwrap v1.0.1
# [1] git ls-remote https://github.com/mitchellh/go-wordwrap ecf0936a077a4bd73a1cc2ac5c370f2b55618d62
SRCREV_go-wordwrap="ecf0936a077a4bd73a1cc2ac5c370f2b55618d62"
SRC_URI += "git://github.com/mitchellh/go-wordwrap;name=go-wordwrap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mitchellh/go-wordwrap"

#       github.com/k3s-io/etcd/client/v2 v2.305.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_client-v2="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=client-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/client/v2"

#       gopkg.in/natefinch/lumberjack.v2 v2.0.0
# [1] git ls-remote https://github.com/natefinch/lumberjack 7d6a1875575e09256dc552b4c0e450dcd02bd10e
SRCREV_lumberjack.v2="7d6a1875575e09256dc552b4c0e450dcd02bd10e"
SRC_URI += "git://github.com/natefinch/lumberjack;name=lumberjack.v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/natefinch/lumberjack.v2"

#       github.com/k3s-io/helm-controller v0.15.4
# [1] git ls-remote https://github.com/k3s-io/helm-controller 32c2e08fa0265cbc36680d50ca766c5a73cecd85
SRCREV_helm-controller="32c2e08fa0265cbc36680d50ca766c5a73cecd85"
SRC_URI += "git://github.com/k3s-io/helm-controller;name=helm-controller;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/helm-controller"

#       github.com/opencontainers/selinux v1.10.1
# [1] git ls-remote https://github.com/opencontainers/selinux 84e248a28e776216cd33a51fdea90a20fe308136
SRCREV_selinux="84e248a28e776216cd33a51fdea90a20fe308136"
SRC_URI += "git://github.com/opencontainers/selinux;name=selinux;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/selinux"

#       github.com/k3s-io/etcd/etcdutl/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_etcdutl-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=etcdutl-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/etcdutl/v3"

#       github.com/Azure/azure-sdk-for-go v55.0.0+incompatible
# [1] git ls-remote https://github.com/Azure/azure-sdk-for-go 3640559afddbad452d265b54fb1c20b30be0b062
SRCREV_azure-sdk-for-go="3640559afddbad452d265b54fb1c20b30be0b062"
SRC_URI += "git://github.com/Azure/azure-sdk-for-go;name=azure-sdk-for-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/azure-sdk-for-go"

#       github.com/asaskevich/govalidator v0.0.0-20190424111038-f61b66f89f4a
# [1] git ls-remote https://github.com/asaskevich/govalidator f61b66f89f4a311bef65f13e575bcf1a2ffadda6
SRCREV_govalidator="f61b66f89f4a311bef65f13e575bcf1a2ffadda6"
SRC_URI += "git://github.com/asaskevich/govalidator;name=govalidator;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/asaskevich/govalidator"

#       github.com/emicklei/go-restful/v3 v3.9.0
# [1] git ls-remote https://github.com/emicklei/go-restful ce871fa2f7069b65c784c9c708da1f00b1f2bd66
SRCREV_go-restful-v3="ce871fa2f7069b65c784c9c708da1f00b1f2bd66"
SRC_URI += "git://github.com/emicklei/go-restful;name=go-restful-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/emicklei/go-restful/v3"

#       github.com/go-openapi/jsonpointer v0.19.6
# [1] git ls-remote https://github.com/go-openapi/jsonpointer 5df0d69a6be189afff354877d332f9ede32afe12
SRCREV_jsonpointer="5df0d69a6be189afff354877d332f9ede32afe12"
SRC_URI += "git://github.com/go-openapi/jsonpointer;name=jsonpointer;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-openapi/jsonpointer"

#       github.com/hashicorp/go-cleanhttp v0.5.2
# [1] git ls-remote https://github.com/hashicorp/go-cleanhttp 6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2
SRCREV_go-cleanhttp="6d9e2ac5d828e5f8594b97f88c4bde14a67bb6d2"
SRC_URI += "git://github.com/hashicorp/go-cleanhttp;name=go-cleanhttp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/go-cleanhttp"

#       github.com/mitchellh/mapstructure v1.5.0
# [1] git ls-remote https://github.com/mitchellh/mapstructure ab69d8d93410fce4361f4912bb1ff88110a81311
SRCREV_mapstructure="ab69d8d93410fce4361f4912bb1ff88110a81311"
SRC_URI += "git://github.com/mitchellh/mapstructure;name=mapstructure;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mitchellh/mapstructure"

#       github.com/nats-io/nats-server/v2 v2.9.18
# [1] git ls-remote https://github.com/nats-io/nats-server 166eeb243c09136327a3bfdc48f8cdc384bd8816
SRCREV_nats-server-v2="166eeb243c09136327a3bfdc48f8cdc384bd8816"
SRC_URI += "git://github.com/nats-io/nats-server;name=nats-server-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/nats-io/nats-server/v2"

#       golang.zx2c4.com/wireguard/wgctrl v0.0.0-20230429144221-925a1e7659e6
# [1] git ls-remote https://github.com/WireGuard/wgctrl-go 925a1e7659e675c94c1a659d39daa9141e450c7d
SRCREV_wgctrl="925a1e7659e675c94c1a659d39daa9141e450c7d"
SRC_URI += "git://github.com/WireGuard/wgctrl-go;name=wgctrl;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.zx2c4.com/wireguard/wgctrl"

#       github.com/rancher/dynamiclistener v0.3.6-rc2
# [1] git ls-remote https://github.com/rancher/dynamiclistener 1c60bf414fd2331505a8dbd039e527ee3c7a94dc
SRCREV_dynamiclistener="1c60bf414fd2331505a8dbd039e527ee3c7a94dc"
SRC_URI += "git://github.com/rancher/dynamiclistener;name=dynamiclistener;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rancher/dynamiclistener"

#       github.com/containernetworking/cni v1.1.2
# [1] git ls-remote https://github.com/containernetworking/cni 3363d143688bb83ca18489ac8b9dc204c1d49c4a
SRCREV_cni="3363d143688bb83ca18489ac8b9dc204c1d49c4a"
SRC_URI += "git://github.com/containernetworking/cni;name=cni;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containernetworking/cni"

#       github.com/hashicorp/go-multierror v1.1.1
# [1] git ls-remote https://github.com/hashicorp/go-multierror 9974e9ec57696378079ecc3accd3d6f29401b3a0
SRCREV_go-multierror="9974e9ec57696378079ecc3accd3d6f29401b3a0"
SRC_URI += "git://github.com/hashicorp/go-multierror;name=go-multierror;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/go-multierror"

#       github.com/prometheus/client_model v0.3.0
# [1] git ls-remote https://github.com/prometheus/client_model 63fb9822ca3ba7a4ba5184071fb8f2ea000a99ef
SRCREV_client_model="63fb9822ca3ba7a4ba5184071fb8f2ea000a99ef"
SRC_URI += "git://github.com/prometheus/client_model;name=client_model;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/client_model"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2="4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/russross/blackfriday/v2"

#       sigs.k8s.io/kustomize/kustomize/v5 v5.0.1
# [1] git ls-remote https://github.com/kubernetes-sigs/kustomize 39527da73ca50df19b7678b8f7e87fa94b326296
SRCREV_kustomize-v5="39527da73ca50df19b7678b8f7e87fa94b326296"
SRC_URI += "git://github.com/kubernetes-sigs/kustomize;name=kustomize-v5;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/kustomize/kustomize/v5"

#       github.com/Azure/go-autorest/logger v0.2.1
# [1] git ls-remote https://github.com/Azure/go-autorest 820a319d2214dc91d083022ae5ec50070175314c
SRCREV_logger="820a319d2214dc91d083022ae5ec50070175314c"
SRC_URI += "git://github.com/Azure/go-autorest;name=logger;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/logger"

#       github.com/daviddengcn/go-colortext v1.0.0
# [1] git ls-remote https://github.com/daviddengcn/go-colortext dc4cd66b56a892657c0bea8bf4389d35210ce0ee
SRCREV_go-colortext="dc4cd66b56a892657c0bea8bf4389d35210ce0ee"
SRC_URI += "git://github.com/daviddengcn/go-colortext;name=go-colortext;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/daviddengcn/go-colortext"

#       github.com/go-openapi/jsonreference v0.20.1
# [1] git ls-remote https://github.com/go-openapi/jsonreference 424d68cc3144e5bcb46df434f1b45d6ab8500bd6
SRCREV_jsonreference="424d68cc3144e5bcb46df434f1b45d6ab8500bd6"
SRC_URI += "git://github.com/go-openapi/jsonreference;name=jsonreference;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/go-openapi/jsonreference"

#       github.com/opencontainers/go-digest v1.0.0
# [1] git ls-remote https://github.com/opencontainers/go-digest ea51bea511f75cfa3ef6098cc253c5c3609b037a
SRCREV_go-digest="ea51bea511f75cfa3ef6098cc253c5c3609b037a"
SRC_URI += "git://github.com/opencontainers/go-digest;name=go-digest;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/go-digest"

#       github.com/prometheus/client_golang v1.14.0
# [1] git ls-remote https://github.com/prometheus/client_golang 254e5468413f19fb75cdad45f5ddc0b8c975188c
SRCREV_client_golang="254e5468413f19fb75cdad45f5ddc0b8c975188c"
SRC_URI += "git://github.com/prometheus/client_golang;name=client_golang;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/client_golang"

#       github.com/tmc/grpc-websocket-proxy v0.0.0-20220101234140-673ab2c3ae75
# [1] git ls-remote https://github.com/tmc/grpc-websocket-proxy 673ab2c3ae75cc01952b84b88590e30e75dcf395
SRCREV_grpc-websocket-proxy="673ab2c3ae75cc01952b84b88590e30e75dcf395"
SRC_URI += "git://github.com/tmc/grpc-websocket-proxy;name=grpc-websocket-proxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/tmc/grpc-websocket-proxy"

#       github.com/k3s-io/stargz-snapshotter v0.13.0-k3s1
# [1] git ls-remote https://github.com/k3s-io/stargz-snapshotter a756490d248070c81d8178dda7edc57d44d210e5
SRCREV_stargz-snapshotter="a756490d248070c81d8178dda7edc57d44d210e5"
SRC_URI += "git://github.com/k3s-io/stargz-snapshotter;name=stargz-snapshotter;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/stargz-snapshotter"

#       github.com/k3s-io/etcd/client/pkg/v3 v3.5.9-k3s1
# [1] git ls-remote https://github.com/k3s-io/etcd 341ce193b458049401364c20193ebd14f38fce6d
SRCREV_pkg-v3="341ce193b458049401364c20193ebd14f38fce6d"
SRC_URI += "git://github.com/k3s-io/etcd;name=pkg-v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/etcd/client/pkg/v3"

#       github.com/AdaLogics/go-fuzz-headers v0.0.0-20230106234847-43070de90fa1
# [1] git ls-remote https://github.com/AdaLogics/go-fuzz-headers 43070de90fa134c9ea55cd6de4308a2ae59658d3
SRCREV_go-fuzz-headers="43070de90fa134c9ea55cd6de4308a2ae59658d3"
SRC_URI += "git://github.com/AdaLogics/go-fuzz-headers;name=go-fuzz-headers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/AdaLogics/go-fuzz-headers"

#       github.com/Azure/go-autorest/tracing v0.6.0
# [1] git ls-remote https://github.com/Azure/go-autorest b3a0b30a7423314874b3f585289e0e260cf5fc8d
SRCREV_tracing="b3a0b30a7423314874b3f585289e0e260cf5fc8d"
SRC_URI += "git://github.com/Azure/go-autorest;name=tracing;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/tracing"

#       github.com/inconshreveable/mousetrap v1.1.0
# [1] git ls-remote https://github.com/inconshreveable/mousetrap 4e8053ee7ef85a6bd26368364a6d27f1641c1d21
SRCREV_mousetrap="4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/inconshreveable/mousetrap"

#       github.com/opencontainers/image-spec v1.1.0-rc3
# [1] git ls-remote https://github.com/opencontainers/image-spec 085b884d628c42985cc2f2a99e5701f7e9b3bd1f
SRCREV_image-spec="085b884d628c42985cc2f2a99e5701f7e9b3bd1f"
SRC_URI += "git://github.com/opencontainers/image-spec;name=image-spec;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/opencontainers/image-spec"

#       github.com/seccomp/libseccomp-golang v0.9.2-0.20220502022130-f33da4d89646
# [1] git ls-remote https://github.com/seccomp/libseccomp-golang f33da4d89646b6c01cb104d81094208b83a9b8e4
SRCREV_libseccomp-golang="f33da4d89646b6c01cb104d81094208b83a9b8e4"
SRC_URI += "git://github.com/seccomp/libseccomp-golang;name=libseccomp-golang;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/seccomp/libseccomp-golang"

#       github.com/stefanberger/go-pkcs11uri v0.0.0-20201008174630-78d3cae3a980
# [1] git ls-remote https://github.com/stefanberger/go-pkcs11uri 78d3cae3a9805d89aa4fa80a362ca944c89a1b99
SRCREV_go-pkcs11uri="78d3cae3a9805d89aa4fa80a362ca944c89a1b99"
SRC_URI += "git://github.com/stefanberger/go-pkcs11uri;name=go-pkcs11uri;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stefanberger/go-pkcs11uri"

#       sigs.k8s.io/structured-merge-diff/v4 v4.2.3
# [1] git ls-remote https://github.com/kubernetes-sigs/structured-merge-diff 26781d0c10bfdbd7d66b18d8be83985f623df9f8
SRCREV_structured-merge-diff-v4="26781d0c10bfdbd7d66b18d8be83985f623df9f8"
SRC_URI += "git://github.com/kubernetes-sigs/structured-merge-diff;name=structured-merge-diff-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/structured-merge-diff/v4"

#       github.com/Azure/go-autorest/autorest v0.11.27
# [1] git ls-remote https://github.com/Azure/go-autorest 7525a9bd0079c3842a7e11a93bd76166e915b0f1
SRCREV_autorest="7525a9bd0079c3842a7e11a93bd76166e915b0f1"
SRC_URI += "git://github.com/Azure/go-autorest;name=autorest;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest"

#       github.com/cyphar/filepath-securejoin v0.2.3
# [1] git ls-remote https://github.com/cyphar/filepath-securejoin 8f267f5ea675a20a2cb5e91011d063721f53bf79
SRCREV_filepath-securejoin="8f267f5ea675a20a2cb5e91011d063721f53bf79"
SRC_URI += "git://github.com/cyphar/filepath-securejoin;name=filepath-securejoin;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cyphar/filepath-securejoin"

#       github.com/hashicorp/go-retryablehttp v0.7.2
# [1] git ls-remote https://github.com/hashicorp/go-retryablehttp a53bec1353a135f9548327f10bb8459bfe96e2d8
SRCREV_go-retryablehttp="a53bec1353a135f9548327f10bb8459bfe96e2d8"
SRC_URI += "git://github.com/hashicorp/go-retryablehttp;name=go-retryablehttp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/hashicorp/go-retryablehttp"

#       github.com/libopenstorage/openstorage v1.0.0
# [1] git ls-remote https://github.com/libopenstorage/openstorage 093a0c3888753c2056e7373183693d670c6bba01
SRCREV_openstorage="093a0c3888753c2056e7373183693d670c6bba01"
SRC_URI += "git://github.com/libopenstorage/openstorage;name=openstorage;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/libopenstorage/openstorage"

#       github.com/AdamKorcz/go-118-fuzz-build v0.0.0-20221215162035-5330a85ea652
# [1] git ls-remote https://github.com/AdamKorcz/go-118-fuzz-build 5330a85ea6528bb00bea0417b6d61f30deb61f2c
SRCREV_go-118-fuzz-build="5330a85ea6528bb00bea0417b6d61f30deb61f2c"
SRC_URI += "git://github.com/AdamKorcz/go-118-fuzz-build;name=go-118-fuzz-build;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/AdamKorcz/go-118-fuzz-build"

#       github.com/bronze1man/goStrongswanVici v0.0.0-20201105010758-936f38b697fd
# [1] git ls-remote https://github.com/bronze1man/goStrongswanVici 936f38b697fd9a0054eee1469fee9d51199d4e66
SRCREV_goStrongswanVici="936f38b697fd9a0054eee1469fee9d51199d4e66"
SRC_URI += "git://github.com/bronze1man/goStrongswanVici;name=goStrongswanVici;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/bronze1man/goStrongswanVici"

#       github.com/containernetworking/plugins v1.2.0
# [1] git ls-remote https://github.com/containernetworking/plugins c4d24e80d64393d2c632a825a3486d1c2c0248ec
SRCREV_plugins="c4d24e80d64393d2c632a825a3486d1c2c0248ec"
SRC_URI += "git://github.com/containernetworking/plugins;name=plugins;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/containernetworking/plugins"

#       github.com/google/go-containerregistry v0.7.0
# [1] git ls-remote https://github.com/google/go-containerregistry 542cd568cb6abd9dfa1d11a8d9b8812678aab8ff
SRCREV_go-containerregistry="542cd568cb6abd9dfa1d11a8d9b8812678aab8ff"
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

#       github.com/Azure/go-autorest/autorest/to v0.4.0
# [1] git ls-remote https://github.com/Azure/go-autorest b3a0b30a7423314874b3f585289e0e260cf5fc8d
SRCREV_to="b3a0b30a7423314874b3f585289e0e260cf5fc8d"
SRC_URI += "git://github.com/Azure/go-autorest;name=to;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/to"

#       github.com/antlr/antlr4/runtime/Go/antlr v1.4.10
# [1] git ls-remote https://github.com/antlr/antlr4 cd8f367ca010eb59defadf3df622793bc3a8afe2
SRCREV_antlr="cd8f367ca010eb59defadf3df622793bc3a8afe2"
SRC_URI += "git://github.com/antlr/antlr4;name=antlr;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/antlr/antlr4/runtime/Go/antlr"

#       github.com/checkpoint-restore/go-criu/v5 v5.3.0
# [1] git ls-remote https://github.com/checkpoint-restore/go-criu e3059103a5cf6adca2183e08c0315e8d8d5135a5
SRCREV_v5="e3059103a5cf6adca2183e08c0315e8d8d5135a5"
SRC_URI += "git://github.com/checkpoint-restore/go-criu;name=v5;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/checkpoint-restore/go-criu/v5"

#       github.com/grpc-ecosystem/grpc-gateway/v2 v2.7.0
# [1] git ls-remote https://github.com/grpc-ecosystem/grpc-gateway 9bff7b14fab8aace99d7febe4ae1ee4fac526eca
SRCREV_grpc-gateway-v2="9bff7b14fab8aace99d7febe4ae1ee4fac526eca"
SRC_URI += "git://github.com/grpc-ecosystem/grpc-gateway;name=grpc-gateway-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/grpc-ecosystem/grpc-gateway/v2"

#       github.com/rootless-containers/rootlesskit v1.0.1
# [1] git ls-remote https://github.com/rootless-containers/rootlesskit 5d5f4c0c26e26a6b51d1838c23e793e5836442d0
SRCREV_rootlesskit="5d5f4c0c26e26a6b51d1838c23e793e5836442d0"
SRC_URI += "git://github.com/rootless-containers/rootlesskit;name=rootlesskit;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/rootless-containers/rootlesskit"

#       github.com/Azure/go-autorest/autorest/adal v0.9.20
# [1] git ls-remote https://github.com/Azure/go-autorest 7dd32b67be4e6c9386b9ba7b1c44a51263f05270
SRCREV_adal="7dd32b67be4e6c9386b9ba7b1c44a51263f05270"
SRC_URI += "git://github.com/Azure/go-autorest;name=adal;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/adal"

#       github.com/Azure/go-autorest/autorest/date v0.3.0
# [1] git ls-remote https://github.com/Azure/go-autorest b3a0b30a7423314874b3f585289e0e260cf5fc8d
SRCREV_date="b3a0b30a7423314874b3f585289e0e260cf5fc8d"
SRC_URI += "git://github.com/Azure/go-autorest;name=date;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/date"

#       github.com/Azure/go-autorest/autorest/mocks v0.4.2
# [1] git ls-remote https://github.com/Azure/go-autorest a91292dd2fc10381ac9b90eea72b92e60761eac4
SRCREV_mocks="a91292dd2fc10381ac9b90eea72b92e60761eac4"
SRC_URI += "git://github.com/Azure/go-autorest;name=mocks;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Azure/go-autorest/autorest/mocks"

#       github.com/container-storage-interface/spec v1.7.0
# [1] git ls-remote https://github.com/container-storage-interface/spec 5d1ebe63079c01d127631ad336087df94b083a54
SRCREV_spec="5d1ebe63079c01d127631ad336087df94b083a54"
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

#       github.com/matttproud/golang_protobuf_extensions v1.0.4
# [1] git ls-remote https://github.com/matttproud/golang_protobuf_extensions c182affec369e30f25d3eb8cd8a478dee585ae7d
SRCREV_golang_protobuf_extensions="c182affec369e30f25d3eb8cd8a478dee585ae7d"
SRC_URI += "git://github.com/matttproud/golang_protobuf_extensions;name=golang_protobuf_extensions;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/matttproud/golang_protobuf_extensions"

#       github.com/GoogleCloudPlatform/k8s-cloud-provider v1.18.1-0.20220218231025-f11817397a1b
# [1] git ls-remote https://github.com/GoogleCloudPlatform/k8s-cloud-provider f11817397a1bb27e88115807a9c083a36e12eaf8
SRCREV_k8s-cloud-provider="f11817397a1bb27e88115807a9c083a36e12eaf8"
SRC_URI += "git://github.com/GoogleCloudPlatform/k8s-cloud-provider;name=k8s-cloud-provider;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/GoogleCloudPlatform/k8s-cloud-provider"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_otlptrace="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptrace;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/api v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_api="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/api"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kms v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kms="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kms;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kms"

#       go.opentelemetry.io/otel/exporters/otlp/internal/retry v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_internal-retry="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=internal-retry;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/internal/retry"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cri-api v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_cri-api="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cri-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cri-api"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kubectl v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kubectl="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubectl;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kubectl"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kubelet v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kubelet="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kubelet;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kubelet"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/metrics v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_metrics="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=metrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/metrics"

#       sigs.k8s.io/apiserver-network-proxy/konnectivity-client v0.1.2
# [1] git ls-remote https://github.com/kubernetes-sigs/apiserver-network-proxy 60b5f0e02800910cbb363668e285ec0e78d7cae1
SRCREV_konnectivity-client="60b5f0e02800910cbb363668e285ec0e78d7cae1"
SRC_URI += "git://github.com/kubernetes-sigs/apiserver-network-proxy;name=konnectivity-client;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/sigs.k8s.io/apiserver-network-proxy/konnectivity-client"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apiserver v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_apiserver="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apiserver;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apiserver"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/client-go v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_client-go="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=client-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/client-go"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-proxy v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kube-proxy="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-proxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-proxy"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cli-runtime v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_cli-runtime="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cli-runtime;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cli-runtime"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/mount-utils v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_mount-utils="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=mount-utils;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/mount-utils"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apimachinery v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_apimachinery="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apimachinery;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apimachinery"

#       go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp v0.35.1
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 356ee7f4343df3704346603fbde1b8d3d8fb86e9
SRCREV_otelhttp="356ee7f4343df3704346603fbde1b8d3d8fb86e9"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cloud-provider v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_cloud-provider="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cloud-provider;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cloud-provider"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/component-base v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_component-base="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=component-base;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/component-base"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/code-generator v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_code-generator="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=code-generator;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/code-generator"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-scheduler v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kube-scheduler="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-scheduler;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-scheduler"

#       go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc v1.13.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go f2fd476f433128c2494476950ce11600a51bbe35
SRCREV_otlptracegrpc="f2fd476f433128c2494476950ce11600a51bbe35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otlptracegrpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-aggregator v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kube-aggregator="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-aggregator;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-aggregator"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/cluster-bootstrap v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_cluster-bootstrap="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=cluster-bootstrap;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/cluster-bootstrap"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/component-helpers v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_component-helpers="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=component-helpers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/component-helpers"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/controller-manager v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_controller-manager="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=controller-manager;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/controller-manager"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/csi-translation-lib v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_csi-translation-lib="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=csi-translation-lib;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/csi-translation-lib"

#       github.com/container-orchestrated-devices/container-device-interface v0.5.4
# [1] git ls-remote https://github.com/cncf-tags/container-device-interface 0a1a5bea37b41bbdbb65d0e42b6305eba051f185
SRCREV_container-device-interface="0a1a5bea37b41bbdbb65d0e42b6305eba051f185"
SRC_URI += "git://github.com/cncf-tags/container-device-interface;name=container-device-interface;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/container-orchestrated-devices/container-device-interface"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/legacy-cloud-providers v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_legacy-cloud-providers="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=legacy-cloud-providers;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/legacy-cloud-providers"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/pod-security-admission v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_pod-security-admission="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=pod-security-admission;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/pod-security-admission"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/apiextensions-apiserver v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_apiextensions-apiserver="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=apiextensions-apiserver;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/apiextensions-apiserver"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-controller-manager v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_kube-controller-manager="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=kube-controller-manager;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/kube-controller-manager"

#       go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc v0.35.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib c4876c33a8e2e4b09501013f3543153d8aa10178
SRCREV_otelgrpc="c4876c33a8e2e4b09501013f3543153d8aa10178"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelgrpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc"

#       github.com/k3s-io/kubernetes/staging/src/k8s.io/dynamic-resource-allocation v1.27.5-k3s1
# [1] git ls-remote https://github.com/k3s-io/kubernetes 2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd
SRCREV_dynamic-resource-allocation="2d0a14fa03943bd82a5d40c9c2578dcf0ac458cd"
SRC_URI += "git://github.com/k3s-io/kubernetes;name=dynamic-resource-allocation;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/k3s-io/kubernetes/staging/src/k8s.io/dynamic-resource-allocation"

#       go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful v0.35.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib c4876c33a8e2e4b09501013f3543153d8aa10178
SRCREV_otelrestful="c4876c33a8e2e4b09501013f3543153d8aa10178"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelrestful;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/github.com/emicklei/go-restful/otelrestful"

