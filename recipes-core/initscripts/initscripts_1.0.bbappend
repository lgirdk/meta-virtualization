do_install_append() {

	echo                  >> ${D}${sysconfdir}/init.d/functions
	echo success \(\) \{  >> ${D}${sysconfdir}/init.d/functions
	echo \ \ \ \ echo \$* >> ${D}${sysconfdir}/init.d/functions
	echo \}               >> ${D}${sysconfdir}/init.d/functions
	echo failure \(\) \{  >> ${D}${sysconfdir}/init.d/functions
	echo \ \ \ \ echo \$* >> ${D}${sysconfdir}/init.d/functions
	echo \}               >> ${D}${sysconfdir}/init.d/functions
}
