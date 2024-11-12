This README contains information on the xen reference images
and testing / usability information

Images
------

xen-image-minimal:

This is the reference xen host image. It currently requires systemd
and xen as DISTRO_FEATURES.

All required dependencies are included for typical execution (and
debug) of guests.

xen-guest-image-minimal:

This is the reference guest / domU image. Note that it boots the
same kernel as the xen host image (unless multiconfig is used
to differentiate).

It creates tarballs, ext4 and qcow images for testing purposes.

bundling
--------

Guests can be bundled automatically through the following mechanisms:

  - via the variable XEN_BUNDLED_GUESTS
  - via a xen configuration file in the deploy directory of the format
    xen-guest-bundle-*.cfg

The guests can be built via OE, or be 3rd party guests. They just
must be in the deploy directory so they can be copied into the rootfs
of the xen host image

Type 1) XEN_BUNDLED_GUESTS

If XEN_BUNDLED_GUESTS is used, it is simply a colon separated list of
rootfs:kernels. Normal variable rules apply, so it can be set in a
local.conf, or in a bbappend to the image recipe.

An example would be:

 XEN_BUNDLED_GUESTS = "xen-guest-image-minimal-qemuarm64.rootfs.ext4:Image"

These point at symlinks created in the image deploy directory, or they
can be specific images/kernels without the symlink.

Type 2) A Xen guest configuration file

If xen guest configuration files are found in the deploy directories
the kernel and disk information contained within them will be processed
and modified for the xen host. The kernel and guest image will be
copied to the appropriate location, and the config made to match.

These files following the naming convention: xen-guest-bundle*.cfg

Guests of type #1 generate a configuration file that is picked up as
type #2.

An example config file follows:

   name = "xen-guest"
   memory = 512
   vcpus = 1
   disk = ['file:xen-guest-image-minimal-qemuarm64.rootfs.ext4,xvda,rw']
   vif = ['bridge=xenbr0']
   kernel = "Image"
   extra = "root=/dev/xvda ro console=hvc0 ip=dhcp"

It should also be noted that when a xen-guest-image-minimal is built
with the XEN_GUEST_AUTO_BUNDLE varaible set to True, a configuration
file for type #2 will be generated and the guest bundled automatically
when the host image is built.

kernel and rootfs are copied to the target in /var/lib/xen/images/

configuration files are copied to: /etc/xen

Guests can be launched after boot with: xl create -c /etc/xen/<config file>

Build and boot
--------------

Using a reference qmeuarm64 MACHINE, the following are the commands
to build and boot a guest.

local.conf contains:

   XEN_BUNDLED_GUESTS = "xen-guest-image-minimal-qemuarm64.rootfs.ext4:Image"

 % bitbake xen-guest-image-minimal
 % bitbake xen-image-minimal

 % runqemu qemuarm64 nographic slirp qemuparams="-m 4096" tmp/deploy/images/qemuarm64/xen-image-minimal-qemuarm64.rootfs.ext4

Poky (Yocto Project Reference Distro) 5.1 qemuarm64 hvc0

qemuarm64 login: root

WARNING: Poky is a reference Yocto Project distribution that should be used for
testing and development purposes only. It is recommended that you create your
own distribution for production use.

 root@qemuarm64:~# uname -a
Linux qemuarm64 6.10.11-yocto-standard #1 SMP PREEMPT Fri Sep 20 22:32:26 UTC 2024 aarch64 GNU/Linux
root@qemuarm64:~# ls /etc/xen/
auto
cpupool
scripts
xen-guest-bundle-xen-guest-image-minimal-qemuarm64--20241112174803.cfg
xl.conf
root@qemuarm64:~# ls /var/lib/xen/images/
Image--6.10.11+git0+4bf82718cf_6c956b2ea6-r0-qemuarm64-20241018190311.bin
xen-guest-image-minimal-qemuarm64.rootfs-20241111222814.ext4

 root@qemuarm64:~# ip a s
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue qlen 1000
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host noprefixroute 
       valid_lft forever preferred_lft forever
2: enp0s1: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc fq_codel master xenbr0 qlen 1000
    link/ether 52:54:00:12:35:02 brd ff:ff:ff:ff:ff:ff
3: sit0@NONE: <NOARP> mtu 1480 qdisc noop qlen 1000
    link/sit 0.0.0.0 brd 0.0.0.0
4: xenbr0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc noqueue qlen 1000
    link/ether ee:e4:a8:24:24:e7 brd ff:ff:ff:ff:ff:ff
    inet 10.0.2.15/24 brd 10.0.2.255 scope global dynamic xenbr0
       valid_lft 86354sec preferred_lft 86354sec
    inet6 fec0::ece4:a8ff:fe24:24e7/64 scope site dynamic noprefixroute flags 100 
       valid_lft 86356sec preferred_lft 14356sec
    inet6 fe80::ece4:a8ff:fe24:24e7/64 scope link 
       valid_lft forever preferred_lft forever

 root@qemuarm64:~# xl create -c /etc/xen/xen-guest-bundle-xen-guest-image-minimal-qemuarm64--20241112174803.cfg

qemuarm64 login: root

WARNING: Poky is a reference Yocto Project distribution that should be used for
testing and development purposes only. It is recommended that you create your
own distribution for production use.

root@qemuarm64:~# uname -a
Linux qemuarm64 6.10.11-yocto-standard #1 SMP PREEMPT Fri Sep 20 22:32:26 UTC 2024 aarch64 GNU/Linux

root@qemuarm64:~# wget example.com
Connecting to example.com (93.184.215.14:80)
wget: can't open 'index.html': File exists
root@qemuarm64:~# rm index.html 
root@qemuarm64:~# wget example.com
Connecting to example.com (93.184.215.14:80)
saving to 'index.html'
index.html           100% |********************************|  1256  0:00:00 ETA
'index.html' saved

From the host:

Connection to 127.0.0.1 closed.
build4 [/home/bruc.../qemuarm64]> ssh -p 2222 root@127.0.0.1
Last login: Tue Nov 12 20:42:57 2024 from 10.0.2.2

WARNING: Poky is a reference Yocto Project distribution that should be used for
testing and development purposes only. It is recommended that you create your
own distribution for production use.

root@qemuarm64:~# xl list
Name                                        ID   Mem VCPUs      State   Time(s)
Domain-0                                     0   192     4     r-----     696.2
xen-guest                                    1   512     1     -b----     153.0
root@qemuarm64:~# xl destroy xen-guest

