#       golang.org/x/exp v0.0.0-20240719175910-8a7402abbf56
# [1] git ls-remote https://go.googlesource.com/exp 8a7402abbf56ed11a2540c1d8beb569bd29e22d1
SRCREV_exp="8a7402abbf56ed11a2540c1d8beb569bd29e22d1"
SRC_URI += "git://go.googlesource.com/exp;name=exp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/exp"

#       golang.org/x/net v0.28.0
# [1] git ls-remote https://go.googlesource.com/net 4542a42604cd159f1adb93c58368079ae37b3bf6
SRCREV_net="4542a42604cd159f1adb93c58368079ae37b3bf6"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.23.0
# [1] git ls-remote https://github.com/golang/sys aa1c4c8554e2f3f54247c309e897cd42c9bfc374
SRCREV_sys="aa1c4c8554e2f3f54247c309e897cd42c9bfc374"
SRC_URI += "git://github.com/golang/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3="f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v3"

#       golang.org/x/text v0.17.0
# [1] git ls-remote https://go.googlesource.com/text b2bec85eb9df7c6fcf50218bde3db5e22b35e481
SRCREV_text="b2bec85eb9df7c6fcf50218bde3db5e22b35e481"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/text"

#       golang.org/x/tools v0.24.0
# [1] git ls-remote https://go.googlesource.com/tools 3057be8f634fdb03e1da1cad9fff3415299ad3ad
SRCREV_tools="3057be8f634fdb03e1da1cad9fff3415299ad3ad"
SRC_URI += "git://go.googlesource.com/tools;name=tools;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/tools"

#       github.com/onsi/gomega v1.34.1
# [1] git ls-remote https://github.com/onsi/gomega fa057b845528c9336265d6df77e21d827f268c7d
SRCREV_gomega="fa057b845528c9336265d6df77e21d827f268c7d"
SRC_URI += "git://github.com/onsi/gomega;name=gomega;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/onsi/gomega"

#       github.com/go-logr/logr v1.4.2
# [1] git ls-remote https://github.com/go-logr/logr 1205f429d540b8b81c2b75a38943afb738dac223
SRCREV_logr="1205f429d540b8b81c2b75a38943afb738dac223"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/logr"

#       github.com/google/pprof v0.0.0-20240727154555-813a5fbdbec8
# [1] git ls-remote https://github.com/google/pprof 813a5fbdbec8a66f7a5aedb876e1b2c3ee0f99ac
SRCREV_pprof="813a5fbdbec8a66f7a5aedb876e1b2c3ee0f99ac"
SRC_URI += "git://github.com/google/pprof;name=pprof;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/pprof"

#       github.com/google/go-cmp v0.6.0
# [1] git ls-remote https://github.com/google/go-cmp c3ad8435e7bef96af35732bc0789e5a2278c6d5f
SRCREV_go-cmp="c3ad8435e7bef96af35732bc0789e5a2278c6d5f"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/go-cmp"

#       github.com/onsi/ginkgo/v2 v2.20.1
# [1] git ls-remote https://github.com/onsi/ginkgo 4ef0afb9f28f241c352cad6ca9dae8b149e57bc4
SRCREV_v2="4ef0afb9f28f241c352cad6ca9dae8b149e57bc4"
SRC_URI += "git://github.com/onsi/ginkgo;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/onsi/ginkgo/v2"

#       github.com/vishvananda/netns v0.0.4
# [1] git ls-remote https://github.com/vishvananda/netns 7a452d2d15292b2bfb2a2d88e6bdeac156a761b9
SRCREV_netns="7a452d2d15292b2bfb2a2d88e6bdeac156a761b9"
SRC_URI += "git://github.com/vishvananda/netns;name=netns;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/vishvananda/netns"

#       github.com/go-task/slim-sprig/v3 v3.0.0
# [1] git ls-remote https://github.com/go-task/slim-sprig b05cce61fffa5c6dea6ac8b9a1f12b6e3fb7c894
SRCREV_v3="b05cce61fffa5c6dea6ac8b9a1f12b6e3fb7c894"
SRC_URI += "git://github.com/go-task/slim-sprig;name=v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-task/slim-sprig/v3"

