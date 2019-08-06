require nagios-common.inc

DESCRIPTION = "Nagios Remote Plugin Executor"
HOMEPAGE = "http://exchange.nagios.org"
SECTION = "console/network"
PRIORITY = "optional"
LICENSE = "GPLv2"

LIC_FILES_CHKSUM = "file://src/nrpe.c;beginline=1;endline=35;md5=0dadd78599abbc737af81432702e9161"

SRCNAME = "nrpe"

SRC_URI = "https://github.com/NagiosEnterprises/nrpe/releases/download/${SRCNAME}-${PV}/${SRCNAME}-${PV}.tar.gz \
           file://check_nrpe.cfg \
           file://nagios-nrpe.service \
"

SRC_URI[md5sum] = "8997e195fea93cdceb8c7ed8ac1d43bc"
SRC_URI[sha256sum] = "8ad2d1846ab9011fdd2942b8fc0c99dfad9a97e57f4a3e6e394a4ead99c0f1f0"

S = "${WORKDIR}/${SRCNAME}-${PV}"

inherit autotools-brokensep update-rc.d systemd update-alternatives

# IP address of server which proxy should connect to
MONITORING_PROXY_SERVER_IP ??= "192.168.7.2"

# IP address of server which agent should connect to
MONITORING_AGENT_SERVER_IP ??= "192.168.7.4"

EXTRA_OECONF += "--with-nrpe-user=${NAGIOS_USER} \
                 --with-nrpe-group=${NAGIOS_GROUP} \
                 ac_cv_lib_wrap_main=no \
                 ac_cv_path_PERL=${bindir}/perl \
"

EXTRA_OECONF_SSL = "--with-ssl=${STAGING_DIR_HOST} \
                    --with-ssl-inc=${STAGING_DIR_HOST}${includedir} \
                    --with-ssl-lib=${STAGING_DIR_HOST}${libdir} \
"

PACKAGECONFIG[ssl] = "${EXTRA_OECONF_SSL},--disable-ssl,openssl,"
PACKAGECONFIG[cmdargs] = "--enable-command-args,--disable-command-args,,"
PACKAGECONFIG[bashcomp] = "--enable-bash-command-substitution,--disable-bash-command-substitution,,"

PACKAGECONFIG ??= "cmdargs bashcomp"

do_configure() {
    oe_runconf || die "make failed"
}

do_compile() {
    oe_runmake all
}

do_install_append() {
    oe_runmake 'DESTDIR=${D}' install-daemon
    oe_runmake 'DESTDIR=${D}' install-config

    install -d ${D}${sysconfdir}/init.d
    install -m 755 ${B}/startup/debian-init ${D}${sysconfdir}/init.d/nrpe

    install -d ${D}${NAGIOS_CONF_DIR}/nrpe.d
    echo "include_dir=${NAGIOS_CONF_DIR}/nrpe.d" >> ${D}${NAGIOS_CONF_DIR}/nrpe.cfg

    sed -e "s/^allowed_hosts=.*/allowed_hosts=${MONITORING_AGENT_SERVER_IP}/g" \
        -i ${D}${NAGIOS_CONF_DIR}/nrpe.cfg

    install -d ${D}${NAGIOS_PLUGIN_CONF_DIR}
    install -m 664 ${WORKDIR}/check_nrpe.cfg ${D}${NAGIOS_PLUGIN_CONF_DIR}

    if ${@bb.utils.contains('DISTRO_FEATURES', 'systemd', 'true', 'false', d)}; then
        install -d ${D}${systemd_unitdir}/system
        install -m 644 ${WORKDIR}/nagios-nrpe.service ${D}${systemd_unitdir}/system/
    fi
}

PACKAGES = "${PN}-dbg ${PN}-plugin ${PN}-daemon"

FILES_${PN}-plugin = "${NAGIOS_PLUGIN_DIR} \
                      ${NAGIOS_PLUGIN_CONF_DIR} \
"

FILES_${PN}-daemon = "${sysconfdir} \
                      ${bindir} \
                      ${nonarch_libdir}/tmpfiles.d/ \
                      ${localstatedir} \
"

RDEPENDS_${PN}-daemon = "nagios-base"
RDEPENDS_${PN}-plugin = "nagios-base"

SYSTEMD_PACKAGES = "${PN}-daemon"
SYSTEMD_SERVICE_${PN}-daemon = "nagios-nrpe.service"
SYSTEMD_AUTO_ENABLE_${PN}-daemon = "enable"

INITSCRIPT_PACKAGES = "${PN}-daemon"
INITSCRIPT_NAME_${PN}-daemon = "nrpe"
INITSCRIPT_PARAMS_${PN}-daemon = "defaults"

ALTERNATIVE_${PN}-daemon = "nagios"
ALTERNATIVE_LINK_NAME[nagios] = "${localstatedir}/nagios"
