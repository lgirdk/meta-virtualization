SRCREV = "cfd04396dc68220d1cecbe686a6cc3aa5ce3667c"
SRC_URI = "git://github.com/containerd/containerd;nobranch=1 \
           file://0001-containerd-shim-build-with-CGO.patch  \
          "

include containerd.inc

CONTAINERD_VERSION = "v1.0.2"

PROVIDES += "virtual/containerd"
RPROVIDES_${PN} = "virtual/containerd"
