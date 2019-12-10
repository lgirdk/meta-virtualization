# We need to load the meta-virt config components, only if "k8s"
# is in the distro features.  Since we don't know the distro flags during
# layer.conf load time, we delay using a special bbclass that simply includes
# the K8S_CONFIG_PATH file.

include ${K8S_CONFIG_PATH}
