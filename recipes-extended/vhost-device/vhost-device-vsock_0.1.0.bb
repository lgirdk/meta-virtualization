SUMMARY = "vhost vsock backend device"
DESCRIPTION = "A vhost-user backend that emulates a VirtIO socket device"
HOMEPAGE = "https://github.com/rust-vmm/vhost-device"
LICENSE = "Apache-2.0 | BSD-3-Clause"
LIC_FILES_CHKSUM = " \
    file://LICENSE-APACHE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://LICENSE-BSD-3-Clause;md5=2489db1359f496fff34bd393df63947e \
"

SRC_URI += "crate://crates.io/vhost-device-vsock/0.1.0"
SRC_URI[vhost-device-vsock-0.1.0.sha256sum] = "b1b22596359e46c3986574707a0f616c6e200a6751adeaa353db8cfdbc0472f6"

inherit cargo
inherit cargo-update-recipe-crates

include vhost-device-vsock-crates.inc
