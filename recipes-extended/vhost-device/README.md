# vhost-device: A collection of vhost-user devices

[vhost-device](https://github.com/rust-vmm/vhost-device) provides a series of
daemons that implement the
[vhost-user protocol](https://qemu-project.gitlab.io/qemu/interop/vhost-user.html)
for various virtio device types.

## Updating the recipes

1. Bump the version number to the newly published version listed on crates.io
2. Regenerate the .inc file that list the dependencies:
   `bitbake -c update_crates vhost-device-<type>`
3. Review, build and test the changes

