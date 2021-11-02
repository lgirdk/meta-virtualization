SUMMARY = "Device Tree Lopper"
DESCRIPTION = "Tool for manipulation of system device tree files"
LICENSE = "BSD-3-Clause"
SECTION = "bootloader"

SRC_URI = "git://github.com/devicetree-org/lopper.git;branch=master;protocol=https"
SRCREV = "0c23e51d585608ab04009ccf3499f168e2f4d478"
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

    install -m 0644 "${S}/README" "${D}/${datadir}/${BPN}"
    install -m 0644 "${S}/README-architecture.txt" "${D}/${datadir}/${BPN}"
    install -m 0644 "${S}/README.pydoc" "${D}/${datadir}/${BPN}"
    install -m 0644 "${S}/LICENSE.md" "${D}/${datadir}/${BPN}"

    install -d "${D}/${datadir}/${BPN}/assists"
    install -m 0644 "${S}/assists/"* "${D}/${datadir}/${BPN}/assists/"

    install -d "${D}/${datadir}/${BPN}/lops"
    install -m 0644 "${S}/lops/"* "${D}/${datadir}/${BPN}/lops/"

    install -d "${D}/${datadir}/${BPN}/device-trees"
    install -m 0644 "${S}/device-trees/"* "${D}/${datadir}/${BPN}/device-trees/"

    install -m 0755 "${S}/"lopper*.py "${D}/${datadir}/${BPN}/"

    datadir_relpath=${@os.path.relpath(d.getVar('datadir'), d.getVar('bindir'))}
    ln -s "${datadir_relpath}/${BPN}/lopper.py" "${D}/${bindir}/"
}

do_configure[noexec] = "1"
do_compile[noexec] = "1"

BBCLASSEXTEND = "native nativesdk"
