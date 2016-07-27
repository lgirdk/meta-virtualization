require xen.inc

SRC_URI = " \
    http://bits.xensource.com/oss-xen/release/${PV}/xen-${PV}.tar.gz \
    file://libxl-compilation-warning-fix-for-arm-aarch64.patch \
    "

SRC_URI[md5sum] = "3aa4e01bf37a3a5bc8572907cb88e649"
SRC_URI[sha256sum] = "be5876144d49729572ae06142e0bb93f1c1f2695578141eff2931995add24623"

S = "${WORKDIR}/xen-${PV}"
