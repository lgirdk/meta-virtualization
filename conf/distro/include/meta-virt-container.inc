# These variables represent groupings of functionality in the CNCF
# landscape. In particular, they are areas where there is a choice
# between more than one implementation or an area where abstraction
# is beneficial.
#
# The contents of the variables are are runtime components that
# recipes may use for RDEPENDS.
#
# Build dependencies are not typically flexible, so do not currently
# have DEPENDS equivalents for the components (i.e. DEPENDS on runc
# versus crun).
#
# Distro features such as kubernetes or other container stacks
# can be used to set different defaults for these variables.
#
# Note: these are "global" values, since they represent choices.
# If more than of a grouping is required on target, then the variable
# can be appended or set to multiple values. That being said, Recipes
# should generally agree on the values, hence the global namespace.
# Recipe specific choices  can still be done, but they risk
# conflicting on target or causing runtime issues / errors.
#

## CNCF "components"

# engines: docker-ce/docker-moby, virtual-containerd, cri-o, podman
VIRTUAL-RUNTIME_container_engine ??= "podman"
# runtime: runc, crun, runv, runx
VIRTUAL-RUNTIME_container_runtime ??= "virtual-runc"
# networking: cni, netavark
VIRTUAL-RUNTIME_container_networking ??= "cni"
# dns: cni, aardvark-dns
VIRTUAL-RUNTIME_container_dns ??= "cni"
# orchestration: k8s, k3s
VIRTUAL-RUNTIME_container_orchestration ??= "k3s"

## Kubernetes terminology "components"

VIRTUAL-RUNTIME_cri ??= "virtual-containerd"
VIRTUAL-RUNTIME_cni ??= "cni"
