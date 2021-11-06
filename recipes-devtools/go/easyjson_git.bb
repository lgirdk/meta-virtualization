SUMMARY = "easyjson"
DESCRIPTION = "easy json command util"
HOMEPAGE = "https://github.com/mailru/easyjson"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=819e81c2ec13e1bbc47dc5e90bb4d88b"

RDEPENDS_${PN}-dev += "bash"

SRC_URI = "git://${GO_IMPORT};nobranch=1;protocol=https"
SRCREV = "11c9d7f52fd019df40f13aeecd28f11d941be9e3"
PV="v0.7.7+git${SRCPV}"

GO_IMPORT = "github.com/mailru/easyjson"
GO_WORKDIR ?= "${GO_IMPORT}/easyjson"

GO_LINKSHARED = ""
export CGO_ENABLED = "1"

inherit go-mod

BBCLASSEXTEND = "native"

GO_EXTLDFLAGS = "-static"
# Upstream class "forgot" this argument
#GOBUILDFLAGS:append = " -trimpath"

INSANE_SKIP = "arch"
