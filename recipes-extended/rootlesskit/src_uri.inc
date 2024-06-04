#       gotest.tools/v3 v3.5.1
# [1] git ls-remote https://github.com/gotestyourself/gotest.tools 81cea1abc596b025bf2573c7fdf97740512e4c6c
SRCREV_gotest.tools-v3="81cea1abc596b025bf2573c7fdf97740512e4c6c"
SRC_URI += "git://github.com/gotestyourself/gotest.tools;name=gotest.tools-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gotest.tools/v3"

#       golang.org/x/sys v0.20.0
# [1] git ls-remote https://go.googlesource.com/sys 7d69d983c4522784860c781a0d7b80408fdc0cd1
SRCREV_sys="7d69d983c4522784860c781a0d7b80408fdc0cd1"
SRC_URI += "git://go.googlesource.com/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       golang.org/x/net v0.24.0
# [1] git ls-remote https://go.googlesource.com/net 7bbe32058aba7159e4d273710e6f4f1c16c627fb
SRCREV_net="7bbe32058aba7159e4d273710e6f4f1c16c627fb"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       github.com/u-root/uio v0.0.0-20230305220412-3e8cd9d6bf63
# [1] git ls-remote https://github.com/u-root/uio 3e8cd9d6bf6310d57e3e1e95ffda926a4be34cce
#SRCREV_uio="3e8cd9d6bf6310d57e3e1e95ffda926a4be34cce"
SRCREV_uio="d2acac8f37018c514adec45c51f58eace3795df4"
SRC_URI += "git://github.com/u-root/uio;name=uio;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/u-root/uio"

#       github.com/gofrs/flock v0.8.1
# [1] git ls-remote https://github.com/gofrs/flock 6f010d1acea74a32f2f2066bfe324c08bbee30e3
SRCREV_flock="6f010d1acea74a32f2f2066bfe324c08bbee30e3"
SRC_URI += "git://github.com/gofrs/flock;name=flock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gofrs/flock"

#       github.com/google/uuid v1.6.0
# [1] git ls-remote https://github.com/google/uuid 0f11ee6918f41a04c201eceeadf612a377bc7fbc
SRCREV_uuid="0f11ee6918f41a04c201eceeadf612a377bc7fbc"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/uuid"

#       github.com/gorilla/mux v1.8.1
# [1] git ls-remote https://github.com/gorilla/mux b4617d0b9670ad14039b2739167fd35a60f557c5
SRCREV_mux="b4617d0b9670ad14039b2739167fd35a60f557c5"
SRC_URI += "git://github.com/gorilla/mux;name=mux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/mux"

#       github.com/moby/vpnkit v0.5.0
# [1] git ls-remote https://github.com/moby/vpnkit 7f0eff0dd99b576c5474de53b4454a157c642834
SRCREV_vpnkit="7f0eff0dd99b576c5474de53b4454a157c642834"
SRC_URI += "git://github.com/moby/vpnkit;name=vpnkit;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/vpnkit"

#       github.com/songgao/water v0.0.0-20200317203138-2b4b6d7c09d8
# [1] git ls-remote https://github.com/songgao/water 2b4b6d7c09d80835e5f13f6b040d69f00a158b24
SRCREV_water="2b4b6d7c09d80835e5f13f6b040d69f00a158b24"
SRC_URI += "git://github.com/songgao/water;name=water;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/songgao/water"

#       github.com/urfave/cli/v2 v2.27.2
# [1] git ls-remote https://github.com/urfave/cli a1a099bd1c28a2a6beac29123308e87b9606fcc0
SRCREV_v2="a1a099bd1c28a2a6beac29123308e87b9606fcc0"
SRC_URI += "git://github.com/urfave/cli;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/urfave/cli/v2"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp="c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-cmp"

#       github.com/pierrec/lz4/v4 v4.1.17
# [1] git ls-remote https://github.com/pierrec/lz4 d2b3f5d3e4659cc4fd720d1649c39b5627187261
SRCREV_v4="d2b3f5d3e4659cc4fd720d1649c39b5627187261"
SRC_URI += "git://github.com/pierrec/lz4;name=v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pierrec/lz4/v4"

#       github.com/xrash/smetrics v0.0.0-20240312152122-5f08fbb34913
# [1] git ls-remote https://github.com/xrash/smetrics 5f08fbb34913bc8ab95bb4f2a89a0637ca922666
SRCREV_smetrics="5f08fbb34913bc8ab95bb4f2a89a0637ca922666"
SRC_URI += "git://github.com/xrash/smetrics;name=smetrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xrash/smetrics"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus="d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/sirupsen/logrus"

#       github.com/josharian/native v1.1.0
# [1] git ls-remote https://github.com/josharian/native c1e37c09b531b14ae12a501eb6fd529b31cecdaa
SRCREV_native="c1e37c09b531b14ae12a501eb6fd529b31cecdaa"
SRC_URI += "git://github.com/josharian/native;name=native;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/josharian/native"

#       github.com/insomniacslk/dhcp v0.0.0-20230516061539-49801966e6cb
# [1] git ls-remote https://github.com/insomniacslk/dhcp 49801966e6cb2cfc58a2bd98f69a9c182c1d4c18
SRCREV_dhcp="49801966e6cb2cfc58a2bd98f69a9c182c1d4c18"
SRC_URI += "git://github.com/insomniacslk/dhcp;name=dhcp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/insomniacslk/dhcp"

#       github.com/moby/sys/mountinfo v0.7.1
# [1] git ls-remote https://github.com/moby/sys 4950d7687cf6c9b138dc0e18c2c7351e1f6ed497
SRCREV_mountinfo="4950d7687cf6c9b138dc0e18c2c7351e1f6ed497"
SRC_URI += "git://github.com/moby/sys;name=mountinfo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mountinfo"

#       github.com/Masterminds/semver/v3 v3.2.1
# [1] git ls-remote https://github.com/Masterminds/semver e06051f8fcc4c8b4a4990c337b9862a2448722e5
SRCREV_v3="e06051f8fcc4c8b4a4990c337b9862a2448722e5"
SRC_URI += "git://github.com/Masterminds/semver;name=v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Masterminds/semver/v3"

#       github.com/cpuguy83/go-md2man/v2 v2.0.4
# [1] git ls-remote https://github.com/cpuguy83/go-md2man d6816bfbea7506064a28119f805fb79f9bc5aeec
SRCREV_go-md2man-v2="d6816bfbea7506064a28119f805fb79f9bc5aeec"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=go-md2man-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2="4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/russross/blackfriday/v2"

#       github.com/containernetworking/plugins v1.5.0
# [1] git ls-remote https://github.com/containernetworking/plugins 0259301ae2eab8cb4f5755d790c29cb869765f8a
SRCREV_plugins="0259301ae2eab8cb4f5755d790c29cb869765f8a"
SRC_URI += "git://github.com/containernetworking/plugins;name=plugins;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/plugins"

