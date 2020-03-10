PACKAGES_prepend_class-target = "${PN}-x86_64 \
                     ${PN}-aarch64 \
                     ${PN}-arm \
                     ${PN}-i386 \
                     ${PN}-system-i386 \
                     ${PN}-microblaze \
                     ${PN}-support \
                     ${PN}-keymaps \
                     ${PN}-firmware \
                    "

FILES_${PN}-x86_64_class-target = "${bindir}/qemu-system-x86_64 ${bindir}/qemu-x86_64"
RDEPENDS_${PN}-x86_64_append_class_target = "${PN}"
INSANE_SKIP_${PN}-x86_64_class-target = "file-rdeps"

FILES_${PN}-i386_class-target = "${bindir}/qemu-i386"
RDEPENDS_${PN}-i386_append_class-target = "${PN}"
INSANE_SKIP_${PN}-i386_class-target = "file-rdeps"

FILES_${PN}-system-i386_class-target = "${bindir}/qemu-system-i386"
RDEPENDS_${PN}-system-i386_append_class-target = "${PN}"
INSANE_SKIP_${PN}-system-i386_class-target = "file-rdeps"

FILES_${PN}-aarch64_class-target = "${bindir}/qemu-system-aarch64 ${bindir}/qemu-aarch64"
RDEPENDS_${PN}-aarch64_append_class-target = "${PN}"
INSANE_SKIP_${PN}-aarch64_class-target = "file-rdeps"

FILES_${PN}-arm_class-target = "${bindir}/qemu-system-arm ${bindir}/qemu-arm"
RDEPENDS_${PN}-arm_append_class-target = "${PN}"
INSANE_SKIP_${PN}-arm_class-target = "file-rdeps"

FILES_${PN}-microblaze_class-target = "${bindir}/qemu-system-microblaze* ${bindir}/qemu-microblaze*"
RDEPENDS_${PN}-microblaze_append_class-target = "${PN}"
INSANE_SKIP_${PN}-arm_class-target = "file-rdeps"

FILES_${PN}-support_class-target = "${bindir}/* ${libexecdir}/*"
RDEPENDS_${PN}-support_class-target = "${PN} bash"

FILES_${PN}-firmware_class-target = "${datadir}/${PN}/*.bin ${datadir}/${PN}/*.rom ${datadir}/${PN}/*.img ${datadir}/${PN}/openbios* ${datadir}/${PN}/*.dtb ${datadir}/${PN}/u-boot*"
RDEPENDS_${PN}-firmware_class-target = "${PN}"
INSANE_SKIP_${PN}-firmware_class-target = "arch"

FILES_${PN}-keymaps_class-target = "${datadir}/${PN}/keymaps/*"
RDEPENDS_${PN}-keymaps_class-target = "${PN}"
