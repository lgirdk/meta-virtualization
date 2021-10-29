SUMMARY = "Device Tree Lopper"
DESCRIPTION = "Tool for manipulation of system device tree files"
LICENSE = "BSD-3-Clause"
SECTION = "bootloader"

SRC_URI = "git://github.com/devicetree-org/lopper.git;branch=master-next;protocol=https"
SRCREV = "3e6aa522d2469ba7563fc6691802cf4aae3d2fd7"
S = "${WORKDIR}/git"

LIC_FILES_CHKSUM = "file://LICENSE.md;md5=8e5f5f691f01c9fdfa7a7f2d535be619"

RDEPENDS:${PN} = " \
    python3-core \
    python3-dtc \
    python3-humanfriendly \
    "

do_install() {
    install -d "${D}/${bindir}"
    install -d "${D}/${datadir}/${BPN}"

    install -m 0644 "${S}/README.md" "${D}/${datadir}/${BPN}"
    install -m 0644 "${S}/README-architecture.md" "${D}/${datadir}/${BPN}"
    install -m 0644 "${S}/README.pydoc" "${D}/${datadir}/${BPN}"
    install -m 0644 "${S}/LICENSE.md" "${D}/${datadir}/${BPN}"

    install -d "${D}/${datadir}/${BPN}/lopper/assists"
    cp -r "${S}/lopper/assists/"* "${D}/${datadir}/${BPN}/lopper/assists/"

    install -d "${D}/${datadir}/${BPN}/lopper/lops"
    install -m 0644 "${S}/lopper/lops/"* "${D}/${datadir}/${BPN}/lopper/lops/"

    install -d "${D}/${datadir}/${BPN}/device-trees"
    install -m 0644 "${S}/device-trees/"* "${D}/${datadir}/${BPN}/device-trees/"

    install -m 0755 "${S}/"lopper*.py "${D}/${datadir}/${BPN}/"

    datadir_relpath=${@os.path.relpath(d.getVar('datadir'), d.getVar('bindir'))}
    ln -s "${datadir_relpath}/${BPN}/lopper.py" "${D}/${bindir}/"
}

do_configure[noexec] = "1"
do_compile[noexec] = "1"

BBCLASSEXTEND = "native nativesdk"
