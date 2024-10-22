include meta-virt-container.inc

VIRTUAL-RUNTIME_container_engine ?= ""
VIRTUAL-RUNTIME_container_runtime ?= ""
VIRTUAL-RUNTIME_container_networking ?= ""
VIRTUAL-RUNTIME_container_dns ?= ""
VIRTUAL-RUNTIME_container_orchestration ?= "k3s-host"

## Kubernetes terminology "components"
VIRTUAL-RUNTIME_cri ?= "virtual-containerd"
VIRTUAL-RUNTIME_cni ?= "cni"
