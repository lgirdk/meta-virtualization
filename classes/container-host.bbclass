# This class is the collection point for automatic dependencies,
# package installs, rootfs postprocessing, etc, that are used
# by container host images and recipes.

# It currently is largely empty, and simply adds RDEPENDS, but
# will expand to CRI/CNI configurations in the future.
#

RDEPENDS:${PN}:append = " container-host-config"

do_install:append() {
    # placeholder for additional package install, or configuration
    # of the rootfs
    true
}
