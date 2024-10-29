SUMMARY = "All packages for container host"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit packagegroup

COMPATIBLE_HOST = "^(?!(mips|riscv)).*"

PACKAGES = "\
    packagegroup-container \
    packagegroup-lxc \
    packagegroup-docker \
    packagegroup-oci \
    packagegroup-cni \
    packagegroup-netavark \
    packagegroup-container-tools \
    ${@bb.utils.contains('DISTRO_FEATURES', 'seccomp ipv6', \
                         'packagegroup-podman', '', d)} \
    packagegroup-containerd \
    "

# everything and the kitchen sink, used for building/installing
# many things at once.
RDEPENDS:${PN} = " \
    packagegroup-lxc \
    packagegroup-docker \
    packagegroup-oci \
"

RDEPENDS:packagegroup-lxc = " \
    lxc \
"

RDEPENDS:packagegroup-docker = " \
    docker \
"

RDEPENDS:packagegroup-podman = " \
    podman \
"

RDEPENDS:packagegroup-cni = " \
    cni \
    iptables \
    iproute2 \
    ipset \
    bridge-utils \
"

RDEPENDS:packagegroup-netavark = " \
    netavark \
    aardvark-dns \
"

RDEPENDS:packagegroup-container-tools = " \
    skopeo \
    conmon \
    umoci \
    ${@bb.utils.contains('VIRTUAL-RUNTIME_container_engine','podman','podman-tui nerdctl podman-compose','',d)}  \
    ${@bb.utils.contains_any('VIRTUAL-RUNTIME_container_engine','dcoker docker-moby','docker-compose','',d)}  \
"

RDEPENDS:packagegroup-oci = " \
    ${VIRTUAL-RUNTIME_container_runtime} \
    oci-systemd-hook \
    oci-runtime-tools \
    oci-image-tools \
"

RDEPENDS:packagegroup-containerd = " \
    virtual-containerd \
    packagegroup-cni \
    containerd-cni \
    nerdctl \
    tini \
"

