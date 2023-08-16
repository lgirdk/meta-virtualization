SUMMARY = "vhost gpio backend device"
DESCRIPTION = "A vhost-user backend that emulates a VirtIO GPIO device"
HOMEPAGE = "https://github.com/rust-vmm/vhost-device"
LICENSE = "Apache-2.0 | BSD-3-Clause"
LIC_FILES_CHKSUM = "\
    file://LICENSE-APACHE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://LICENSE-BSD-3-Clause;md5=2489db1359f496fff34bd393df63947e \
"
DEPENDS += "libgpiod"
# libgpiod-sys generates bindings using bindgen, which depends on clang
DEPENDS += "clang-native"

SKIP_RECIPE[vhost-device-gpio] ?= "${@bb.utils.contains('BBFILE_COLLECTIONS', 'clang-layer', '', 'Depends on clang-native from meta-clang which is not included', d)}"

SRC_URI += "crate://crates.io/vhost-device-gpio/0.1.0"
SRC_URI[vhost-device-gpio-0.1.0.sha256sum] = "f4789dd127ce746d4f702d50256ff09e47b19fdb2bfee88a254b7e48efbf1100"

inherit cargo
inherit cargo-update-recipe-crates
inherit pkgconfig

include vhost-device-gpio-crates.inc
