#       gotest.tools/v3 v3.5.2
# [1] git ls-remote https://github.com/gotestyourself/gotest.tools 0b81523ff268a1f1b0baf4a5da67e42fbb86880b
SRCREV_gotest.tools-v3 = "0b81523ff268a1f1b0baf4a5da67e42fbb86880b"
SRC_URI += "git://github.com/gotestyourself/gotest.tools;name=gotest.tools-v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gotest.tools/v3"

#       golang.org/x/sys v0.31.0
# [1] git ls-remote https://github.com/golang/sys 74cfc93a99be6ca6f193856132e6799065b071af
SRCREV_sys = "74cfc93a99be6ca6f193856132e6799065b071af"
SRC_URI += "git://github.com/golang/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       golang.org/x/net v0.36.0
# [1] git ls-remote https://go.googlesource.com/net 85d1d54551b68719346cb9fec24b911da4e452a1
SRCREV_net = "85d1d54551b68719346cb9fec24b911da4e452a1"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       github.com/u-root/uio v0.0.0-20240224005618-d2acac8f3701
# [1] git ls-remote https://github.com/u-root/uio d2acac8f37018c514adec45c51f58eace3795df4
SRCREV_uio = "d2acac8f37018c514adec45c51f58eace3795df4"
SRC_URI += "git://github.com/u-root/uio;name=uio;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/u-root/uio"

#       github.com/gofrs/flock v0.12.1
# [1] git ls-remote https://github.com/gofrs/flock 9de625d921bf362f81e0760056fdff11c8542435
SRCREV_flock = "9de625d921bf362f81e0760056fdff11c8542435"
SRC_URI += "git://github.com/gofrs/flock;name=flock;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gofrs/flock"

#       github.com/google/uuid v1.6.0
# [1] git ls-remote https://github.com/google/uuid 0f11ee6918f41a04c201eceeadf612a377bc7fbc
SRCREV_uuid = "0f11ee6918f41a04c201eceeadf612a377bc7fbc"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/uuid"

#       github.com/gorilla/mux v1.8.1
# [1] git ls-remote https://github.com/gorilla/mux b4617d0b9670ad14039b2739167fd35a60f557c5
SRCREV_mux = "b4617d0b9670ad14039b2739167fd35a60f557c5"
SRC_URI += "git://github.com/gorilla/mux;name=mux;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/mux"

#       github.com/moby/vpnkit v0.5.0
# [1] git ls-remote https://github.com/moby/vpnkit 7f0eff0dd99b576c5474de53b4454a157c642834
SRCREV_vpnkit = "7f0eff0dd99b576c5474de53b4454a157c642834"
SRC_URI += "git://github.com/moby/vpnkit;name=vpnkit;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/vpnkit"

#       github.com/songgao/water v0.0.0-20200317203138-2b4b6d7c09d8
# [1] git ls-remote https://github.com/songgao/water 2b4b6d7c09d80835e5f13f6b040d69f00a158b24
SRCREV_water = "2b4b6d7c09d80835e5f13f6b040d69f00a158b24"
SRC_URI += "git://github.com/songgao/water;name=water;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/songgao/water"

#       github.com/urfave/cli/v2 v2.27.6
# [1] git ls-remote https://github.com/urfave/cli 9d76d15e478af5e952fffc872597c47b69ec7ee7
SRCREV_v2 = "9d76d15e478af5e952fffc872597c47b69ec7ee7"
SRC_URI += "git://github.com/urfave/cli;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/urfave/cli/v2"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp = "c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-cmp"

#       github.com/pierrec/lz4/v4 v4.1.21
# [1] git ls-remote https://github.com/pierrec/lz4 294e7659e17723306ebf3a44cd7ad2c11f456c37
SRCREV_v4 = "294e7659e17723306ebf3a44cd7ad2c11f456c37"
SRC_URI += "git://github.com/pierrec/lz4;name=v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pierrec/lz4/v4"

#       github.com/xrash/smetrics v0.0.0-20240521201337-686a1a2994c1
# [1] git ls-remote https://github.com/xrash/smetrics 686a1a2994c11fac124829fadcb683a24ab8d25f
SRCREV_smetrics = "686a1a2994c11fac124829fadcb683a24ab8d25f"
SRC_URI += "git://github.com/xrash/smetrics;name=smetrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xrash/smetrics"

#       github.com/sirupsen/logrus v1.9.3
# [1] git ls-remote https://github.com/sirupsen/logrus d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd
SRCREV_logrus = "d40e25cd45ed9c6b2b66e6b97573a0413e4c23bd"
SRC_URI += "git://github.com/sirupsen/logrus;name=logrus;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/sirupsen/logrus"

#       github.com/insomniacslk/dhcp v0.0.0-20250109001534-8abf58130905
# [1] git ls-remote https://github.com/insomniacslk/dhcp 8abf58130905b866076c8002e77aac6cb2e26d0e
SRCREV_dhcp = "8abf58130905b866076c8002e77aac6cb2e26d0e"
SRC_URI += "git://github.com/insomniacslk/dhcp;name=dhcp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/insomniacslk/dhcp"

#       github.com/moby/sys/mountinfo v0.7.2
# [1] git ls-remote https://github.com/moby/sys cafbe42351600ca9b363e220722f66d96f6e71f4
SRCREV_mountinfo = "cafbe42351600ca9b363e220722f66d96f6e71f4"
SRC_URI += "git://github.com/moby/sys;name=mountinfo;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/moby/sys/mountinfo"

#       github.com/Masterminds/semver/v3 v3.3.1
# [1] git ls-remote https://github.com/Masterminds/semver 1558ca3488226e3490894a145e831ad58a5ff958
SRCREV_v3 = "1558ca3488226e3490894a145e831ad58a5ff958"
SRC_URI += "git://github.com/Masterminds/semver;name=v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/Masterminds/semver/v3"

#       github.com/cpuguy83/go-md2man/v2 v2.0.5
# [1] git ls-remote https://github.com/cpuguy83/go-md2man b14773d4db11046c50d0d1c05955839604aae991
SRCREV_go-md2man-v2 = "b14773d4db11046c50d0d1c05955839604aae991"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=go-md2man-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2 = "4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/russross/blackfriday/v2"

#       github.com/containernetworking/plugins v1.6.2
# [1] git ls-remote https://github.com/containernetworking/plugins 7f756b411efc3d3730c707e2cc1f2baf1a66e28c
SRCREV_plugins = "7f756b411efc3d3730c707e2cc1f2baf1a66e28c"
SRC_URI += "git://github.com/containernetworking/plugins;name=plugins;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/containernetworking/plugins"

