This README describes the contents of the reference images in
this directory, as well as some testing and usability tips.

container-image-host
--------------------

As described in the recipe, this is a flexible image definition that
is suitable for building a container host image for a target.

The configuration options for the image are best found in the recipe
itself, so the information will not be duplicated here. The type of
container host that will be created is controlled by the CONTAINER_PROFILE
variable:

i.e. in your local.conf: CONTAINER_PROFILE="docker"

The valid settings for this variable can be found in the image recipe.

The recipe checks for mandatory distro features, recommends others
and provides a list of optional distro features for some workloads.

This image also builds using virt-unique-hostname, which ensures that
there is some randomization as hostname is often used to identify
hosts when clustered (i.e. k3s).

To have enough disk space for container images, it is configured
with extra space. Depending on your use case, you can add (or remove)
space as appropriate.

Also note that more memory than the default is often required.

An example execution of the image is:

  % runqemu qemuarm64 nographic slirp qemuparams="-m 2048" tmp/deploy/images/qemuarm64/container-image-host-qemuarm64.rootfs.ext4

ssh is enabled in this image by default, so the image can be accessed
via:

  % ssh -p 2222 root@127.0.0.1

After a container image has been built, it can be copied fro the
deploy directory to the registry of your choice, for example:

  % cd build/tmp/deploy/images/qemuarm64
  % skopeo copy --dest-creds <username>:<creds> oci:c3-systemd-container-latest-oci:latest docker://zeddii/c3-systemd-container

Examples of pulling images to the container host for the various
runtimes follow:

  % podman pull --creds <username>:<password> zeddii/container-devtools
  % podman run -it docker.io/zeddii/container-devtools bash

  % root@qemuarm64-54:~# docker login
  # Login Succeeded
  % root@qemuarm64-54:~# docker pull zeddii/container-devtools

  % root@qemuarm64-54:~# docker run -it --entrypoint /bin/sh zeddii/container-base
  # [  804.133881] docker0: port 1(veth2801d6a) entered blocking state
  # [  804.134425] docker0: port 1(veth2801d6a) entered disabled state
  # [  804.135018] veth2801d6a: entered allmulticast mode
  # [  804.136101] veth2801d6a: entered promiscuous mode
  # [  806.227282] eth0: renamed from veth384b37d
  # [  806.235331] docker0: port 1(veth2801d6a) entered blocking state
  # [  806.236010] docker0: port 1(veth2801d6a) entered forwarding state
  # / # ls
  # bin    boot   dev    etc    home   lib    media  mnt    proc   run    sbin   sys    tmp    usr    var

container-base:
---------------

Provides a minimal container image (but not absolutely smallest) that is
inherited / included by the other container images.

By default container base does not execute anything (it doesn't define
and OCI_IMAGE_ENTRYPOINT), but does provide a shell that can be used
to inspect the image.

  % root@qemuarm64-54:~# docker run -it zeddii/container-base sh       
  [51393.764879] docker0: port 1(veth06cb397) entered blocking state
  [51393.765340] docker0: port 1(veth06cb397) entered disabled state
  [51393.765854] veth06cb397: entered allmulticast mode
  [51393.766753] veth06cb397: entered promiscuous mode
  [51396.060958] eth0: renamed from veth7e5a654
  [51396.074281] docker0: port 1(veth06cb397) entered blocking state
  [51396.074786] docker0: port 1(veth06cb397) entered forwarding state
  / # ls
  bin    boot   dev    etc    home   lib    media  mnt    proc   run    sbin   sys    tmp    usr    var
  / # df -kh .
  Filesystem                Size      Used Available Use% Mounted on
  overlay                  37.8G      1.9G     33.8G   5% /
  / # du -sh .
  2.6M    .
  / # 

  % root@qemuarm64-54:~# ctr images pull --user <user>:<password> docker.io/zeddii/container-base:latest
  docker.io/zeddii/container base:latest          saved
  └──manifest (45395e734a93)                      complete        |++++++++++++++++++++++++++++++++++++++|
     ├──layer (1fd5069cdbad)                      waiting         |--------------------------------------|
     └──config (24b67db5b19e)                     waiting         |--------------------------------------|
  application/vnd.oci.image.manifest.v1+json sha256:45395e734a931468f5329d20d20babf13fbabbcd993e27b0e5c4198d09130966
  Pulling from OCI Registry (docker.io/zeddii/container-base:latest)      elapsed: 3.7 s  total:  463.0   (123.0 B/s)

  % root@qemuarm64-54:~# ctr run --rm -t docker.io/zeddii/container-base:latest zedd_shell sh
  / # date
  Tue Oct 29 00:09:19 UTC 2024
  / # 

  % root@qemuarm64-54:~# nerdctl pull docker.io/zeddii/container-base:latest
  docker.io/zeddii/container-base:latest:                                           resolved       |++++++++++++++++++++++++++++++++++++++| 
  docker.io/zeddii/container-base:latest:                                           resolved       |++++++++++++++++++++++++++++++++++++++| 
  manifest-sha256:45395e734a931468f5329d20d20babf13fbabbcd993e27b0e5c4198d09130966: exists         |++++++++++++++++++++++++++++++++++++++| 
  config-sha256:24b67db5b19e0bb90291f1d5619362c7eaade7a8c65da9a32c2016394a5b57bf:   exists         |++++++++++++++++++++++++++++++++++++++| 
  elapsed: 1.2 s                                                                    total:   0.0 B (0.0 B/s)

  # FIXME: At the time of creating this README, bridge networking and CNI is not working.
  % root@qemuarm64-54:~# nerdctl run -it --net=host docker.io/zeddii/container-base:latest sh
  / # 

container-devtools-base:
-------------------------

includes container-base, and adds image features to make development
tools/headers available.

Anything added to CORE_DEV_IMAGE_EXTRA_INSTALL will be installed into
the image in it's development variant.

The container shell is changed to bash from busybox.

package-management is added to this image type, but by default there
is no package feed configured (since it must be pointed at a build)

  % root@qemuarm64-54:~# docker run -it zeddii/container-devtools  bash
  bash-5.2# du -sh .
  399M    .
  bash-5.2# rpm -qa | wc -l
  308
  bash-5.2# gcc --version 
  gcc (GCC) 14.2.0
  Copyright (C) 2024 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

container-app-base:
--------------------

Includes container-base.

Provides an application container that installs a package (or packages) to
the container and make the specified command the OCI_IMAGE_ENTRYPOINT.

   CONTAINER_APP_CMD : the binary to run via the OCI_IMAGE_ENTRYPOINT
   CONATINER_APP: packages to install to the container

The default entry point is the "date" command.

  % root@qemuarm64-54:~# docker run zeddii/container-app-base
  Mon Oct 28 18:41:23 UTC 2024

  % root@qemuarm64-54:~# docker run --entrypoint "du" zeddii/container-app-base -sh
  2.6M    .

  % podman run docker.io/zeddii/container-app-base
  Mon Oct 28 18:41:23 UTC 2024

container-systemd-base:
------------------------

Extends container-base to create a systemd enabled container that is
an appropriate starting point if a systemd applciation is being run
or a mulit-user style environment is required.

The application specified in SYSTEMD_CONTAINER_APP will be installed
and be available to be executed.

The rootfs of this container type is post processed to enable and
disable services as specified by the containeer definition. This allows
service that are not appropriate in a containerized environemnt to
be disabled (i.e. getty login)

The list of services can be found in the recipes themselves.

This container enables ssh by default, so that it can be executed
in the background and then accessed as a full environment.

Note: this is currently a priviledged container if run under docker.

There are multiple ways to add/remove permissions from the container,
and most are configurable during launch:

  % root@qemuarm64-54:~# docker run -d --rm --name systemd_test  --privileged --cap-add SYS_ADMIN \
     --security-opt seccomp=unconfined --cgroup-parent=docker.slice --cgroupns private \
     --tmpfs /tmp --tmpfs /run --tmpfs /run/lock zeddii/systemd-container-base

or

  % docker run -d --rm --name systemd_test --privileged  --cgroup-parent=docker.slice \
     --cgroupns private  zeddii/c3-systemd-container

  % root@qemuarm64-54:~# docker ps
  CONTAINER ID   IMAGE                         COMMAND        CREATED         STATUS         PORTS     NAMES
  4b07cc907e26   zeddii/c3-systemd-container   "/sbin/init"   5 minutes ago   Up 5 minutes             systemd_test

  % podman run -d --name systemd_test --privileged --cgroupns=host --tmpfs /tmp --tmpfs /run --tmpfs /run/lock \
           -v /sys/fs/cgroup:/sys/fs/cgroup:ro  zeddii/systemd-container-base

  % ctr container create --privileged --runtime="io.containerd.runc.v2" \
      --mount type=bind,src=/sys/fs/cgroup,dst=/sys/fs/cgroup,options=rbind:rw \
      docker.io/zeddii/systemd-container-base:latest  my_systemd_container /sbin/init

  % ctr task start --detach my_systemd_container

  % ctr task ls
    TASK                    PID    STATUS    
    my_systemd_container    690    RUNNING

Then add a user to the container so you can login:

  % root@qemuarm64-54:~# docker exec systemd_test useradd testuser
  % root@qemuarm64-54:~# docker exec systemd_test sh -c "echo 'testuser:password' | chpasswd"

  % podman exec systemd_test useradd testuser
  % podman exec systemd_test sh -c "echo 'testuser:password' | chpasswd"

  % ctr task exec --exec-id test_exec my_systemd_container useradd testuser
  % ctr task exec --exec-id test_exec my_systemd_container sh -c "echo 'testuser:password' | chpasswd"
  % ctr task exec -t --exec-id test_exec my_systemd_container bash

Get the IP address:

  % root@qemuarm64-54:~# docker inspect systemd_test | grep \"IPAddress\":    
            "IPAddress": "172.17.0.2",
                    "IPAddress": "172.17.0.2",

  % root@qemuarm64-54:~# podman inspect 2f9e00c53c13 | grep IPAdd
               "IPAddress": "10.88.0.5",
                         "IPAddress": "10.88.0.5",

ssh into the container:

  % root@qemuarm64-54:~# ssh testuser@172.17.0.2
  % testuser@172.17.0.2's password:

  WARNING: Poky is a reference Yocto Project distribution that should be used for         
  testing and development purposes only. It is recommended that you create your                     
  own distribution for production use.

  4b07cc907e26:~$ systemctl  | grep running
    init.scope                                    loaded active     running   System and Service Manager
    session-c1.scope                              loaded active     running   Session c1 of User testuser
    dbus.service                                  loaded active     running   D-Bus System Message Bus
    dhcpcd.service                                loaded active     running   A minimalistic network configuration daemon with DHCPv4, rdisc and DHCPv6 support
    getty@tty1.service                            loaded active     running   Getty on tty1
    sshd@2-172.17.0.2:22-172.17.0.1:39264.service loaded active     running   OpenSSH Per-Connection Daemon (172.17.0.1:39264)
    systemd-journald.service                      loaded active     running   Journal Service
    systemd-logind.service                        loaded active     running   User Login Management
    systemd-networkd.service                      loaded active     running   Network Configuration
    systemd-nsresourced.service                   loaded active     running   Namespace Resource Manager
    systemd-resolved.service                      loaded active     running   Network Name Resolution
    systemd-userdbd.service                       loaded active     running   User Database Manager
    user@1000.service                             loaded active     running   User Manager for UID 1000
    xinetd.service                                loaded active     running   Xinetd A Powerful Replacement For Inetd
    dbus.socket                                   loaded active     running   D-Bus System Message Bus Socket
    systemd-journald-dev-log.socket               loaded active     running   Journal Socket (/dev/log)
    systemd-journald.socket                       loaded active     running   Journal Sockets
    systemd-networkd.socket                       loaded active     running   Network Service Netlink Socket
    systemd-nsresourced.socket                    loaded active     running   Namespace Resource Manager Socket
    systemd-userdbd.socket                        loaded active     running   User Database Manager Socket


   % root@qemuarm64-54:~# ssh testuser@10.88.0.5
   The authenticity of host '10.88.0.5 (10.88.0.5)' can't be established.
   ECDSA key fingerprint is SHA256:ydCJGSVNLdWiAcC5PUkDsiFZZ6sDTeQ9Nt13a6HQCc4.
   This key is not known by any other names.
   Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
   Warning: Permanently added '10.88.0.5' (ECDSA) to the list of known hosts.
   testuser@10.88.0.5's password: 

   WARNING: Poky is a reference Yocto Project distribution that should be used for
   testing and development purposes only. It is recommended that you create your
   own distribution for production use.

   2f9e00c53c13:~$ 

Enjoy!


