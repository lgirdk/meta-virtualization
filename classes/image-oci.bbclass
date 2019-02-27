#
# This image class creates an oci image spec directory from a generated
# rootfs. The contents of the rootfs do not matter (i.e. they need not be
# container optimized), but by using the container image type and small
# footprint images, we can create directly executable container images.
#
# Once the tarball (or oci image directory) has been created of the OCI
# image, it can be manipulated by standard tools. For example, to create a
# runtime bundle from the oci image, the following can be done:
#
# Assuming the image name is "container-base":
#
#   If the oci image was a tarball, extract it (skip, if a directory is being directly used)
#     % tar xvf container-base-<arch>-<stamp>.rootfs-oci-latest-x86_64-linux.oci-image.tar
#
#   And then create the bundle:
#     % oci-image-tool create --ref name=latest container-base-<arch>-<stamp>.rootfs-oci container-base-oci-bundle
#
#   Or to copy (push) the oci image to a docker registry, skopeo can be used (vary the
#   tag based on the created oci image:
#
#     % skopeo copy --dest-creds <username>:<password> oci:container-base-<arch>-<stamp>:latest docker://zeddii/container-base
#

# We'd probably get this through the container image typdep, but just
# to be sure, we'll repeat it here.
ROOTFS_BOOTSTRAP_INSTALL = ""
# we want container and tar.bz2's to be created
IMAGE_TYPEDEP_oci = "container tar.bz2"
# sloci is the script/project that will create the oci image
do_image_oci[depends] += "sloci-image-native:do_populate_sysroot"

#
# image type configuration block
#
OCI_IMAGE_AUTHOR ?= "${PATCH_GIT_USER_NAME}"
OCI_IMAGE_AUTHOR_EMAIL ?= "${PATCH_GIT_USER_EMAIL}"

OCI_IMAGE_TAG ?= "latest"
OCI_IMAGE_RUNTIME_UID ?= ""

OCI_IMAGE_ARCH ?= "${TARGET_ARCH}"
OCI_IMAGE_SUBARCH ?= "${@oci_map_subarch(d.getVar('TARGET_ARCH'), d.getVar('TUNE_FEATURES'), d)}"

OCI_IMAGE_ENTRYPOINT ?= "sh"
OCI_IMAGE_ENTRYPOINT_ARGS ?= ""
OCI_IMAGE_WORKINGDIR ?= ""

# List of ports to expose from a container running this image:
#  PORT[/PROT]  
#     format: <port>/tcp, <port>/udp, or <port> (same as <port>/tcp).
OCI_IMAGE_PORTS ?= ""

# key=value list of labels
OCI_IMAGE_LABELS ?= ""
# key=value list of environment variables
OCI_IMAGE_ENV_VARS ?= ""

# whether the oci image dir should be left as a directory, or
# bundled into a tarball.
OCI_IMAGE_TAR_OUTPUT ?= "true"

# Generate a subarch that is appropriate to OCI image
# types. This is typically only ARM architectures at the
# moment.
def oci_map_subarch(a, f, d):
    import re
    if re.match('arm.*', a):
        if 'armv7' in f:
            return 'v7'
        elif 'armv6' in f:
            return 'v6'
        elif 'armv5' in f:
            return 'v5'
            return ''
    return ''

IMAGE_CMD_oci() {
    sloci_options=""

    bbdebug 1 "OCI image settings:"
    bbdebug 1 "  author: ${OCI_IMAGE_AUTHOR}"
    bbdebug 1 "  author email: ${OCI_IMAGE_AUTHOR_EMAIL}"
    bbdebug 1 "  tag: ${OCI_IMAGE_TAG}"
    bbdebug 1 "  arch: ${OCI_IMAGE_ARCH}"
    bbdebug 1 "  subarch: ${OCI_IMAGE_SUBARCH}"
    bbdebug 1 "  entrypoint: ${OCI_IMAGE_ENTRYPOINT}"
    bbdebug 1 "  entrypoing args: ${OCI_IMAGE_ENTRYPOINT_ARGS}"
    bbdebug 1 "  labels: ${OCI_IMAGE_LABELS}"
    bbdebug 1 "  uid: ${OCI_IMAGE_RUNTIME_UID}"
    bbdebug 1 "  working dir: ${OCI_IMAGE_WORKINGDIR}"
    bbdebug 1 "  env vars: ${OCI_IMAGE_ENV_VARS}"
    bbdebug 1 "  ports: ${OCI_IMAGE_PORTS}"

    # Change into the image deploy dir to avoid having any output operations capture
    # long directories or the location.
    cd ${IMGDEPLOYDIR}

    oci_image_label_options=""
    if [ -n "${OCI_IMAGE_LABELS}" ]; then
	for l in ${OCI_IMAGE_LABELS}; do
	    oci_image_label_options="${oci_image_label_options} --label ${l}"
	done
    fi
    oci_image_env_options=""
    if [ -n "${OCI_IMAGE_ENV_VARS}" ]; then
	for l in ${OCI_IMAGE_ENV_VARS}; do
	    oci_image_env_options="${oci_image_env_options} --env ${l}"
	done
    fi
    oci_image_port_options=""
    if [ -n "${OCI_IMAGE_PORTS}" ]; then
	for l in ${OCI_IMAGE_PORTS}; do
	    oci_image_port_options="${oci_image_port_options} --port ${l}"
	done
    fi

    if [ -n "${OCI_IMAGE_RUNTIME_UID}" ]; then
	oci_image_user_options="--user ${OCI_IMAGE_RUNTIME_UID}"
    fi

    if [ -n "${OCI_IMAGE_WORKINGDIR}" ]; then
	oci_image_working_dir_options="--working-dir ${OCI_IMAGE_WORKINGDIR}"
    fi

    if [ -n "${OCI_IMAGE_TAR_OUTPUT}" ]; then
	sloci_options="$sloci_options --tar"
    fi

    # options that always appear are required for a valid oci container image
    # others are optional based on settings.
    sloci-image $sloci_options \
		--arch ${OCI_IMAGE_ARCH} \
		--arch-variant "${OCI_IMAGE_SUBARCH}" \
		--entrypoint ${OCI_IMAGE_ENTRYPOINT} \
		--cmd "${OCI_IMAGE_ENTRYPOINT_ARGS}" \
		--author ${OCI_IMAGE_AUTHOR_EMAIL} \
		${oci_image_user_options} \
		${oci_image_label_options} \
		${oci_image_env_options} \
		${oci_image_working_dir_options} \
		${oci_image_port_options} \
		${IMAGE_ROOTFS} ${IMAGE_NAME}${IMAGE_NAME_SUFFIX}-oci:${OCI_IMAGE_TAG}
}
