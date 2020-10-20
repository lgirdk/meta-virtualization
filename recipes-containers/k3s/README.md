# k3s: Lightweight Kubernetes

Rancher's [k3s](https://k3s.io/), available under
[Apache License 2.0](https://www.apache.org/licenses/LICENSE-2.0), provides
lightweight Kubernetes suitable for small/edge devices. There are use cases
where the
[installation procedures provided by Rancher](https://rancher.com/docs/k3s/latest/en/installation/)
are not ideal but a bitbake-built version is what is needed. And only a few
mods to the [k3s source code](https://github.com/rancher/k3s) is needed to
accomplish that.

## CNI

By default, K3s will run with flannel as the CNI, using VXLAN as the default
backend. It is both possible to change the flannel backend and to change from
flannel to another CNI.

Please see <https://rancher.com/docs/k3s/latest/en/installation/network-options/>
for further k3s networking details.

## Configure and run a k3s agent

The convenience script `k3s-agent` can be used to set up a k3s agent (service):

```shell
k3s-agent -t <token> -s https://<master>:6443
```

(Here `<token>` is found in `/var/lib/rancher/k3s/server/node-token` at the
k3s master.)
