SUMMARY = "LXCFS is a userspace filesystem created to avoid kernel limitations"
LICENSE = "Apache-2.0"

inherit autotools pkgconfig systemd

SRC_URI = " \
    https://linuxcontainers.org/downloads/lxcfs/lxcfs-${PV}.tar.gz \
    file://systemd-allow-for-distinct-build-directory.patch \
    file://systemd-ensure-var-lib-lxcfs-exists.patch \
"

LIC_FILES_CHKSUM = "file://COPYING;md5=3b83ef96387f14655fc854ddc3c6bd57"
SRC_URI[md5sum] = "bfc41f949caeabd0468189480222f25e"
SRC_URI[sha256sum] = "890aa30d960d9b1e53b0c0712bf645c1f1924f750e32cd090f368c1338bd462f"

DEPENDS += "fuse"
RDEPENDS_${PN} += "fuse"

FILES_${PN} += "${datadir}/lxc/config/common.conf.d/*"

CACHED_CONFIGUREVARS += "ac_cv_path_HELP2MAN='false // No help2man //'"
EXTRA_OECONF += "--with-distro=unknown --with-init-script=${VIRTUAL-RUNTIME_init_manager}"

SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE_${PN} = "lxcfs.service"
