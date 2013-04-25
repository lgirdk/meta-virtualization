#!/bin/sh

# runqemu defaults for the first "guest"
#
my_inet4="192.168.7.2"
my_gw="192.168.7.1"

# create a bridge
#
ovs-vsctl add-br br-int

# Add a physical interface to your virtual bridge for connectivity off box.
# If your rootfs is nfs mounted (on eth0), you will die after attaching it
# to the bridge.
#
ovs-vsctl add-port br-int eth0

# Zero out your eth0 interface and slap it on the bridge interface.
#
ifconfig eth0 0
ifconfig br-int ${my_inet4} netmask 255.255.255.0

# Change your default route.  If you don't do this, nothing will
# be reachable.
#
route add default gw ${my_gw} br-int

(You can then check that the connection works.)

# The bridge configuration is persistant, so if something goes wrong
# and you reboot, it will still be messed up.  Destroy the bridge,
# then add a route, or reboot.
#
ovs-vsctl del-br br-int
ifconfig eth0 ${my_inet4}
route add default gw ${my_gw} eth0
