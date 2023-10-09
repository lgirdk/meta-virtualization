# SPDX-FileCopyrightText: Huawei Inc.
#
# SPDX-License-Identifier: MIT

SUMMARY = "A container init that is so simple it's effectively brain-dead."
HOMEPAGE = "https://github.com/openSUSE/catatonit"
DESCRIPTION = "${SUMMARY}"
SECTION = "base"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

SRC_URI = "git://github.com/openSUSE/${BPN};protocol=https;branch=main"
SRCREV = "7f0c9bb45d3490c3e7f579833c9b0689f78c8923"
S = "${WORKDIR}/git"

inherit autotools
