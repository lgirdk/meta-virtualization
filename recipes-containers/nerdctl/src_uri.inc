#       gotest.tools/v3 v3.5.1
# [1] git ls-remote https://github.com/gotestyourself/gotest.tools 81cea1abc596b025bf2573c7fdf97740512e4c6c
SRCREV_gotest.tools-v3="81cea1abc596b025bf2573c7fdf97740512e4c6c"
SRC_URI += "git://github.com/gotestyourself/gotest.tools;name=gotest.tools-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gotest.tools/v3"

#       go.uber.org/mock v0.4.0
# [1] git ls-remote https://github.com/uber/mock 74a29c6e6c2cbb8ccee94db061c1604ff33fd188
SRCREV_mock="74a29c6e6c2cbb8ccee94db061c1604ff33fd188"
SRC_URI += "git://github.com/uber/mock;name=mock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/mock"

#       golang.org/x/net v0.27.0
# [1] git ls-remote https://go.googlesource.com/net e2310ae9eb6425ee6736cfc40f982f42e20f5850
SRCREV_net="e2310ae9eb6425ee6736cfc40f982f42e20f5850"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.22.0
# [1] git ls-remote https://github.com/golang/sys faed7ec2641160cebe7fdf3fa6d401d848d2710f
SRCREV_sys="faed7ec2641160cebe7fdf3fa6d401d848d2710f"
SRC_URI += "git://github.com/golang/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3="f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v3"

#       go.opencensus.io v0.24.0
# [1] git ls-remote https://github.com/census-instrumentation/opencensus-go b1a01ee95db0e690d91d7193d037447816fae4c5
SRCREV_go.opencensus.io="b1a01ee95db0e690d91d7193d037447816fae4c5"
SRC_URI += "git://github.com/census-instrumentation/opencensus-go;name=go.opencensus.io;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opencensus.io"

#       golang.org/x/exp v0.0.0-20240112132812-db7319d0e0e3
# [1] git ls-remote https://go.googlesource.com/exp db7319d0e0e361ccef5c449b760df8e5f2d5087c
SRCREV_exp="db7319d0e0e361ccef5c449b760df8e5f2d5087c"
SRC_URI += "git://go.googlesource.com/exp;name=exp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/exp"

#       golang.org/x/sync v0.7.0
# [1] git ls-remote https://go.googlesource.com/sync 14be23e5b48bec28285f8a694875175ecacfddb3
SRCREV_sync="14be23e5b48bec28285f8a694875175ecacfddb3"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sync"

#       golang.org/x/term v0.22.0
# [1] git ls-remote https://go.googlesource.com/term c976cb1d70cf59933953bec8a47c867e343c9eac
SRCREV_x-term="c976cb1d70cf59933953bec8a47c867e343c9eac"
SRC_URI += "git://go.googlesource.com/term;name=x-term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/term"

#       golang.org/x/text v0.16.0
# [1] git ls-remote https://go.googlesource.com/text 9c2f3a21352d1ff4e47776534e3f334b39ec0183
SRCREV_text="9c2f3a21352d1ff4e47776534e3f334b39ec0183"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/text"

#       golang.org/x/crypto v0.25.0
# [1] git ls-remote https://go.googlesource.com/crypto 9fadb0b165bd3b96d2a21e89d60ad458db3aeee0
SRCREV_crypto="9fadb0b165bd3b96d2a21e89d60ad458db3aeee0"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/crypto"

#       github.com/moby/term v0.5.0
# [1] git ls-remote https://github.com/moby/term 9c3c875fad924eb6c9dd32a361b5fc0a49a4feb9
SRCREV_term="9c3c875fad924eb6c9dd32a361b5fc0a49a4feb9"
SRC_URI += "git://github.com/moby/term;name=term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/term"

#       go.mozilla.org/pkcs7 v0.0.0-20200128120323-432b2356ecb1
# [1] git ls-remote https://github.com/mozilla-services/pkcs7 432b2356ecb18209c1cec25680b8a23632794f21
SRCREV_pkcs7="432b2356ecb18209c1cec25680b8a23632794f21"
SRC_URI += "git://github.com/mozilla-services/pkcs7;name=pkcs7;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.mozilla.org/pkcs7"

#       github.com/docker/cli v27.0.3+incompatible
# [1] git ls-remote https://github.com/docker/cli 7d4bcd863a4c863e650eed02a550dfeb98560b83
SRCREV_cli="7d4bcd863a4c863e650eed02a550dfeb98560b83"
SRC_URI += "git://github.com/docker/cli;name=cli;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/cli"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors="614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pkg/errors"

#       github.com/fatih/color v1.17.0
# [1] git ls-remote https://github.com/fatih/color b6598b12a645b3159c1bce51b0e3fafc269510be
SRCREV_color="b6598b12a645b3159c1bce51b0e3fafc269510be"
SRC_URI += "git://github.com/fatih/color;name=color;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fatih/color"

#       github.com/ipfs/go-cid v0.4.1
# [1] git ls-remote https://github.com/ipfs/go-cid d46e7f28669cd2c463bc68fe86e7dbe4f8240ab7
SRCREV_go-cid="d46e7f28669cd2c463bc68fe86e7dbe4f8240ab7"
SRC_URI += "git://github.com/ipfs/go-cid;name=go-cid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/go-cid"

#       github.com/spf13/cobra v1.8.1
# [1] git ls-remote https://github.com/spf13/cobra e94f6d0dd9a5e5738dca6bce03c4b1207ffbc0ec
SRCREV_cobra="e94f6d0dd9a5e5738dca6bce03c4b1207ffbc0ec"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/cobra"

#       github.com/spf13/pflag v1.0.5
# [1] git ls-remote https://github.com/spf13/pflag 2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab
SRCREV_pflag="2e9d26c8c37aae03e3f9d4e90b7116f5accb7cab"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/pflag"

#       github.com/cilium/ebpf v0.11.0
# [1] git ls-remote https://github.com/cilium/ebpf 270c859894bd38cdd0c7783317b16343409e4df8
SRCREV_ebpf="270c859894bd38cdd0c7783317b16343409e4df8"
SRC_URI += "git://github.com/cilium/ebpf;name=ebpf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cilium/ebpf"

#       github.com/google/uuid v1.6.0
# [1] git ls-remote https://github.com/google/uuid 0f11ee6918f41a04c201eceeadf612a377bc7fbc
SRCREV_uuid="0f11ee6918f41a04c201eceeadf612a377bc7fbc"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/uuid"

#       github.com/moby/locker v1.0.1
# [1] git ls-remote https://github.com/moby/locker 281af2d563954745bea9d1487c965f24d30742fe
SRCREV_locker="281af2d563954745bea9d1487c965f24d30742fe"
SRC_URI += "git://github.com/moby/locker;name=locker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/locker"

#       google.golang.org/grpc v1.62.0
# [1] git ls-remote https://github.com/grpc/grpc-go d715b2ef0602fe2133221519cba0642ac282cc3f
SRCREV_grpc="d715b2ef0602fe2133221519cba0642ac282cc3f"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/grpc"

#       github.com/go-logr/logr v1.4.1
# [1] git ls-remote https://github.com/go-logr/logr dcdc3f2cd12e8a5c4e2a6712d6958c90e2e5bd98
SRCREV_logr="dcdc3f2cd12e8a5c4e2a6712d6958c90e2e5bd98"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/logr"

#       github.com/go-logr/stdr v1.2.2
# [1] git ls-remote https://github.com/go-logr/stdr 521af2addfa7c81c8a65d0e85ed34bb6bb6dc262
SRCREV_stdr="521af2addfa7c81c8a65d0e85ed34bb6bb6dc262"
SRC_URI += "git://github.com/go-logr/stdr;name=stdr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/stdr"

#       github.com/miekg/pkcs11 v1.1.1
# [1] git ls-remote https://github.com/miekg/pkcs11 f3481918a208bd212aa995a41f92d786eb418a7d
SRCREV_pkcs11="f3481918a208bd212aa995a41f92d786eb418a7d"
SRC_URI += "git://github.com/miekg/pkcs11;name=pkcs11;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/miekg/pkcs11"

#       github.com/tinylib/msgp v1.1.6
# [1] git ls-remote https://github.com/tinylib/msgp 205265da651409c54677b486e350b4d105da6d8b
SRCREV_msgp="205265da651409c54677b486e350b4d105da6d8b"
SRC_URI += "git://github.com/tinylib/msgp;name=msgp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tinylib/msgp"

#       lukechampine.com/blake3 v1.1.7
# [1] git ls-remote https://github.com/lukechampine/blake3 bb7ece4161ea910c6c385c17799b17d658075fcd
SRCREV_blake3="bb7ece4161ea910c6c385c17799b17d658075fcd"
SRC_URI += "git://github.com/lukechampine/blake3;name=blake3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/lukechampine.com/blake3"

#       github.com/docker/docker v27.0.3+incompatible
# [1] git ls-remote https://github.com/moby/moby 662f78c0b1bb5114172427cfcb40491d73159be2
SRCREV_docker="662f78c0b1bb5114172427cfcb40491d73159be2"
SRC_URI += "git://github.com/moby/moby;name=docker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker"

#       github.com/tidwall/gjson v1.17.1
# [1] git ls-remote https://github.com/tidwall/gjson bbf40bb0e4f47860677c7115b2eaa5b3413ce23e
SRCREV_gjson="bbf40bb0e4f47860677c7115b2eaa5b3413ce23e"
SRC_URI += "git://github.com/tidwall/gjson;name=gjson;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tidwall/gjson"

#       github.com/gogo/protobuf v1.3.2
# [1] git ls-remote https://github.com/gogo/protobuf b03c65ea87cdc3521ede29f62fe3ce239267c1bc
SRCREV_protobuf="b03c65ea87cdc3521ede29f62fe3ce239267c1bc"
SRC_URI += "git://github.com/gogo/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gogo/protobuf"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp="c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-cmp"

#       github.com/moby/sys/user v0.1.0
# [1] git ls-remote https://github.com/moby/sys c0711cde08c8fa33857a2c28721659267f49b5e2
SRCREV_user="c0711cde08c8fa33857a2c28721659267f49b5e2"
SRC_URI += "git://github.com/moby/sys;name=user;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/user"

#       github.com/philhofer/fwd v1.1.1
# [1] git ls-remote https://github.com/philhofer/fwd 9bcb9cab1b0394d8516a132ec243ba944efdb644
SRCREV_fwd="9bcb9cab1b0394d8516a132ec243ba944efdb644"
SRC_URI += "git://github.com/philhofer/fwd;name=fwd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/philhofer/fwd"

#       github.com/tidwall/match v1.1.1
# [1] git ls-remote https://github.com/tidwall/match 4c9fc61b493b7aa0a3d347e9190aa78c5bec09cf
SRCREV_match="4c9fc61b493b7aa0a3d347e9190aa78c5bec09cf"
SRC_URI += "git://github.com/tidwall/match;name=match;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tidwall/match"

#       go.opentelemetry.io/otel v1.19.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 60666c554065ac4da502fe28943eea4b938ab479
SRCREV_otel="60666c554065ac4da502fe28943eea4b938ab479"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel"

#       github.com/containerd/log v0.1.0
# [1] git ls-remote https://github.com/containerd/log 0fc1e28871fdf2786e2cc51bbe4133db6547a199
SRCREV_log="0fc1e28871fdf2786e2cc51bbe4133db6547a199"
SRC_URI += "git://github.com/containerd/log;name=log;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/log"

#       github.com/moby/sys/mount v0.3.3
# [1] git ls-remote https://github.com/moby/sys 416188aff8404d549e1e34a50e513befeb11c3b9
SRCREV_mount="416188aff8404d549e1e34a50e513befeb11c3b9"
SRC_URI += "git://github.com/moby/sys;name=mount;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mount"

#       github.com/djherbis/times v1.6.0
# [1] git ls-remote https://github.com/djherbis/times d1af0aa12128959e70b9e802c912f302c743c35b
SRCREV_times="d1af0aa12128959e70b9e802c912f302c743c35b"
SRC_URI += "git://github.com/djherbis/times;name=times;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/djherbis/times"

#       github.com/godbus/dbus/v5 v5.1.0
# [1] git ls-remote https://github.com/godbus/dbus e523abc905595cf17fb0001a7d77eaaddfaa216d
SRCREV_v5="e523abc905595cf17fb0001a7d77eaaddfaa216d"
SRC_URI += "git://github.com/godbus/dbus;name=v5;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/godbus/dbus/v5"

#       github.com/mr-tron/base58 v1.2.0
# [1] git ls-remote https://github.com/mr-tron/base58 cd0e5141f51dfcadb8311fd8e495eb11126a8010
SRCREV_base58="cd0e5141f51dfcadb8311fd8e495eb11126a8010"
SRC_URI += "git://github.com/mr-tron/base58;name=base58;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mr-tron/base58"

#       github.com/tidwall/pretty v1.2.0
# [1] git ls-remote https://github.com/tidwall/pretty aaa765e7476acb0028a854b85675801362cbdaa2
SRCREV_pretty="aaa765e7476acb0028a854b85675801362cbdaa2"
SRC_URI += "git://github.com/tidwall/pretty;name=pretty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tidwall/pretty"

#       github.com/containerd/fifo v1.1.0
# [1] git ls-remote https://github.com/containerd/fifo 151b205263c29d471e0d55c787d2ce9f5343fd46
SRCREV_fifo="151b205263c29d471e0d55c787d2ce9f5343fd46"
SRC_URI += "git://github.com/containerd/fifo;name=fifo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/fifo"

#       github.com/docker/go-units v0.5.0
# [1] git ls-remote https://github.com/docker/go-units e682442797b36348f8e1f98defdbf32bac0b6c6f
SRCREV_go-units="e682442797b36348f8e1f98defdbf32bac0b6c6f"
SRC_URI += "git://github.com/docker/go-units;name=go-units;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-units"

#       github.com/mattn/go-isatty v0.0.20
# [1] git ls-remote https://github.com/mattn/go-isatty a7c02353c47bc4ec6b30dc9628154ae4fe760c11
SRCREV_go-isatty="a7c02353c47bc4ec6b30dc9628154ae4fe760c11"
SRC_URI += "git://github.com/mattn/go-isatty;name=go-isatty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-isatty"

#       github.com/moby/sys/signal v0.7.0
# [1] git ls-remote https://github.com/moby/sys b8d8fabf1fa5cf0de7c1a1729145eee854ea31f5
SRCREV_signal="b8d8fabf1fa5cf0de7c1a1729145eee854ea31f5"
SRC_URI += "git://github.com/moby/sys;name=signal;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/signal"

#       github.com/yuchanns/srslog v1.1.0
# [1] git ls-remote https://github.com/yuchanns/srslog becd9b11119269a7928ae89fde90784335c1d016
SRCREV_srslog="becd9b11119269a7928ae89fde90784335c1d016"
SRC_URI += "git://github.com/yuchanns/srslog;name=srslog;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/yuchanns/srslog"

#       github.com/golang/protobuf v1.5.4
# [1] git ls-remote https://github.com/golang/protobuf 75de7c059e36b64f01d0dd234ff2fff404ec3374
SRCREV_golang-protobuf="75de7c059e36b64f01d0dd234ff2fff404ec3374"
SRC_URI += "git://github.com/golang/protobuf;name=golang-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/protobuf"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus="d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/sirupsen/logrus"

#       google.golang.org/genproto v0.0.0-20240123012728-ef4313101c80
# [1] git ls-remote https://github.com/googleapis/go-genproto ef4313101c801fa091ce994c42178295e58e9f6f
SRCREV_genproto="ef4313101c801fa091ce994c42178295e58e9f6f"
SRC_URI += "git://github.com/googleapis/go-genproto;name=genproto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto"

#       google.golang.org/protobuf v1.33.0
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go ec47fd138f9221b19a2afd6570b3c39ede9df3dc
SRCREV_google.golang.org-protobuf="ec47fd138f9221b19a2afd6570b3c39ede9df3dc"
SRC_URI += "git://github.com/protocolbuffers/protobuf-go;name=google.golang.org-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/protobuf"

#       github.com/bmizerany/assert v0.0.0-20160611221934-b7ed37b82869
# [1] git ls-remote https://github.com/bmizerany/assert b7ed37b82869576c289d7d97fb2bbd8b64a0cb28
SRCREV_assert="b7ed37b82869576c289d7d97fb2bbd8b64a0cb28"
SRC_URI += "git://github.com/bmizerany/assert;name=assert;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/bmizerany/assert"

#       github.com/containerd/ttrpc v1.2.5
# [1] git ls-remote https://github.com/containerd/ttrpc 655622931dab8c39a563e8c82ae90cdc748f72a1
SRCREV_ttrpc="655622931dab8c39a563e8c82ae90cdc748f72a1"
SRC_URI += "git://github.com/containerd/ttrpc;name=ttrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/ttrpc"

#       github.com/docker/go-events v0.0.0-20190806004212-e31b211e4f1c
# [1] git ls-remote https://github.com/docker/go-events e31b211e4f1cd09aa76fe4ac244571fab96ae47f
SRCREV_go-events="e31b211e4f1cd09aa76fe4ac244571fab96ae47f"
SRC_URI += "git://github.com/docker/go-events;name=go-events;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-events"

#       github.com/moby/sys/symlink v0.2.0
# [1] git ls-remote https://github.com/moby/sys 03b9f8d59a07f5206a2264105f4903a222aea964
SRCREV_symlink="03b9f8d59a07f5206a2264105f4903a222aea964"
SRC_URI += "git://github.com/moby/sys;name=symlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/symlink"

#       github.com/vbatts/tar-split v0.11.5
# [1] git ls-remote https://github.com/vbatts/tar-split 5ef0dd8243164ebacd755916a89d8085a5b6bb7f
SRCREV_tar-split="5ef0dd8243164ebacd755916a89d8085a5b6bb7f"
SRC_URI += "git://github.com/vbatts/tar-split;name=tar-split;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vbatts/tar-split"

#       github.com/Microsoft/hcsshim v0.12.4
# [1] git ls-remote https://github.com/microsoft/hcsshim c6a83278f5925b721702744dc12a78e274243fa0
SRCREV_hcsshim="c6a83278f5925b721702744dc12a78e274243fa0"
SRC_URI += "git://github.com/microsoft/hcsshim;name=hcsshim;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/hcsshim"

#       github.com/containerd/go-cni v1.1.10
# [1] git ls-remote https://github.com/containerd/go-cni 1c1be5e9ea864c9bc1651909ae13e1e555b4098d
SRCREV_go-cni="1c1be5e9ea864c9bc1651909ae13e1e555b4098d"
SRC_URI += "git://github.com/containerd/go-cni;name=go-cni;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/go-cni"

#       github.com/vishvananda/netns v0.0.4
# [1] git ls-remote https://github.com/vishvananda/netns 7a452d2d15292b2bfb2a2d88e6bdeac156a761b9
SRCREV_netns="7a452d2d15292b2bfb2a2d88e6bdeac156a761b9"
SRC_URI += "git://github.com/vishvananda/netns;name=netns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vishvananda/netns"

#       github.com/Azure/go-ansiterm v0.0.0-20210617225240-d185dfc1b5a1
# [1] git ls-remote https://github.com/Azure/go-ansiterm d185dfc1b5a126116ea5a19e148e29d16b4574c9
SRCREV_go-ansiterm="d185dfc1b5a126116ea5a19e148e29d16b4574c9"
SRC_URI += "git://github.com/Azure/go-ansiterm;name=go-ansiterm;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Azure/go-ansiterm"

#       github.com/felixge/httpsnoop v1.0.3
# [1] git ls-remote https://github.com/felixge/httpsnoop ef9fc62cdc3cc5abc33d6018fe1324890bb48145
SRCREV_httpsnoop="ef9fc62cdc3cc5abc33d6018fe1324890bb48145"
SRC_URI += "git://github.com/felixge/httpsnoop;name=httpsnoop;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/felixge/httpsnoop"

#       github.com/golang/groupcache v0.0.0-20210331224755-41bb18bfe9da
# [1] git ls-remote https://github.com/golang/groupcache 41bb18bfe9da5321badc438f91158cd790a33aa3
SRCREV_groupcache="41bb18bfe9da5321badc438f91158cd790a33aa3"
SRC_URI += "git://github.com/golang/groupcache;name=groupcache;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/groupcache"

#       github.com/hashicorp/errwrap v1.1.0
# [1] git ls-remote https://github.com/hashicorp/errwrap 7b00e5db719c64d14dd0caaacbd13e76254d02c0
SRCREV_errwrap="7b00e5db719c64d14dd0caaacbd13e76254d02c0"
SRC_URI += "git://github.com/hashicorp/errwrap;name=errwrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/errwrap"

#       github.com/minio/sha256-simd v1.0.1
# [1] git ls-remote https://github.com/minio/sha256-simd 6096f891a77bfe490cbea7a424c821b5fdb92849
SRCREV_sha256-simd="6096f891a77bfe490cbea7a424c821b5fdb92849"
SRC_URI += "git://github.com/minio/sha256-simd;name=sha256-simd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/minio/sha256-simd"

#       github.com/pelletier/go-toml v1.9.5
# [1] git ls-remote https://github.com/pelletier/go-toml fed1464066413075eac02cd4dc368b5221845541
SRCREV_go-toml="fed1464066413075eac02cd4dc368b5221845541"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pelletier/go-toml"

#       github.com/spaolacci/murmur3 v1.1.0
# [1] git ls-remote https://github.com/spaolacci/murmur3 f09979ecbc725b9e6d41a297405f65e7e8804acc
SRCREV_murmur3="f09979ecbc725b9e6d41a297405f65e7e8804acc"
SRC_URI += "git://github.com/spaolacci/murmur3;name=murmur3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spaolacci/murmur3"

#       github.com/Microsoft/go-winio v0.6.2
# [1] git ls-remote https://github.com/microsoft/go-winio 3c9576c9346a1892dee136329e7e15309e82fb4f
SRCREV_go-winio="3c9576c9346a1892dee136329e7e15309e82fb4f"
SRC_URI += "git://github.com/microsoft/go-winio;name=go-winio;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/go-winio"

#       github.com/containerd/console v1.0.4
# [1] git ls-remote https://github.com/containerd/console 8f6c4e4faef5a326d2cd907097d04c0239ee5e2f
SRCREV_console="8f6c4e4faef5a326d2cd907097d04c0239ee5e2f"
SRC_URI += "git://github.com/containerd/console;name=console;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/console"

#       github.com/coreos/go-iptables v0.7.0
# [1] git ls-remote https://github.com/coreos/go-iptables b9dff5a19d9c3925da3f9b3c0a705de6c1fdc56c
SRCREV_go-iptables="b9dff5a19d9c3925da3f9b3c0a705de6c1fdc56c"
SRC_URI += "git://github.com/coreos/go-iptables;name=go-iptables;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-iptables"

#       github.com/containerd/errdefs v0.1.0
# [1] git ls-remote https://github.com/containerd/errdefs 3abe02904986ab350333f0892b226ce5a2a45820
SRCREV_errdefs="3abe02904986ab350333f0892b226ce5a2a45820"
SRC_URI += "git://github.com/containerd/errdefs;name=errdefs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/errdefs"

#       github.com/containerd/go-runc v1.0.0
# [1] git ls-remote https://github.com/containerd/go-runc 16b287bc67d069a60fa48db15f330b790b74365b
SRCREV_go-runc="16b287bc67d069a60fa48db15f330b790b74365b"
SRC_URI += "git://github.com/containerd/go-runc;name=go-runc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/go-runc"

#       github.com/containerd/typeurl v1.0.3-0.20220422153119-7f6e6d160d67
# [1] git ls-remote https://github.com/containerd/typeurl 7f6e6d160d675241af388d5cf1b90814786bac40
SRCREV_typeurl="7f6e6d160d675241af388d5cf1b90814786bac40"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/typeurl"

#       github.com/go-jose/go-jose/v3 v3.0.3
# [1] git ls-remote https://github.com/go-jose/go-jose add6a284ea0f844fd6628cba637be5451fe4b28a
SRCREV_go-jose-v3="add6a284ea0f844fd6628cba637be5451fe4b28a"
SRC_URI += "git://github.com/go-jose/go-jose;name=go-jose-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-jose/go-jose/v3"

#       github.com/klauspost/compress v1.17.9
# [1] git ls-remote https://github.com/klauspost/compress 7ae2138b16cc43afcea3ce7d3d2f2625fb389d51
SRCREV_compress="7ae2138b16cc43afcea3ce7d3d2f2625fb389d51"
SRC_URI += "git://github.com/klauspost/compress;name=compress;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/klauspost/compress"

#       github.com/klauspost/cpuid/v2 v2.2.3
# [1] git ls-remote https://github.com/klauspost/cpuid 3c0ec06adeb260a595bfb1dff123742e8bac34fb
SRCREV_cpuid-v2="3c0ec06adeb260a595bfb1dff123742e8bac34fb"
SRC_URI += "git://github.com/klauspost/cpuid;name=cpuid-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/klauspost/cpuid/v2"

#       github.com/mattn/go-colorable v0.1.13
# [1] git ls-remote https://github.com/mattn/go-colorable 11a925cff3d38c293ddc8c05a16b504e3e2c63be
SRCREV_go-colorable="11a925cff3d38c293ddc8c05a16b504e3e2c63be"
SRC_URI += "git://github.com/mattn/go-colorable;name=go-colorable;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-colorable"

#       github.com/moby/sys/mountinfo v0.7.1
# [1] git ls-remote https://github.com/moby/sys 4950d7687cf6c9b138dc0e18c2c7351e1f6ed497
SRCREV_mountinfo="4950d7687cf6c9b138dc0e18c2c7351e1f6ed497"
SRC_URI += "git://github.com/moby/sys;name=mountinfo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mountinfo"

#       github.com/containerd/imgcrypt v1.1.11
# [1] git ls-remote https://github.com/containerd/imgcrypt 619fd33080b087702c72e93451a698c381d522d0
SRCREV_imgcrypt="619fd33080b087702c72e93451a698c381d522d0"
SRC_URI += "git://github.com/containerd/imgcrypt;name=imgcrypt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/imgcrypt"

#       github.com/muesli/cancelreader v0.2.2
# [1] git ls-remote https://github.com/muesli/cancelreader d11f1e77abf7f8d69d81553ccaaf0b81163541a6
SRCREV_cancelreader="d11f1e77abf7f8d69d81553ccaaf0b81163541a6"
SRC_URI += "git://github.com/muesli/cancelreader;name=cancelreader;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/muesli/cancelreader"

#       github.com/vishvananda/netlink v1.2.1-beta.2
# [1] git ls-remote https://github.com/vishvananda/netlink 5e915e0149386ce3d02379ff93f4c0a5601779d5
SRCREV_netlink="5e915e0149386ce3d02379ff93f4c0a5601779d5"
SRC_URI += "git://github.com/vishvananda/netlink;name=netlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vishvananda/netlink"

#       github.com/containers/ocicrypt v1.1.10
# [1] git ls-remote https://github.com/containers/ocicrypt ccaf1f86ed8ce962ed5909808113bc84b5684018
SRCREV_ocicrypt="ccaf1f86ed8ce962ed5909808113bc84b5684018"
SRC_URI += "git://github.com/containers/ocicrypt;name=ocicrypt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containers/ocicrypt"

#       github.com/mattn/go-shellwords v1.0.12
# [1] git ls-remote https://github.com/mattn/go-shellwords 973b9d5391598d4ee601db46fa32f6e186a356ac
SRCREV_go-shellwords="973b9d5391598d4ee601db46fa32f6e186a356ac"
SRC_URI += "git://github.com/mattn/go-shellwords;name=go-shellwords;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-shellwords"

#       github.com/moby/sys/sequential v0.5.0
# [1] git ls-remote https://github.com/moby/sys b22ba8a69b306f0b4adbbe2a529457e6283ed9f7
SRCREV_sequential="b22ba8a69b306f0b4adbbe2a529457e6283ed9f7"
SRC_URI += "git://github.com/moby/sys;name=sequential;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/sequential"

#       go.opentelemetry.io/otel/trace v1.19.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 60666c554065ac4da502fe28943eea4b938ab479
SRCREV_trace="60666c554065ac4da502fe28943eea4b938ab479"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=trace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/trace"

#       github.com/containerd/platforms v0.2.1
# [1] git ls-remote https://github.com/containerd/platforms 163df76b7184bb17ead614c92176995ec8fa5919
SRCREV_platforms="163df76b7184bb17ead614c92176995ec8fa5919"
SRC_URI += "git://github.com/containerd/platforms;name=platforms;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/platforms"

#       github.com/pelletier/go-toml/v2 v2.2.2
# [1] git ls-remote https://github.com/pelletier/go-toml a3d5a0bb530b5206c728eed9cb57323061922bcb
SRCREV_go-toml-v2="a3d5a0bb530b5206c728eed9cb57323061922bcb"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pelletier/go-toml/v2"

#       github.com/mitchellh/go-homedir v1.1.0
# [1] git ls-remote https://github.com/mitchellh/go-homedir af06845cf3004701891bf4fdb884bfe4920b3727
SRCREV_go-homedir="af06845cf3004701891bf4fdb884bfe4920b3727"
SRC_URI += "git://github.com/mitchellh/go-homedir;name=go-homedir;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/go-homedir"

#       github.com/xeipuuv/gojsonschema v1.2.0
# [1] git ls-remote https://github.com/xeipuuv/gojsonschema 82fcdeb203eb6ab2a67d0a623d9c19e5e5a64927
SRCREV_gojsonschema="82fcdeb203eb6ab2a67d0a623d9c19e5e5a64927"
SRC_URI += "git://github.com/xeipuuv/gojsonschema;name=gojsonschema;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonschema"

#       go.opentelemetry.io/otel/metric v1.19.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 60666c554065ac4da502fe28943eea4b938ab479
SRCREV_metric="60666c554065ac4da502fe28943eea4b938ab479"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/metric"

#       github.com/Masterminds/semver/v3 v3.2.1
# [1] git ls-remote https://github.com/Masterminds/semver e06051f8fcc4c8b4a4990c337b9862a2448722e5
SRCREV_v3="e06051f8fcc4c8b4a4990c337b9862a2448722e5"
SRC_URI += "git://github.com/Masterminds/semver;name=v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Masterminds/semver/v3"

#       github.com/containerd/cgroups/v3 v3.0.3
# [1] git ls-remote https://github.com/containerd/cgroups 1e056883d58ac58daf7566065a46016b4532f35c
SRCREV_cgroups-v3="1e056883d58ac58daf7566065a46016b4532f35c"
SRC_URI += "git://github.com/containerd/cgroups;name=cgroups-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/cgroups/v3"

#       github.com/containerd/containerd v1.7.19
# [1] git ls-remote https://github.com/containerd/containerd 2bf793ef6dc9a18e00cb12efb64355c2c9d5eb41
SRCREV_containerd="2bf793ef6dc9a18e00cb12efb64355c2c9d5eb41"
SRC_URI += "git://github.com/containerd/containerd;name=containerd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/containerd"

#       github.com/containerd/continuity v0.4.3
# [1] git ls-remote https://github.com/containerd/continuity 1743d9104d944131cdedaba33a59d2f9bd80a6f2
SRCREV_continuity="1743d9104d944131cdedaba33a59d2f9bd80a6f2"
SRC_URI += "git://github.com/containerd/continuity;name=continuity;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/continuity"

#       github.com/containerd/typeurl/v2 v2.2.0
# [1] git ls-remote https://github.com/containerd/typeurl 933576d917b1a9ba697d03d982fb18cb0260e64f
SRCREV_typeurl-v2="933576d917b1a9ba697d03d982fb18cb0260e64f"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/typeurl/v2"

#       github.com/coreos/go-systemd/v22 v22.5.0
# [1] git ls-remote https://github.com/coreos/go-systemd d5623bf85e8e73ae6352f78ee6b55a287619dd4e
SRCREV_v22="d5623bf85e8e73ae6352f78ee6b55a287619dd4e"
SRC_URI += "git://github.com/coreos/go-systemd;name=v22;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-systemd/v22"

#       github.com/docker/go-connections v0.5.0
# [1] git ls-remote https://github.com/docker/go-connections fa09c952e3eadbffaf8afc5b8a1667158ba38ace
SRCREV_go-connections="fa09c952e3eadbffaf8afc5b8a1667158ba38ace"
SRC_URI += "git://github.com/docker/go-connections;name=go-connections;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-connections"

#       github.com/xeipuuv/gojsonpointer v0.0.0-20190905194746-02993c407bfb
# [1] git ls-remote https://github.com/xeipuuv/gojsonpointer 02993c407bfbf5f6dae44c4f4b1cf6a39b5fc5bb
SRCREV_gojsonpointer="02993c407bfbf5f6dae44c4f4b1cf6a39b5fc5bb"
SRC_URI += "git://github.com/xeipuuv/gojsonpointer;name=gojsonpointer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonpointer"

#       github.com/fahedouch/go-logrotate v0.2.1
# [1] git ls-remote https://github.com/fahedouch/go-logrotate e7e671d3a673890ee38392540079196cef61e3d6
SRCREV_go-logrotate="e7e671d3a673890ee38392540079196cef61e3d6"
SRC_URI += "git://github.com/fahedouch/go-logrotate;name=go-logrotate;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fahedouch/go-logrotate"

#       github.com/mitchellh/mapstructure v1.5.0
# [1] git ls-remote https://github.com/mitchellh/mapstructure ab69d8d93410fce4361f4912bb1ff88110a81311
SRCREV_mapstructure="ab69d8d93410fce4361f4912bb1ff88110a81311"
SRC_URI += "git://github.com/mitchellh/mapstructure;name=mapstructure;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/mapstructure"

#       github.com/distribution/reference v0.6.0
# [1] git ls-remote https://github.com/distribution/reference ff14fafe2236e51c2894ac07d4bdfc778e96d682
SRCREV_reference="ff14fafe2236e51c2894ac07d4bdfc778e96d682"
SRC_URI += "git://github.com/distribution/reference;name=reference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/distribution/reference"

#       github.com/moby/docker-image-spec v1.3.1
# [1] git ls-remote https://github.com/moby/docker-image-spec f1d00ebd2d6d6805170d5543dbca4b850f35f9af
SRCREV_docker-image-spec="f1d00ebd2d6d6805170d5543dbca4b850f35f9af"
SRC_URI += "git://github.com/moby/docker-image-spec;name=docker-image-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/docker-image-spec"

#       github.com/multiformats/go-base32 v0.1.0
# [1] git ls-remote https://github.com/multiformats/go-base32 a16b66327f327428b32b919939b8c93482507e1f
SRCREV_go-base32="a16b66327f327428b32b919939b8c93482507e1f"
SRC_URI += "git://github.com/multiformats/go-base32;name=go-base32;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-base32"

#       github.com/multiformats/go-base36 v0.1.0
# [1] git ls-remote https://github.com/multiformats/go-base36 dc4afa6ad3b0720f4a1b282776db2a59ca9c8be7
SRCREV_go-base36="dc4afa6ad3b0720f4a1b282776db2a59ca9c8be7"
SRC_URI += "git://github.com/multiformats/go-base36;name=go-base36;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-base36"

#       github.com/multiformats/go-varint v0.0.6
# [1] git ls-remote https://github.com/multiformats/go-varint a3ded45ab16ca9f2f2a516e68053ffa7ebd9bb0e
SRCREV_go-varint="a3ded45ab16ca9f2f2a516e68053ffa7ebd9bb0e"
SRC_URI += "git://github.com/multiformats/go-varint;name=go-varint;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-varint"

#       github.com/opencontainers/selinux v1.11.0
# [1] git ls-remote https://github.com/opencontainers/selinux b68c45eb2df48c6b0c949901ccda90c8e65fe677
SRCREV_selinux="b68c45eb2df48c6b0c949901ccda90c8e65fe677"
SRC_URI += "git://github.com/opencontainers/selinux;name=selinux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/selinux"

#       github.com/containernetworking/cni v1.2.2
# [1] git ls-remote https://github.com/containernetworking/cni d5c71ad528129e306538f7ba5b796337c1898d81
SRCREV_cni="d5c71ad528129e306538f7ba5b796337c1898d81"
SRC_URI += "git://github.com/containernetworking/cni;name=cni;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/cni"

#       github.com/hashicorp/go-multierror v1.1.1
# [1] git ls-remote https://github.com/hashicorp/go-multierror 9974e9ec57696378079ecc3accd3d6f29401b3a0
SRCREV_go-multierror="9974e9ec57696378079ecc3accd3d6f29401b3a0"
SRC_URI += "git://github.com/hashicorp/go-multierror;name=go-multierror;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/hashicorp/go-multierror"

#       github.com/xeipuuv/gojsonreference v0.0.0-20180127040603-bd5ef7bd5415
# [1] git ls-remote https://github.com/xeipuuv/gojsonreference bd5ef7bd5415a7ac448318e64f11a24cd21e594b
SRCREV_gojsonreference="bd5ef7bd5415a7ac448318e64f11a24cd21e594b"
SRC_URI += "git://github.com/xeipuuv/gojsonreference;name=gojsonreference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonreference"

#       github.com/awslabs/soci-snapshotter v0.6.1
# [1] git ls-remote https://github.com/awslabs/soci-snapshotter bc692715c8078e4cdfcec064f22fd324914bda8e
SRCREV_soci-snapshotter="bc692715c8078e4cdfcec064f22fd324914bda8e"
SRC_URI += "git://github.com/awslabs/soci-snapshotter;name=soci-snapshotter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/awslabs/soci-snapshotter"

#       github.com/opencontainers/go-digest v1.0.0
# [1] git ls-remote https://github.com/opencontainers/go-digest ea51bea511f75cfa3ef6098cc253c5c3609b037a
SRCREV_go-digest="ea51bea511f75cfa3ef6098cc253c5c3609b037a"
SRC_URI += "git://github.com/opencontainers/go-digest;name=go-digest;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/go-digest"

#       github.com/go-viper/mapstructure/v2 v2.0.0
# [1] git ls-remote https://github.com/go-viper/mapstructure 6abdb44d71d6ac11f79c11a30a9653c9e4986625
SRCREV_mapstructure-v2="6abdb44d71d6ac11f79c11a30a9653c9e4986625"
SRC_URI += "git://github.com/go-viper/mapstructure;name=mapstructure-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-viper/mapstructure/v2"

#       github.com/containerd/containerd/api v1.7.19
# [1] git ls-remote https://github.com/containerd/containerd b600181a9324222b5f84c702b13250390bfdf746
SRCREV_api="b600181a9324222b5f84c702b13250390bfdf746"
SRC_URI += "git://github.com/containerd/containerd;name=api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/containerd/api"

#       github.com/opencontainers/image-spec v1.1.0
# [1] git ls-remote https://github.com/opencontainers/image-spec e7f7c0ca69b21688c3cea7c87a04e4503e6099e2
SRCREV_image-spec="e7f7c0ca69b21688c3cea7c87a04e4503e6099e2"
SRC_URI += "git://github.com/opencontainers/image-spec;name=image-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/image-spec"

#       github.com/AdaLogics/go-fuzz-headers v0.0.0-20230811130428-ced1acdcaa24
# [1] git ls-remote https://github.com/AdaLogics/go-fuzz-headers ced1acdcaa24dc39c01b039fc37576c395f506cf
SRCREV_go-fuzz-headers="ced1acdcaa24dc39c01b039fc37576c395f506cf"
SRC_URI += "git://github.com/AdaLogics/go-fuzz-headers;name=go-fuzz-headers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AdaLogics/go-fuzz-headers"

#       github.com/inconshreveable/mousetrap v1.1.0
# [1] git ls-remote https://github.com/inconshreveable/mousetrap 4e8053ee7ef85a6bd26368364a6d27f1641c1d21
SRCREV_mousetrap="4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/inconshreveable/mousetrap"

#       github.com/multiformats/go-multiaddr v0.12.0
# [1] git ls-remote https://github.com/multiformats/go-multiaddr 5dd793c6fc4935fad347429a48a168acc8073474
SRCREV_go-multiaddr="5dd793c6fc4935fad347429a48a168acc8073474"
SRC_URI += "git://github.com/multiformats/go-multiaddr;name=go-multiaddr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multiaddr"

#       github.com/multiformats/go-multibase v0.1.1
# [1] git ls-remote https://github.com/multiformats/go-multibase c1bc15b22eedb45f9205f3b60ce5fcb8fca93e08
SRCREV_go-multibase="c1bc15b22eedb45f9205f3b60ce5fcb8fca93e08"
SRC_URI += "git://github.com/multiformats/go-multibase;name=go-multibase;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multibase"

#       github.com/multiformats/go-multihash v0.2.1
# [1] git ls-remote https://github.com/multiformats/go-multihash 16974ad98ab1fb19eb756919f55373b39cc80bec
SRCREV_go-multihash="16974ad98ab1fb19eb756919f55373b39cc80bec"
SRC_URI += "git://github.com/multiformats/go-multihash;name=go-multihash;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multihash"

#       github.com/stefanberger/go-pkcs11uri v0.0.0-20230803200340-78284954bff6
# [1] git ls-remote https://github.com/stefanberger/go-pkcs11uri 78284954bff6dcce7888166bb79bbba93bea0879
SRCREV_go-pkcs11uri="78284954bff6dcce7888166bb79bbba93bea0879"
SRC_URI += "git://github.com/stefanberger/go-pkcs11uri;name=go-pkcs11uri;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stefanberger/go-pkcs11uri"

#       github.com/compose-spec/compose-go/v2 v2.1.3
# [1] git ls-remote https://github.com/compose-spec/compose-go 35c575c758afd2a8363bd47290c3ddec0d23ebaf
SRCREV_v2="35c575c758afd2a8363bd47290c3ddec0d23ebaf"
SRC_URI += "git://github.com/compose-spec/compose-go;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/compose-spec/compose-go/v2"

#       github.com/cyphar/filepath-securejoin v0.3.0
# [1] git ls-remote https://github.com/cyphar/filepath-securejoin b984b9cbbfa775c0ba6828372fd53da2262cb552
SRCREV_filepath-securejoin="b984b9cbbfa775c0ba6828372fd53da2262cb552"
SRC_URI += "git://github.com/cyphar/filepath-securejoin;name=filepath-securejoin;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cyphar/filepath-securejoin"

#       github.com/containernetworking/plugins v1.5.1
# [1] git ls-remote https://github.com/containernetworking/plugins c29dc79f96cd50452a247a4591443d2aac033429
SRCREV_plugins="c29dc79f96cd50452a247a4591443d2aac033429"
SRC_URI += "git://github.com/containernetworking/plugins;name=plugins;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/plugins"

#       github.com/fluent/fluent-logger-golang v1.9.0
# [1] git ls-remote https://github.com/fluent/fluent-logger-golang 5538e904aeb515c10a624da620581bdf420d4b8a
SRCREV_fluent-logger-golang="5538e904aeb515c10a624da620581bdf420d4b8a"
SRC_URI += "git://github.com/fluent/fluent-logger-golang;name=fluent-logger-golang;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fluent/fluent-logger-golang"

#       github.com/opencontainers/runtime-spec v1.2.0
# [1] git ls-remote https://github.com/opencontainers/runtime-spec 36852b0d072a4b5da675300a9e73bc4b0853f5c6
SRCREV_runtime-spec="36852b0d072a4b5da675300a9e73bc4b0853f5c6"
SRC_URI += "git://github.com/opencontainers/runtime-spec;name=runtime-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/runtime-spec"

#       github.com/AdamKorcz/go-118-fuzz-build v0.0.0-20230306123547-8075edf89bb0
# [1] git ls-remote https://github.com/AdamKorcz/go-118-fuzz-build 8075edf89bb034603c758f28fe93143047ac5677
SRCREV_go-118-fuzz-build="8075edf89bb034603c758f28fe93143047ac5677"
SRC_URI += "git://github.com/AdamKorcz/go-118-fuzz-build;name=go-118-fuzz-build;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AdamKorcz/go-118-fuzz-build"

#       github.com/containerd/nydus-snapshotter v0.13.13
# [1] git ls-remote https://github.com/containerd/nydus-snapshotter e9d1bb738f778a2e30b8284ca4f479fa2517456c
SRCREV_nydus-snapshotter="e9d1bb738f778a2e30b8284ca4f479fa2517456c"
SRC_URI += "git://github.com/containerd/nydus-snapshotter;name=nydus-snapshotter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/nydus-snapshotter"

#       github.com/containerd/stargz-snapshotter v0.15.1
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 64ab83bd65cd4a763e262955984232cc5ddfeb3f
SRCREV_stargz-snapshotter="64ab83bd65cd4a763e262955984232cc5ddfeb3f"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=stargz-snapshotter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter"

#       google.golang.org/genproto/googleapis/rpc v0.0.0-20240123012728-ef4313101c80
# [1] git ls-remote https://github.com/googleapis/go-genproto ef4313101c801fa091ce994c42178295e58e9f6f
SRCREV_rpc="ef4313101c801fa091ce994c42178295e58e9f6f"
SRC_URI += "git://github.com/googleapis/go-genproto;name=rpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/rpc"

#       github.com/rootless-containers/bypass4netns v0.4.1
# [1] git ls-remote https://github.com/rootless-containers/bypass4netns c3c127b902268c0ec143d5d0e06b567e0b930c45
SRCREV_bypass4netns="c3c127b902268c0ec143d5d0e06b567e0b930c45"
SRC_URI += "git://github.com/rootless-containers/bypass4netns;name=bypass4netns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rootless-containers/bypass4netns"

#       github.com/docker/docker-credential-helpers v0.7.0
# [1] git ls-remote https://github.com/docker/docker-credential-helpers ac5992b5f4756fc0398a7d0c93c609e624368bde
SRCREV_docker-credential-helpers="ac5992b5f4756fc0398a7d0c93c609e624368bde"
SRC_URI += "git://github.com/docker/docker-credential-helpers;name=docker-credential-helpers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker-credential-helpers"

#       github.com/containerd/stargz-snapshotter/ipfs v0.15.1
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 64ab83bd65cd4a763e262955984232cc5ddfeb3f
SRCREV_ipfs="64ab83bd65cd4a763e262955984232cc5ddfeb3f"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=ipfs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter/ipfs"

#       github.com/rootless-containers/rootlesskit/v2 v2.1.0
# [1] git ls-remote https://github.com/rootless-containers/rootlesskit da77c66a62412f8631fd9ce17653a3ee36802215
SRCREV_rootlesskit-v2="da77c66a62412f8631fd9ce17653a3ee36802215"
SRC_URI += "git://github.com/rootless-containers/rootlesskit;name=rootlesskit-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rootless-containers/rootlesskit/v2"

#       github.com/containerd/stargz-snapshotter/estargz v0.15.1
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter 64ab83bd65cd4a763e262955984232cc5ddfeb3f
SRCREV_estargz="64ab83bd65cd4a763e262955984232cc5ddfeb3f"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=estargz;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter/estargz"

#       github.com/containerd/accelerated-container-image v1.1.3
# [1] git ls-remote https://github.com/containerd/accelerated-container-image e66cd5cd4e31a986df6a282ef861286138e528c7
SRCREV_accelerated-container-image="e66cd5cd4e31a986df6a282ef861286138e528c7"
SRC_URI += "git://github.com/containerd/accelerated-container-image;name=accelerated-container-image;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/accelerated-container-image"

#       go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp v0.45.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 9d4eb7e7706038b07d33f83f76afbe13f53d171d
SRCREV_otelhttp="9d4eb7e7706038b07d33f83f76afbe13f53d171d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp"

