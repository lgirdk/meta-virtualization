DESCRIPTION = "virt-manager is a graphical tool for managing virtual machines via libvirt"
HOMEPAGE = "https://virt-manager.org/"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
DEPENDS += "python3-docutils-native python3-pylint"
SRCREV = "da2f65f9262fc18e2b05f527cf8886b1c6b9cde1"

SRC_URI = " \
  git://github.com/virt-manager/virt-manager;branch=main;protocol=https \
  file://0001-build-drop-man-directory.patch \
"

PV = "v5.0.0+git"

S = "${WORKDIR}/git"

PACKAGECONFIG ??= "gui"
PACKAGECONFIG[gui] = ",-Dupdate-icon-cache=false -Dcompile-schemas=false,python3-pygobject"

inherit ${@bb.utils.contains('PACKAGECONFIG', 'gui', 'gtk-icon-cache', '', d)}
inherit bash-completion gettext pkgconfig meson

EXTRA_OEMESON += "-Dtests=disabled"

PACKAGES += " \
  ${PN}-common \
  ${PN}-install \
"

RDEPENDS:${PN}-common += " \
  libvirt-python \
  libosinfo \
"

RDEPENDS:${PN} = " \
  ${PN}-common \
  libvirt-glib \
  libxml2-python \
  gdk-pixbuf \
  gtk+3 \
  hicolor-icon-theme \
  python3-pygobject \
  python3-requests \
"
RDEPENDS:${PN}-install = " \
  ${PN}-common \
  libvirt-virsh \
  libxml2-python \
  python3-pygobject \
  python3-requests \
"

SETUPTOOLS_INSTALL_ARGS += "${PACKAGECONFIG_CONFARGS}"

FILES:${PN} = " \
  ${bindir}/virt-manager \
  ${datadir}/icons/* \
"

FILES:${PN}-common = " \
  ${libdir}/* \
  ${libdir}/python3.10/* \
  ${datadir}/applications \
  ${datadir}/virt-manager \
  ${datadir}/glib-2.0/* \
  ${datadir}/metainfo/* \
"

FILES:${PN}-install = " \
  ${bindir}/virt-clone \
  ${bindir}/virt-install \
  ${bindir}/virt-xml \
"
