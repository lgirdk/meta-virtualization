#!/bin/sh

# This is currently a very raw init script for xen-minimal
# Feel free to expand and make more useful

STARTDOMAINS="rtos freedos"

# Shutdown Xen domains
for foo in $STARTDOMAINS ; do
	xl destroy $foo
done

# Stop and Startup Xen common
if test -f /etc/init.d/xencommons ; then
	echo Using Xen standard init scripts
#	/etc/init.d/libvirtd stop
#	/etc/init.d/xendomains stop
#	/etc/init.d/xencommons stop
#
#	/etc/init.d/xencommons start
#	/etc/init.d/libvirtd start
#	/etc/init.d/xendomains start
else
	echo Skipping Xen standard init scripts

	killall xenstored
	killall xenconsoled
	umount /proc/xen

	# Fix up device nodes
	if pidof udevd ; then 
		echo Udev running.  Skipping mdev fixups
	else
		rm -rf /dev/xen
		mkdir /dev/xen
		for foo in /dev/xen!* ; do ln -s $foo /dev/xen/`echo $foo | cut -f 2 -d '!'` ; done
	fi

	mount -t xenfs xenfs /proc/xen
	xenstored --pid-file=/var/run/xenstored.pid
	xenstore-write "/local/domain/0/name" "Domain-0"
	xenconsoled --pid-file=/var/run/xenconsoled.pid
fi

# Remove the images we have
cd /tmp
rm -rf xen

# Grab and start the VM images
mkdir xen
cd xen
for foo in $STARTDOMAINS ; do
	wget http://candidates/xen/images/$foo.zip
	unzip $foo.zip
	xl create $foo.cfg
done

# Fix up the Webmin server with a new admin password
test -f /usr/libexec/webmin/changepass.pl && /usr/libexec/webmin/changepass.pl /etc/webmin admin password
