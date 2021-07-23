SUMMARY = "uXen type-2 Open Source hypervisor Linux guest tools"
DESCRIPTION = "Linux guest virtual machine tools for the uXen hypervisor"
HOMEPAGE = "https://www.bromium.com/opensource"
LICENSE = "GPLv2"

COMPATIBLE_HOST = '(x86_64.*).*-linux'

SRC_URI = " \
    https://www.bromium.com/wp-content/uploads/2019/06/uxen-vmsupport-linux-${PV}.zip;name=uxen \
    https://www.bromium.com/wp-content/uploads/2019/11/Bromium-4.1.8-Open-Source-Software.pdf;name=license \
    file://fix-Makefile-for-OE-kernel-build.patch \
    "

SRC_URI[uxen.sha384sum] = "d9d7a1fa5c44ac77eea3d8d4756f9e07fc02acfe12606325ff0bb8a60c07abc3e9ddb80c2039797fb2122d750219722f"
SRC_URI[license.sha384sum] = "92e48c614df3094cb52321d4c4e01f6df5526d46aee5c6fa36c43ee23d4c33f03baa1fc5f6f29efafff636b6d13bc92c"

# The software license is GPLv2: please see page 199 of the pdf document
LIC_FILES_CHKSUM = "file://../Bromium-4.1.8-Open-Source-Software.pdf;md5=cf120df6ffa417b36f870a9997650049"

S = "${WORKDIR}/uxen-vmsupport-linux-${PV}"

inherit module dos2unix
