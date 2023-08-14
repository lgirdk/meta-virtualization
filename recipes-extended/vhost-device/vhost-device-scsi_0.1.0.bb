SUMMARY = "vhost scsi backend device"
DESCRIPTION = "A vhost-user backend that emulates a VirtIO SCSI block device"
HOMEPAGE = "https://github.com/rust-vmm/vhost-device"
LICENSE = "Apache-2.0 | BSD-3-Clause"
LIC_FILES_CHKSUM = " \
    file://LICENSE-APACHE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
    file://LICENSE-BSD-3-Clause;md5=2489db1359f496fff34bd393df63947e \
"

SRC_URI += "crate://crates.io/vhost-device-scsi/0.1.0"
SRC_URI[vhost-device-scsi-0.1.0.sha256sum] = "85e4abd5a07cb6abfe07b92e49c5cc81437058d7ec7beea441039e829cf82c22"

inherit cargo
inherit cargo-update-recipe-crates

include vhost-device-scsi-crates.inc
