include meta-virt-container.inc

## CNCF "components"

# engines: docker/docker-moby, virtual-containerd, cri-o, podman, lxc
VIRTUAL-RUNTIME_container_engine ??= "docker-moby"
# runtime: runc, crun, runv, runx
VIRTUAL-RUNTIME_container_runtime ??= "virtual-runc"
# networking: cni, netavark
VIRTUAL-RUNTIME_container_networking ??= ""
# dns: cni, aardvark-dns
VIRTUAL-RUNTIME_container_dns ??= ""
# orchestration: k8s, k3s
VIRTUAL-RUNTIME_container_orchestration ??= ""

VIRTUAL-RUNTIME_cri ??= "virtual-containerd"
VIRTUAL-RUNTIME_cni ??= "cni"
