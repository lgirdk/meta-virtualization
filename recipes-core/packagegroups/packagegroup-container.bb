SUMMARY = "All packages for container host"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit packagegroup

PACKAGES = "\
    packagegroup-container \
    packagegroup-lxc \
    packagegroup-docker \
    packagegroup-oci \
    packagegroup-podman \
    packagegroup-containerd \
    "

# everything and the kitchen sink, used for building/installing
# many things at once.
RDEPENDS_${PN} = " \
    packagegroup-lxc \
    packagegroup-docker \
    packagegroup-oci \
"

RDEPENDS_packagegroup-lxc = " \
    lxc \
"

RDEPENDS_packagegroup-docker = " \
    docker \
"

RDEPENDS_packagegroup-podman = " \
    podman \
"

RDEPENDS_packagegroup-oci = " \
    virtual/runc \
    oci-systemd-hook \
    oci-runtime-tools \
    oci-image-tools \
"

RDEPENDS_packagegroup-containerd = " \
    virtual/containerd \
"

python __anonymous() {
    msg = ""
    # ERROR: Nothing PROVIDES 'libseccomp' (but meta-virtualization/recipes-containers/podman/ DEPENDS on or otherwise requires it).
    # ERROR: Required build target 'meta-world-pkgdata' has no buildable providers.
    # Missing or unbuildable dependency chain was: ['meta-world-pkgdata', 'podman', 'libseccomp']
    if 'security' not in d.getVar('BBFILE_COLLECTIONS').split():
        msg += "Make sure meta-security should be present as it provides 'libseccomp'"
        raise bb.parse.SkipRecipe(msg)
}
