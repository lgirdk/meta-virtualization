# virtiofsd: A virtio-fs vhost-user daemon

[virtiofsd](https://gitlab.com/virtio-fs/virtiofsd) implements the
[vhost-user protocol](https://qemu-project.gitlab.io/qemu/interop/vhost-user.html)
and provides a virtio-fs virtio device that can share host directories with
guests.

## Updating the recipe

1. Bump the version number to the newly published version listed on crates.io
2. Regenerate the .inc file that lists the dependencies:
   `bitbake -c update_crates virtiofsd`
3. Review, build and test the changes

