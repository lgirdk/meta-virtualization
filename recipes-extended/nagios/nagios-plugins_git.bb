require nagios-common.inc

DESCRIPTION = "A host/service/network monitoring and management system plugins"
HOMEPAGE = "http://www.nagios-plugins.org"
SECTION = "console/network"
PRIORITY = "optional"
LICENSE = "GPL-3.0-only"

LIC_FILES_CHKSUM = "file://COPYING;md5=d32239bcb673463ab874e80d47fae504"

SRCREV = "7c74420158c3e228b3d66d4c781a6abc7a93075a"
SRC_URI = "git://github.com/nagios-plugins/nagios-plugins.git;protocol=https;branch=master"

PV = "2.4.12+git"
S = "${WORKDIR}/git"

inherit autotools gettext pkgconfig autotools-brokensep

SKIP_RECIPE[nagios-plugins] ?= "${@bb.utils.contains('BBFILE_COLLECTIONS', 'webserver', '', 'Depends on nagios-core which depends on apache2 from meta-webserver which is not included', d)}"

EXTRA_OECONF += "--with-sysroot=${STAGING_DIR_HOST} \
                 --with-nagios-user=${NAGIOS_USER} \
                 --with-nagios-group=${NAGIOS_GROUP} \
                 --without-apt-get-command \
                 --with-trusted-path=/bin:/sbin:/usr/bin:/usr/sbin \
                 --with-sudo-command=${bindir}/sudo \
                 --with-ssh-command=${bindir}/ssh \
                 --with-ps-command=${bindir}/ps \
                 --with-ps-format='%*s %s %d %d %d %*s %*s %*s %*s %*s %*s %*s %*s %n%s' \
                 --with-ps-varlist='procstat,&procuid,&procpid,&procppid,&pos,procprog' \
                 --with-ps-cols=6 \
                 ac_cv_path_PERL=${bindir}/perl \
"

# IPv6
PACKAGECONFIG[ipv6] = "--with-ipv6,--without-ipv6,,"

# Enable check_ldaps, check_http --ssl, check_tcp --ssl
PACKAGECONFIG[ssl] = "--with-openssl=${STAGING_DIR_HOST},--without-openssl,openssl,libssl"

# Enable check_ldaps
PACKAGECONFIG[ldap] = "--with-ldap,--without-ldap,openldap"

# Enable check_smtp --starttls
PACKAGECONFIG[gnutls] = "--with-gnutls=${STAGING_DIR_HOST},--without-gnutls,gnutls,gnutls"

# Enable check_pgsql
PACKAGECONFIG[pgsql] = "--with-pgsql=${STAGING_DIR_HOST},--without-pgsql,postgresql,libpq"

# Enable check_mysql, check_mysql_query
PACKAGECONFIG[mysql] = "--with-mysql=${STAGING_DIR_HOST},--without-mysql,mysql5,libmysqlclient"

# Enable check_snmp
PACKAGECONFIG[snmp] = "\
    --with-snmpget-command=${bindir}/snmpget --with-snmpgetnext-command=${bindir}/snmpgetnext, \
    --without-snmpget-command --without-snmpgetnext-command, \
    , net-snmp-utils \
"

PACKAGECONFIG ??= "ssl gnutls"

do_configure:prepend() {
    # rename these macros to have .m4 suffix so that autoreconf could recognize them
    for macro in `ls ${S}/autoconf-macros/ax_nagios_get_*`; do
	mv $macro $macro.m4
    done
}

do_install:append() {
     sed -i '1s,#! /usr/bin/perl -w.*,#! ${bindir}/env perl,' ${D}${libdir}/nagios/plugins/*
}

RDEPENDS:${PN} += "\
    iputils \
    nagios-base \
    perl \
    bash \
"

FILES:${PN} += "${datadir} \
                ${NAGIOS_PLUGIN_DIR} \
"
