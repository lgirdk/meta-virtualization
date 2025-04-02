#       gotest.tools/v3 v3.5.2
# [1] git ls-remote https://github.com/gotestyourself/gotest.tools 0b81523ff268a1f1b0baf4a5da67e42fbb86880b
SRCREV_gotest.tools-v3 = "0b81523ff268a1f1b0baf4a5da67e42fbb86880b"
SRC_URI += "git://github.com/gotestyourself/gotest.tools;name=gotest.tools-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gotest.tools/v3"

#       go.uber.org/mock v0.5.0
# [1] git ls-remote https://github.com/uber/mock a9c44d91ce00ef09603d3822452a4f9c8fefd278
SRCREV_mock = "a9c44d91ce00ef09603d3822452a4f9c8fefd278"
SRC_URI += "git://github.com/uber/mock;name=mock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.uber.org/mock"

#       golang.org/x/net v0.37.0
# [1] git ls-remote https://go.googlesource.com/net 99b3ae0643f9a2f9d820fcbba5f9e4c83b23bd48
SRCREV_net = "99b3ae0643f9a2f9d820fcbba5f9e4c83b23bd48"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.31.0
# [1] git ls-remote https://github.com/golang/sys 74cfc93a99be6ca6f193856132e6799065b071af
SRCREV_sys = "74cfc93a99be6ca6f193856132e6799065b071af"
SRC_URI += "git://github.com/golang/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3 = "f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v3"

#       go.opencensus.io v0.24.0
# [1] git ls-remote https://github.com/census-instrumentation/opencensus-go b1a01ee95db0e690d91d7193d037447816fae4c5
SRCREV_go.opencensus.io = "b1a01ee95db0e690d91d7193d037447816fae4c5"
SRC_URI += "git://github.com/census-instrumentation/opencensus-go;name=go.opencensus.io;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opencensus.io"

#       golang.org/x/exp v0.0.0-20241108190413-2d47ceb2692f
# [1] git ls-remote https://go.googlesource.com/exp 2d47ceb2692f22136c9ff680c192d3d19c5dd9e2
SRCREV_exp = "2d47ceb2692f22136c9ff680c192d3d19c5dd9e2"
SRC_URI += "git://go.googlesource.com/exp;name=exp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/exp"

#       golang.org/x/sync v0.12.0
# [1] git ls-remote https://go.googlesource.com/sync b637f27e40ad6e222f3d301cc113e635f0fa08be
SRCREV_sync = "b637f27e40ad6e222f3d301cc113e635f0fa08be"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sync"

#       golang.org/x/term v0.30.0
# [1] git ls-remote https://go.googlesource.com/term 04218fdaf78fa213d4e82c988184a250f6c354c2
SRCREV_x-term = "04218fdaf78fa213d4e82c988184a250f6c354c2"
SRC_URI += "git://go.googlesource.com/term;name=x-term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/term"

#       golang.org/x/text v0.23.0
# [1] git ls-remote https://go.googlesource.com/text 566b44fc931e2542778a18423c655ce99b4f1402
SRCREV_text = "566b44fc931e2542778a18423c655ce99b4f1402"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/text"

#       golang.org/x/crypto v0.36.0
# [1] git ls-remote https://go.googlesource.com/crypto 49bf5b80c8108983f588ecabd7bf996e6e63a515
SRCREV_crypto = "49bf5b80c8108983f588ecabd7bf996e6e63a515"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/crypto"

#       github.com/moby/term v0.5.2
# [1] git ls-remote https://github.com/moby/term 6c1b69fecbac2753dcaf18718a7e9f9093c3760d
SRCREV_term = "6c1b69fecbac2753dcaf18718a7e9f9093c3760d"
SRC_URI += "git://github.com/moby/term;name=term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/term"

#       github.com/docker/cli v28.0.1+incompatible
# [1] git ls-remote https://github.com/docker/cli 068a01ea9470df6494cc92d9e64e240805ae47a7
SRCREV_cli = "068a01ea9470df6494cc92d9e64e240805ae47a7"
SRC_URI += "git://github.com/docker/cli;name=cli;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/cli"

#       github.com/creack/pty v1.1.24
# [1] git ls-remote https://github.com/creack/pty edfbf75025b0ba4ee17c19f52d9b600fad80a787
SRCREV_pty = "edfbf75025b0ba4ee17c19f52d9b600fad80a787"
SRC_URI += "git://github.com/creack/pty;name=pty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/creack/pty"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors = "614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pkg/errors"

#       github.com/fatih/color v1.18.0
# [1] git ls-remote https://github.com/fatih/color 1c8d8706604ee5fb9a464e5097ba113101828a75
SRCREV_color = "1c8d8706604ee5fb9a464e5097ba113101828a75"
SRC_URI += "git://github.com/fatih/color;name=color;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fatih/color"

#       github.com/ipfs/go-cid v0.5.0
# [1] git ls-remote https://github.com/ipfs/go-cid 5cddba5d532ac5adeec87f5542c057e1dbfbce9b
SRCREV_go-cid = "5cddba5d532ac5adeec87f5542c057e1dbfbce9b"
SRC_URI += "git://github.com/ipfs/go-cid;name=go-cid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/ipfs/go-cid"

#       github.com/spf13/cobra v1.9.1
# [1] git ls-remote https://github.com/spf13/cobra 40b5bc1437a564fc795d388b23835e84f54cd1d1
SRCREV_cobra = "40b5bc1437a564fc795d388b23835e84f54cd1d1"
SRC_URI += "git://github.com/spf13/cobra;name=cobra;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/cobra"

#       github.com/spf13/pflag v1.0.6
# [1] git ls-remote https://github.com/spf13/pflag 5ca813443bd2a4d9f46a253ea0407d23b3790713
SRCREV_pflag = "5ca813443bd2a4d9f46a253ea0407d23b3790713"
SRC_URI += "git://github.com/spf13/pflag;name=pflag;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spf13/pflag"

#       github.com/cilium/ebpf v0.16.0
# [1] git ls-remote https://github.com/cilium/ebpf 061e86d8f5e99aa6f04d11a3807c8cacdbe7908b
SRCREV_ebpf = "061e86d8f5e99aa6f04d11a3807c8cacdbe7908b"
SRC_URI += "git://github.com/cilium/ebpf;name=ebpf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cilium/ebpf"

#       github.com/moby/locker v1.0.1
# [1] git ls-remote https://github.com/moby/locker 281af2d563954745bea9d1487c965f24d30742fe
SRCREV_locker = "281af2d563954745bea9d1487c965f24d30742fe"
SRC_URI += "git://github.com/moby/locker;name=locker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/locker"

#       google.golang.org/grpc v1.69.4
# [1] git ls-remote https://github.com/grpc/grpc-go 4103cfc52a951673d441f8b2c02eee96e31f1897
SRCREV_grpc = "4103cfc52a951673d441f8b2c02eee96e31f1897"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/grpc"

#       github.com/go-logr/logr v1.4.2
# [1] git ls-remote https://github.com/go-logr/logr 1205f429d540b8b81c2b75a38943afb738dac223
SRCREV_logr = "1205f429d540b8b81c2b75a38943afb738dac223"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/logr"

#       github.com/go-logr/stdr v1.2.2
# [1] git ls-remote https://github.com/go-logr/stdr 521af2addfa7c81c8a65d0e85ed34bb6bb6dc262
SRCREV_stdr = "521af2addfa7c81c8a65d0e85ed34bb6bb6dc262"
SRC_URI += "git://github.com/go-logr/stdr;name=stdr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/stdr"

#       github.com/miekg/pkcs11 v1.1.1
# [1] git ls-remote https://github.com/miekg/pkcs11 f3481918a208bd212aa995a41f92d786eb418a7d
SRCREV_pkcs11 = "f3481918a208bd212aa995a41f92d786eb418a7d"
SRC_URI += "git://github.com/miekg/pkcs11;name=pkcs11;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/miekg/pkcs11"

#       github.com/tinylib/msgp v1.2.0
# [1] git ls-remote https://github.com/tinylib/msgp 2ad0d1b467373fa671829659292febec78b79f00
SRCREV_msgp = "2ad0d1b467373fa671829659292febec78b79f00"
SRC_URI += "git://github.com/tinylib/msgp;name=msgp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/tinylib/msgp"

#       lukechampine.com/blake3 v1.3.0
# [1] git ls-remote https://github.com/lukechampine/blake3 4f5562c16b85a956bc8d650dc15344e1e1eb7c8c
SRCREV_blake3 = "4f5562c16b85a956bc8d650dc15344e1e1eb7c8c"
SRC_URI += "git://github.com/lukechampine/blake3;name=blake3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/lukechampine.com/blake3"

#       github.com/docker/docker v28.0.1+incompatible
# [1] git ls-remote https://github.com/moby/moby bbd0a17ccc67e48d4a69393287b7fcc4f0578683
SRCREV_docker = "bbd0a17ccc67e48d4a69393287b7fcc4f0578683"
SRC_URI += "git://github.com/moby/moby;name=docker;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker"

#       github.com/gogo/protobuf v1.3.2
# [1] git ls-remote https://github.com/gogo/protobuf b03c65ea87cdc3521ede29f62fe3ce239267c1bc
SRCREV_protobuf = "b03c65ea87cdc3521ede29f62fe3ce239267c1bc"
SRC_URI += "git://github.com/gogo/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gogo/protobuf"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp = "c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-cmp"

#       github.com/moby/sys/user v0.3.0
# [1] git ls-remote https://github.com/moby/sys 54475191138bd297c627eb1a59e1e54b953957f1
SRCREV_user = "54475191138bd297c627eb1a59e1e54b953957f1"
SRC_URI += "git://github.com/moby/sys;name=user;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/user"

#       github.com/philhofer/fwd v1.1.3-0.20240612014219-fbbf4953d986
# [1] git ls-remote https://github.com/philhofer/fwd fbbf4953d98612dac320a9051da34e3e761d1df7
SRCREV_fwd = "fbbf4953d98612dac320a9051da34e3e761d1df7"
SRC_URI += "git://github.com/philhofer/fwd;name=fwd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/philhofer/fwd"

#       go.opentelemetry.io/otel v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_otel = "bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel"

#       github.com/containerd/log v0.1.0
# [1] git ls-remote https://github.com/containerd/log 0fc1e28871fdf2786e2cc51bbe4133db6547a199
SRCREV_log = "0fc1e28871fdf2786e2cc51bbe4133db6547a199"
SRC_URI += "git://github.com/containerd/log;name=log;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/log"

#       github.com/moby/sys/mount v0.3.4
# [1] git ls-remote https://github.com/moby/sys 7af2bbe457efeb8b84a57d35692694a50e3ee9cb
SRCREV_mount = "7af2bbe457efeb8b84a57d35692694a50e3ee9cb"
SRC_URI += "git://github.com/moby/sys;name=mount;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mount"

#       github.com/djherbis/times v1.6.0
# [1] git ls-remote https://github.com/djherbis/times d1af0aa12128959e70b9e802c912f302c743c35b
SRCREV_times = "d1af0aa12128959e70b9e802c912f302c743c35b"
SRC_URI += "git://github.com/djherbis/times;name=times;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/djherbis/times"

#       github.com/godbus/dbus/v5 v5.1.0
# [1] git ls-remote https://github.com/godbus/dbus e523abc905595cf17fb0001a7d77eaaddfaa216d
SRCREV_v5 = "e523abc905595cf17fb0001a7d77eaaddfaa216d"
SRC_URI += "git://github.com/godbus/dbus;name=v5;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/godbus/dbus/v5"

#       github.com/mr-tron/base58 v1.2.0
# [1] git ls-remote https://github.com/mr-tron/base58 cd0e5141f51dfcadb8311fd8e495eb11126a8010
SRCREV_base58 = "cd0e5141f51dfcadb8311fd8e495eb11126a8010"
SRC_URI += "git://github.com/mr-tron/base58;name=base58;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mr-tron/base58"

#       github.com/containerd/fifo v1.1.0
# [1] git ls-remote https://github.com/containerd/fifo 151b205263c29d471e0d55c787d2ce9f5343fd46
SRCREV_fifo = "151b205263c29d471e0d55c787d2ce9f5343fd46"
SRC_URI += "git://github.com/containerd/fifo;name=fifo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/fifo"

#       github.com/docker/go-units v0.5.0
# [1] git ls-remote https://github.com/docker/go-units e682442797b36348f8e1f98defdbf32bac0b6c6f
SRCREV_go-units = "e682442797b36348f8e1f98defdbf32bac0b6c6f"
SRC_URI += "git://github.com/docker/go-units;name=go-units;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-units"

#       github.com/mattn/go-isatty v0.0.20
# [1] git ls-remote https://github.com/mattn/go-isatty a7c02353c47bc4ec6b30dc9628154ae4fe760c11
SRCREV_go-isatty = "a7c02353c47bc4ec6b30dc9628154ae4fe760c11"
SRC_URI += "git://github.com/mattn/go-isatty;name=go-isatty;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-isatty"

#       github.com/moby/sys/signal v0.7.1
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_signal = "cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=signal;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/signal"

#       github.com/moby/sys/userns v0.1.0
# [1] git ls-remote https://github.com/moby/sys 54475191138bd297c627eb1a59e1e54b953957f1
SRCREV_userns = "54475191138bd297c627eb1a59e1e54b953957f1"
SRC_URI += "git://github.com/moby/sys;name=userns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/userns"

#       github.com/yuchanns/srslog v1.1.0
# [1] git ls-remote https://github.com/yuchanns/srslog becd9b11119269a7928ae89fde90784335c1d016
SRCREV_srslog = "becd9b11119269a7928ae89fde90784335c1d016"
SRC_URI += "git://github.com/yuchanns/srslog;name=srslog;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/yuchanns/srslog"

#       github.com/golang/protobuf v1.5.4
# [1] git ls-remote https://github.com/golang/protobuf 75de7c059e36b64f01d0dd234ff2fff404ec3374
SRCREV_golang-protobuf = "75de7c059e36b64f01d0dd234ff2fff404ec3374"
SRC_URI += "git://github.com/golang/protobuf;name=golang-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/protobuf"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus = "d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/sirupsen/logrus"

#       github.com/smallstep/pkcs7 v0.1.1
# [1] git ls-remote https://github.com/smallstep/pkcs7 21b5bd412d3d388540388c0165151f7e3df92213
SRCREV_pkcs7 = "21b5bd412d3d388540388c0165151f7e3df92213"
SRC_URI += "git://github.com/smallstep/pkcs7;name=pkcs7;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/smallstep/pkcs7"

#       google.golang.org/protobuf v1.36.2
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go 12c6ebd98e62f69cf9969989362bc7609b873640
SRCREV_google.golang.org-protobuf = "12c6ebd98e62f69cf9969989362bc7609b873640"
SRC_URI += "git://github.com/protocolbuffers/protobuf-go;name=google.golang.org-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/protobuf"

#       github.com/bmizerany/assert v0.0.0-20160611221934-b7ed37b82869
# [1] git ls-remote https://github.com/bmizerany/assert b7ed37b82869576c289d7d97fb2bbd8b64a0cb28
SRCREV_assert = "b7ed37b82869576c289d7d97fb2bbd8b64a0cb28"
SRC_URI += "git://github.com/bmizerany/assert;name=assert;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/bmizerany/assert"

#       github.com/containerd/ttrpc v1.2.7
# [1] git ls-remote https://github.com/containerd/ttrpc 3b8c8b75577584e412043afb7b561193a4a47d2e
SRCREV_ttrpc = "3b8c8b75577584e412043afb7b561193a4a47d2e"
SRC_URI += "git://github.com/containerd/ttrpc;name=ttrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/ttrpc"

#       github.com/moby/sys/symlink v0.3.0
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_symlink = "cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=symlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/symlink"

#       github.com/petermattis/goid v0.0.0-20240813172612-4fcff4a6cae7
# [1] git ls-remote https://github.com/petermattis/goid 4fcff4a6cae7cd8fdaeeaa8bb87443eda9dec107
SRCREV_goid = "4fcff4a6cae7cd8fdaeeaa8bb87443eda9dec107"
SRC_URI += "git://github.com/petermattis/goid;name=goid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/petermattis/goid"

#       github.com/vbatts/tar-split v0.11.6
# [1] git ls-remote https://github.com/vbatts/tar-split 1f44cc4dc32346347cefbfe34c40166075385157
SRCREV_tar-split = "1f44cc4dc32346347cefbfe34c40166075385157"
SRC_URI += "git://github.com/vbatts/tar-split;name=tar-split;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vbatts/tar-split"

#       github.com/Microsoft/hcsshim v0.12.9
# [1] git ls-remote https://github.com/microsoft/hcsshim 7392335b540ccd5edc26ca1e0dce0da393c17eff
SRCREV_hcsshim = "7392335b540ccd5edc26ca1e0dce0da393c17eff"
SRC_URI += "git://github.com/microsoft/hcsshim;name=hcsshim;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/hcsshim"

#       github.com/containerd/go-cni v1.1.12
# [1] git ls-remote https://github.com/containerd/go-cni f4736bb1d1b10293d9c484cbf79254a5efa1e020
SRCREV_go-cni = "f4736bb1d1b10293d9c484cbf79254a5efa1e020"
SRC_URI += "git://github.com/containerd/go-cni;name=go-cni;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/go-cni"

#       github.com/fsnotify/fsnotify v1.8.0
# [1] git ls-remote https://github.com/fsnotify/fsnotify a9bc2e01792f868516acf80817f7d7d7b3315409
SRCREV_fsnotify = "a9bc2e01792f868516acf80817f7d7d7b3315409"
SRC_URI += "git://github.com/fsnotify/fsnotify;name=fsnotify;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fsnotify/fsnotify"

#       github.com/vishvananda/netns v0.0.5
# [1] git ls-remote https://github.com/vishvananda/netns 4c46424d73b556b3ea4bc5a7cec9e7376dcb2a73
SRCREV_netns = "4c46424d73b556b3ea4bc5a7cec9e7376dcb2a73"
SRC_URI += "git://github.com/vishvananda/netns;name=netns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vishvananda/netns"

#       github.com/Azure/go-ansiterm v0.0.0-20250102033503-faa5f7b0171c
# [1] git ls-remote https://github.com/Azure/go-ansiterm faa5f7b0171c46bb398a91b4a0c906324d3664cf
SRCREV_go-ansiterm = "faa5f7b0171c46bb398a91b4a0c906324d3664cf"
SRC_URI += "git://github.com/Azure/go-ansiterm;name=go-ansiterm;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Azure/go-ansiterm"

#       github.com/containerd/plugin v1.0.0
# [1] git ls-remote https://github.com/containerd/plugin 19cedbf730bb9ae1c106c4d4df8492bb3d3fb8fd
SRCREV_plugin = "19cedbf730bb9ae1c106c4d4df8492bb3d3fb8fd"
SRC_URI += "git://github.com/containerd/plugin;name=plugin;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/plugin"

#       github.com/felixge/httpsnoop v1.0.4
# [1] git ls-remote https://github.com/felixge/httpsnoop c5817c27ec125409c069052fdd171023c353501c
SRCREV_httpsnoop = "c5817c27ec125409c069052fdd171023c353501c"
SRC_URI += "git://github.com/felixge/httpsnoop;name=httpsnoop;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/felixge/httpsnoop"

#       github.com/golang/groupcache v0.0.0-20210331224755-41bb18bfe9da
# [1] git ls-remote https://github.com/golang/groupcache 41bb18bfe9da5321badc438f91158cd790a33aa3
SRCREV_groupcache = "41bb18bfe9da5321badc438f91158cd790a33aa3"
SRC_URI += "git://github.com/golang/groupcache;name=groupcache;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/groupcache"

#       github.com/minio/sha256-simd v1.0.1
# [1] git ls-remote https://github.com/minio/sha256-simd 6096f891a77bfe490cbea7a424c821b5fdb92849
SRCREV_sha256-simd = "6096f891a77bfe490cbea7a424c821b5fdb92849"
SRC_URI += "git://github.com/minio/sha256-simd;name=sha256-simd;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/minio/sha256-simd"

#       github.com/spaolacci/murmur3 v1.1.0
# [1] git ls-remote https://github.com/spaolacci/murmur3 f09979ecbc725b9e6d41a297405f65e7e8804acc
SRCREV_murmur3 = "f09979ecbc725b9e6d41a297405f65e7e8804acc"
SRC_URI += "git://github.com/spaolacci/murmur3;name=murmur3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spaolacci/murmur3"

#       github.com/Microsoft/go-winio v0.6.2
# [1] git ls-remote https://github.com/microsoft/go-winio 3c9576c9346a1892dee136329e7e15309e82fb4f
SRCREV_go-winio = "3c9576c9346a1892dee136329e7e15309e82fb4f"
SRC_URI += "git://github.com/microsoft/go-winio;name=go-winio;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Microsoft/go-winio"

#       github.com/containerd/console v1.0.4
# [1] git ls-remote https://github.com/containerd/console 8f6c4e4faef5a326d2cd907097d04c0239ee5e2f
SRCREV_console = "8f6c4e4faef5a326d2cd907097d04c0239ee5e2f"
SRC_URI += "git://github.com/containerd/console;name=console;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/console"

#       github.com/containerd/errdefs v1.0.0
# [1] git ls-remote https://github.com/containerd/errdefs 4817405e4a3caeb7aee9dac68ed55339c59cb635
SRCREV_errdefs = "4817405e4a3caeb7aee9dac68ed55339c59cb635"
SRC_URI += "git://github.com/containerd/errdefs;name=errdefs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/errdefs"

#       github.com/coreos/go-iptables v0.8.0
# [1] git ls-remote https://github.com/coreos/go-iptables 26e42518b22e6878bd6e479a574122c319fa923e
SRCREV_go-iptables = "26e42518b22e6878bd6e479a574122c319fa923e"
SRC_URI += "git://github.com/coreos/go-iptables;name=go-iptables;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-iptables"

#       github.com/klauspost/compress v1.18.0
# [1] git ls-remote https://github.com/klauspost/compress 8e79dc4b98d4c5a09c62a2546b79c14edf7c3e38
SRCREV_compress = "8e79dc4b98d4c5a09c62a2546b79c14edf7c3e38"
SRC_URI += "git://github.com/klauspost/compress;name=compress;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/klauspost/compress"

#       github.com/containerd/go-runc v1.1.0
# [1] git ls-remote https://github.com/containerd/go-runc df3c22d088ca919d1943efa8ae0cfc0514da0542
SRCREV_go-runc = "df3c22d088ca919d1943efa8ae0cfc0514da0542"
SRC_URI += "git://github.com/containerd/go-runc;name=go-runc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/go-runc"

#       github.com/go-jose/go-jose/v4 v4.0.5
# [1] git ls-remote https://github.com/go-jose/go-jose 99b346cec4e86d102284642c5dcbe9bb0cacfc22
SRCREV_v4 = "99b346cec4e86d102284642c5dcbe9bb0cacfc22"
SRC_URI += "git://github.com/go-jose/go-jose;name=v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-jose/go-jose/v4"

#       github.com/klauspost/cpuid/v2 v2.2.8
# [1] git ls-remote https://github.com/klauspost/cpuid 95e7626938069ea64e5c91ca2fe36945786fead9
SRCREV_cpuid-v2 = "95e7626938069ea64e5c91ca2fe36945786fead9"
SRC_URI += "git://github.com/klauspost/cpuid;name=cpuid-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/klauspost/cpuid/v2"

#       github.com/mattn/go-colorable v0.1.13
# [1] git ls-remote https://github.com/mattn/go-colorable 11a925cff3d38c293ddc8c05a16b504e3e2c63be
SRCREV_go-colorable = "11a925cff3d38c293ddc8c05a16b504e3e2c63be"
SRC_URI += "git://github.com/mattn/go-colorable;name=go-colorable;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-colorable"

#       github.com/moby/sys/mountinfo v0.7.2
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_mountinfo = "cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=mountinfo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mountinfo"

#       github.com/muesli/cancelreader v0.2.2
# [1] git ls-remote https://github.com/muesli/cancelreader d11f1e77abf7f8d69d81553ccaaf0b81163541a6
SRCREV_cancelreader = "d11f1e77abf7f8d69d81553ccaaf0b81163541a6"
SRC_URI += "git://github.com/muesli/cancelreader;name=cancelreader;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/muesli/cancelreader"

#       github.com/vishvananda/netlink v1.3.0
# [1] git ls-remote https://github.com/vishvananda/netlink 6f5713947556a0288c5cb71f036f9e91924ebcaa
SRCREV_netlink = "6f5713947556a0288c5cb71f036f9e91924ebcaa"
SRC_URI += "git://github.com/vishvananda/netlink;name=netlink;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vishvananda/netlink"

#       github.com/containers/ocicrypt v1.2.1
# [1] git ls-remote https://github.com/containers/ocicrypt 1db71af9f28553231f0b59880d3fe5b162fa8c61
SRCREV_ocicrypt = "1db71af9f28553231f0b59880d3fe5b162fa8c61"
SRC_URI += "git://github.com/containers/ocicrypt;name=ocicrypt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containers/ocicrypt"

#       github.com/mattn/go-shellwords v1.0.12
# [1] git ls-remote https://github.com/mattn/go-shellwords 973b9d5391598d4ee601db46fa32f6e186a356ac
SRCREV_go-shellwords = "973b9d5391598d4ee601db46fa32f6e186a356ac"
SRC_URI += "git://github.com/mattn/go-shellwords;name=go-shellwords;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-shellwords"

#       github.com/moby/sys/sequential v0.6.0
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_sequential = "cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=sequential;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/sequential"

#       github.com/sasha-s/go-deadlock v0.3.5
# [1] git ls-remote https://github.com/sasha-s/go-deadlock 464d34347a399b840a4f963cc96dfc993ccf8c62
SRCREV_go-deadlock = "464d34347a399b840a4f963cc96dfc993ccf8c62"
SRC_URI += "git://github.com/sasha-s/go-deadlock;name=go-deadlock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/sasha-s/go-deadlock"

#       go.opentelemetry.io/otel/trace v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_trace = "bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=trace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/trace"

#       github.com/containerd/platforms v1.0.0-rc.1
# [1] git ls-remote https://github.com/containerd/platforms e3566b8ff1994b8dc88bae5768d32830e0cd0cfd
SRCREV_platforms = "e3566b8ff1994b8dc88bae5768d32830e0cd0cfd"
SRC_URI += "git://github.com/containerd/platforms;name=platforms;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/platforms"

#       github.com/pelletier/go-toml/v2 v2.2.3
# [1] git ls-remote https://github.com/pelletier/go-toml b730b2be5d3ab7283067ddf61188f41cdf42ce06
SRCREV_go-toml-v2 = "b730b2be5d3ab7283067ddf61188f41cdf42ce06"
SRC_URI += "git://github.com/pelletier/go-toml;name=go-toml-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pelletier/go-toml/v2"

#       github.com/mitchellh/go-homedir v1.1.0
# [1] git ls-remote https://github.com/mitchellh/go-homedir af06845cf3004701891bf4fdb884bfe4920b3727
SRCREV_go-homedir = "af06845cf3004701891bf4fdb884bfe4920b3727"
SRC_URI += "git://github.com/mitchellh/go-homedir;name=go-homedir;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mitchellh/go-homedir"

#       github.com/xeipuuv/gojsonschema v1.2.0
# [1] git ls-remote https://github.com/xeipuuv/gojsonschema 82fcdeb203eb6ab2a67d0a623d9c19e5e5a64927
SRCREV_gojsonschema = "82fcdeb203eb6ab2a67d0a623d9c19e5e5a64927"
SRC_URI += "git://github.com/xeipuuv/gojsonschema;name=gojsonschema;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonschema"

#       go.opentelemetry.io/otel/metric v1.31.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0
SRCREV_metric = "bc2fe88756962b76eb43ea2fd92ed3f5b6491cc0"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/metric"

#       github.com/Masterminds/semver/v3 v3.3.1
# [1] git ls-remote https://github.com/Masterminds/semver 1558ca3488226e3490894a145e831ad58a5ff958
SRCREV_v3 = "1558ca3488226e3490894a145e831ad58a5ff958"
SRC_URI += "git://github.com/Masterminds/semver;name=v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Masterminds/semver/v3"

#       github.com/containerd/cgroups/v3 v3.0.5
# [1] git ls-remote https://github.com/containerd/cgroups bce3c7e5fbf05852294998684293918fcb3f59dd
SRCREV_cgroups-v3 = "bce3c7e5fbf05852294998684293918fcb3f59dd"
SRC_URI += "git://github.com/containerd/cgroups;name=cgroups-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/cgroups/v3"

#       github.com/containerd/continuity v0.4.5
# [1] git ls-remote https://github.com/containerd/continuity 44e2adf7e9cd87330f3ad656e7a006ef91ed8c1e
SRCREV_continuity = "44e2adf7e9cd87330f3ad656e7a006ef91ed8c1e"
SRC_URI += "git://github.com/containerd/continuity;name=continuity;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/continuity"

#       github.com/containerd/typeurl/v2 v2.2.3
# [1] git ls-remote https://github.com/containerd/typeurl 5b047adad57d172afa9654c019fe65bf0540cc4d
SRCREV_typeurl-v2 = "5b047adad57d172afa9654c019fe65bf0540cc4d"
SRC_URI += "git://github.com/containerd/typeurl;name=typeurl-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/typeurl/v2"

#       github.com/coreos/go-systemd/v22 v22.5.0
# [1] git ls-remote https://github.com/coreos/go-systemd d5623bf85e8e73ae6352f78ee6b55a287619dd4e
SRCREV_v22 = "d5623bf85e8e73ae6352f78ee6b55a287619dd4e"
SRC_URI += "git://github.com/coreos/go-systemd;name=v22;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/coreos/go-systemd/v22"

#       github.com/docker/go-connections v0.5.0
# [1] git ls-remote https://github.com/docker/go-connections fa09c952e3eadbffaf8afc5b8a1667158ba38ace
SRCREV_go-connections = "fa09c952e3eadbffaf8afc5b8a1667158ba38ace"
SRC_URI += "git://github.com/docker/go-connections;name=go-connections;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/go-connections"

#       github.com/xeipuuv/gojsonpointer v0.0.0-20190905194746-02993c407bfb
# [1] git ls-remote https://github.com/xeipuuv/gojsonpointer 02993c407bfbf5f6dae44c4f4b1cf6a39b5fc5bb
SRCREV_gojsonpointer = "02993c407bfbf5f6dae44c4f4b1cf6a39b5fc5bb"
SRC_URI += "git://github.com/xeipuuv/gojsonpointer;name=gojsonpointer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonpointer"

#       github.com/containerd/imgcrypt/v2 v2.0.0
# [1] git ls-remote https://github.com/containerd/imgcrypt 1e301ef2620964bedfa68ee4b841ff80f4887736
SRCREV_imgcrypt-v2 = "1e301ef2620964bedfa68ee4b841ff80f4887736"
SRC_URI += "git://github.com/containerd/imgcrypt;name=imgcrypt-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/imgcrypt/v2"

#       github.com/distribution/reference v0.6.0
# [1] git ls-remote https://github.com/distribution/reference ff14fafe2236e51c2894ac07d4bdfc778e96d682
SRCREV_reference = "ff14fafe2236e51c2894ac07d4bdfc778e96d682"
SRC_URI += "git://github.com/distribution/reference;name=reference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/distribution/reference"

#       github.com/fahedouch/go-logrotate v0.2.1
# [1] git ls-remote https://github.com/fahedouch/go-logrotate e7e671d3a673890ee38392540079196cef61e3d6
SRCREV_go-logrotate = "e7e671d3a673890ee38392540079196cef61e3d6"
SRC_URI += "git://github.com/fahedouch/go-logrotate;name=go-logrotate;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fahedouch/go-logrotate"

#       github.com/containerd/errdefs/pkg v0.3.0
# [1] git ls-remote https://github.com/containerd/errdefs 4817405e4a3caeb7aee9dac68ed55339c59cb635
SRCREV_pkg = "4817405e4a3caeb7aee9dac68ed55339c59cb635"
SRC_URI += "git://github.com/containerd/errdefs;name=pkg;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/errdefs/pkg"

#       github.com/moby/docker-image-spec v1.3.1
# [1] git ls-remote https://github.com/moby/docker-image-spec f1d00ebd2d6d6805170d5543dbca4b850f35f9af
SRCREV_docker-image-spec = "f1d00ebd2d6d6805170d5543dbca4b850f35f9af"
SRC_URI += "git://github.com/moby/docker-image-spec;name=docker-image-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/docker-image-spec"

#       github.com/multiformats/go-base32 v0.1.0
# [1] git ls-remote https://github.com/multiformats/go-base32 a16b66327f327428b32b919939b8c93482507e1f
SRCREV_go-base32 = "a16b66327f327428b32b919939b8c93482507e1f"
SRC_URI += "git://github.com/multiformats/go-base32;name=go-base32;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-base32"

#       github.com/multiformats/go-base36 v0.2.0
# [1] git ls-remote https://github.com/multiformats/go-base36 da52c98bb97cfaa321be04030bc97dcee7de63ff
SRCREV_go-base36 = "da52c98bb97cfaa321be04030bc97dcee7de63ff"
SRC_URI += "git://github.com/multiformats/go-base36;name=go-base36;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-base36"

#       github.com/multiformats/go-varint v0.0.7
# [1] git ls-remote https://github.com/multiformats/go-varint 8c8129accb08fc978bb276c81d568c41eafdd48f
SRCREV_go-varint = "8c8129accb08fc978bb276c81d568c41eafdd48f"
SRC_URI += "git://github.com/multiformats/go-varint;name=go-varint;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-varint"

#       github.com/opencontainers/selinux v1.11.1
# [1] git ls-remote https://github.com/opencontainers/selinux 44b3337c67171896cf6f299ece82ec31abfe8c0d
SRCREV_selinux = "44b3337c67171896cf6f299ece82ec31abfe8c0d"
SRC_URI += "git://github.com/opencontainers/selinux;name=selinux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/selinux"

#       github.com/containernetworking/cni v1.2.3
# [1] git ls-remote https://github.com/containernetworking/cni 309b6bbc17b2cd9eb9c26a46977ba1f1f5f032a4
SRCREV_cni = "309b6bbc17b2cd9eb9c26a46977ba1f1f5f032a4"
SRC_URI += "git://github.com/containernetworking/cni;name=cni;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/cni"

#       github.com/xeipuuv/gojsonreference v0.0.0-20180127040603-bd5ef7bd5415
# [1] git ls-remote https://github.com/xeipuuv/gojsonreference bd5ef7bd5415a7ac448318e64f11a24cd21e594b
SRCREV_gojsonreference = "bd5ef7bd5415a7ac448318e64f11a24cd21e594b"
SRC_URI += "git://github.com/xeipuuv/gojsonreference;name=gojsonreference;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xeipuuv/gojsonreference"

#       github.com/containerd/containerd/v2 v2.0.3
# [1] git ls-remote https://github.com/containerd/containerd 06b99ca80cdbfbc6cc8bd567021738c9af2b36ce
SRCREV_containerd-v2 = "06b99ca80cdbfbc6cc8bd567021738c9af2b36ce"
SRC_URI += "git://github.com/containerd/containerd;name=containerd-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/containerd/v2"

#       github.com/go-viper/mapstructure/v2 v2.2.1
# [1] git ls-remote https://github.com/go-viper/mapstructure c29fc28e7927f11614d6f7e0fbf108a5c75750bb
SRCREV_mapstructure-v2 = "c29fc28e7927f11614d6f7e0fbf108a5c75750bb"
SRC_URI += "git://github.com/go-viper/mapstructure;name=mapstructure-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-viper/mapstructure/v2"

#       github.com/opencontainers/go-digest v1.0.0
# [1] git ls-remote https://github.com/opencontainers/go-digest ea51bea511f75cfa3ef6098cc253c5c3609b037a
SRCREV_go-digest = "ea51bea511f75cfa3ef6098cc253c5c3609b037a"
SRC_URI += "git://github.com/opencontainers/go-digest;name=go-digest;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/go-digest"

#       github.com/containerd/containerd/api v1.8.0
# [1] git ls-remote https://github.com/containerd/containerd cf36acf6b6dde383952f523e9b0b721b20dec88a
SRCREV_api = "cf36acf6b6dde383952f523e9b0b721b20dec88a"
SRC_URI += "git://github.com/containerd/containerd;name=api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/containerd/api"

#       github.com/opencontainers/image-spec v1.1.1
# [1] git ls-remote https://github.com/opencontainers/image-spec 147f9c13cedb47a0c4d9a11a222961073d585877
SRCREV_image-spec = "147f9c13cedb47a0c4d9a11a222961073d585877"
SRC_URI += "git://github.com/opencontainers/image-spec;name=image-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/image-spec"

#       github.com/AdaLogics/go-fuzz-headers v0.0.0-20240806141605-e8a1dd7889d6
# [1] git ls-remote https://github.com/AdaLogics/go-fuzz-headers e8a1dd7889d65b8a6f02175e0d79d7c0557db7f9
SRCREV_go-fuzz-headers = "e8a1dd7889d65b8a6f02175e0d79d7c0557db7f9"
SRC_URI += "git://github.com/AdaLogics/go-fuzz-headers;name=go-fuzz-headers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AdaLogics/go-fuzz-headers"

#       github.com/inconshreveable/mousetrap v1.1.0
# [1] git ls-remote https://github.com/inconshreveable/mousetrap 4e8053ee7ef85a6bd26368364a6d27f1641c1d21
SRCREV_mousetrap = "4e8053ee7ef85a6bd26368364a6d27f1641c1d21"
SRC_URI += "git://github.com/inconshreveable/mousetrap;name=mousetrap;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/inconshreveable/mousetrap"

#       github.com/multiformats/go-multiaddr v0.13.0
# [1] git ls-remote https://github.com/multiformats/go-multiaddr 14890877525b42c5d6450436929b059974f03ea4
SRCREV_go-multiaddr = "14890877525b42c5d6450436929b059974f03ea4"
SRC_URI += "git://github.com/multiformats/go-multiaddr;name=go-multiaddr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multiaddr"

#       github.com/multiformats/go-multibase v0.2.0
# [1] git ls-remote https://github.com/multiformats/go-multibase 58a41f7df1d82d16599e259325b3337d69f70e3b
SRCREV_go-multibase = "58a41f7df1d82d16599e259325b3337d69f70e3b"
SRC_URI += "git://github.com/multiformats/go-multibase;name=go-multibase;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multibase"

#       github.com/multiformats/go-multihash v0.2.3
# [1] git ls-remote https://github.com/multiformats/go-multihash ff9da31500dddfc675e996601a05cdfc3ce7c764
SRCREV_go-multihash = "ff9da31500dddfc675e996601a05cdfc3ce7c764"
SRC_URI += "git://github.com/multiformats/go-multihash;name=go-multihash;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/multiformats/go-multihash"

#       github.com/stefanberger/go-pkcs11uri v0.0.0-20230803200340-78284954bff6
# [1] git ls-remote https://github.com/stefanberger/go-pkcs11uri 78284954bff6dcce7888166bb79bbba93bea0879
SRCREV_go-pkcs11uri = "78284954bff6dcce7888166bb79bbba93bea0879"
SRC_URI += "git://github.com/stefanberger/go-pkcs11uri;name=go-pkcs11uri;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stefanberger/go-pkcs11uri"

#       github.com/compose-spec/compose-go/v2 v2.4.8
# [1] git ls-remote https://github.com/compose-spec/compose-go 84b7d5ab66388d3b5e24bae7861213a451a0f063
SRCREV_v2 = "84b7d5ab66388d3b5e24bae7861213a451a0f063"
SRC_URI += "git://github.com/compose-spec/compose-go;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/compose-spec/compose-go/v2"

#       github.com/cyphar/filepath-securejoin v0.4.1
# [1] git ls-remote https://github.com/cyphar/filepath-securejoin 7abd870410ccf784788af4f55c6413c9ef47222d
SRCREV_filepath-securejoin = "7abd870410ccf784788af4f55c6413c9ef47222d"
SRC_URI += "git://github.com/cyphar/filepath-securejoin;name=filepath-securejoin;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cyphar/filepath-securejoin"

#       github.com/containernetworking/plugins v1.6.2
# [1] git ls-remote https://github.com/containernetworking/plugins 7f756b411efc3d3730c707e2cc1f2baf1a66e28c
SRCREV_plugins = "7f756b411efc3d3730c707e2cc1f2baf1a66e28c"
SRC_URI += "git://github.com/containernetworking/plugins;name=plugins;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/plugins"

#       github.com/fluent/fluent-logger-golang v1.9.0
# [1] git ls-remote https://github.com/fluent/fluent-logger-golang 5538e904aeb515c10a624da620581bdf420d4b8a
SRCREV_fluent-logger-golang = "5538e904aeb515c10a624da620581bdf420d4b8a"
SRC_URI += "git://github.com/fluent/fluent-logger-golang;name=fluent-logger-golang;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/fluent/fluent-logger-golang"

#       github.com/opencontainers/runtime-spec v1.2.1
# [1] git ls-remote https://github.com/opencontainers/runtime-spec 524fc0e1b8ab0180e2fc9abd31837a0f4ed1fd6b
SRCREV_runtime-spec = "524fc0e1b8ab0180e2fc9abd31837a0f4ed1fd6b"
SRC_URI += "git://github.com/opencontainers/runtime-spec;name=runtime-spec;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/opencontainers/runtime-spec"

#       github.com/AdamKorcz/go-118-fuzz-build v0.0.0-20231105174938-2b5cbb29f3e2
# [1] git ls-remote https://github.com/AdamKorcz/go-118-fuzz-build 2b5cbb29f3e2e08ef2032ac4dc88a40a3a1e9e5f
SRCREV_go-118-fuzz-build = "2b5cbb29f3e2e08ef2032ac4dc88a40a3a1e9e5f"
SRC_URI += "git://github.com/AdamKorcz/go-118-fuzz-build;name=go-118-fuzz-build;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AdamKorcz/go-118-fuzz-build"

#       github.com/containerd/nydus-snapshotter v0.15.0
# [1] git ls-remote https://github.com/containerd/nydus-snapshotter aec799e1b5d61050f7df4a1fd79177f89635cffe
SRCREV_nydus-snapshotter = "aec799e1b5d61050f7df4a1fd79177f89635cffe"
SRC_URI += "git://github.com/containerd/nydus-snapshotter;name=nydus-snapshotter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/nydus-snapshotter"

#       github.com/containerd/stargz-snapshotter v0.16.3
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter c0389e084ae5731215c1251b04f3a8b49efb6d5a
SRCREV_stargz-snapshotter = "c0389e084ae5731215c1251b04f3a8b49efb6d5a"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=stargz-snapshotter;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter"

#       google.golang.org/genproto/googleapis/rpc v0.0.0-20250106144421-5f5ef82da422
# [1] git ls-remote https://github.com/googleapis/go-genproto 5f5ef82da42272dfd659a9114072cd3a924f9143
SRCREV_rpc = "5f5ef82da42272dfd659a9114072cd3a924f9143"
SRC_URI += "git://github.com/googleapis/go-genproto;name=rpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/rpc"

#       github.com/rootless-containers/bypass4netns v0.4.2
# [1] git ls-remote https://github.com/rootless-containers/bypass4netns aa04bd3dcc48c6dae6d7327ba219bda8fe2a4634
SRCREV_bypass4netns = "aa04bd3dcc48c6dae6d7327ba219bda8fe2a4634"
SRC_URI += "git://github.com/rootless-containers/bypass4netns;name=bypass4netns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rootless-containers/bypass4netns"

#       github.com/docker/docker-credential-helpers v0.8.2
# [1] git ls-remote https://github.com/docker/docker-credential-helpers 6b9df3ebb5da5aa22f722b25506bba1414519c6a
SRCREV_docker-credential-helpers = "6b9df3ebb5da5aa22f722b25506bba1414519c6a"
SRC_URI += "git://github.com/docker/docker-credential-helpers;name=docker-credential-helpers;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/docker/docker-credential-helpers"

#       github.com/containerd/stargz-snapshotter/ipfs v0.16.3
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter c0389e084ae5731215c1251b04f3a8b49efb6d5a
SRCREV_ipfs = "c0389e084ae5731215c1251b04f3a8b49efb6d5a"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=ipfs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter/ipfs"

#       github.com/rootless-containers/rootlesskit/v2 v2.3.4
# [1] git ls-remote https://github.com/rootless-containers/rootlesskit 59a459df858d39ad5f4eafa305545907bf0c48ab
SRCREV_rootlesskit-v2 = "59a459df858d39ad5f4eafa305545907bf0c48ab"
SRC_URI += "git://github.com/rootless-containers/rootlesskit;name=rootlesskit-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/rootless-containers/rootlesskit/v2"

#       github.com/containerd/stargz-snapshotter/estargz v0.16.3
# [1] git ls-remote https://github.com/containerd/stargz-snapshotter c0389e084ae5731215c1251b04f3a8b49efb6d5a
SRCREV_estargz = "c0389e084ae5731215c1251b04f3a8b49efb6d5a"
SRC_URI += "git://github.com/containerd/stargz-snapshotter;name=estargz;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/stargz-snapshotter/estargz"

#       github.com/containerd/accelerated-container-image v1.3.0
# [1] git ls-remote https://github.com/containerd/accelerated-container-image c5dd4fa383f2a932ab7d0b974f05a4e90eb46604
SRCREV_accelerated-container-image = "c5dd4fa383f2a932ab7d0b974f05a4e90eb46604"
SRC_URI += "git://github.com/containerd/accelerated-container-image;name=accelerated-container-image;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containerd/accelerated-container-image"

#       go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp v0.56.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 9cf5701e6b6611b2c406639039a1bccd883db080
SRCREV_otelhttp = "9cf5701e6b6611b2c406639039a1bccd883db080"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp"

