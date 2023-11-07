# any kernel recipe with fragment support, that sets LINUX_VERSION to one of the tested
# values, will get the appropriate fragments included in their SRC_URI

LINUX_MAJOR = "${@(d.getVar('LINUX_VERSION') or "x.y").split('.')[0]}"
LINUX_MINOR = "${@(d.getVar('LINUX_VERSION') or "x.y").split('.')[1]}"

KERNEL_META_TYPE = "${@'yocto' if d.getVar('SRC_URI').find('type=kmeta') > 0 and d.getVar('SKIP_META_VIRT_KERNEL_INCLUDE') == None else 'none'}"

include ${@bb.utils.contains('DISTRO_FEATURES', 'virtualization', 'linux-${KERNEL_META_TYPE}_${LINUX_MAJOR}.${LINUX_MINOR}_virtualization.inc', '', d)}

python __anonymous () {
    # Gather the variables
    virt_enabled = bb.utils.contains('DISTRO_FEATURES', 'virtualization', 'True', '', d )
    skip_kernel_include_enabled = d.getVar('SKIP_META_VIRT_KERNEL_INCLUDE')
    kmeta_type = d.getVar('SRC_URI').find('type=kmeta')
    inhibit_skip_kernel_check_warning = d.getVar('META_VIRT_KERNEL_CHECK_WARNING_INHIBIT')

    #
    # We warn if:
    #   - the kernel has the capability of merging fragments
    #   - virtualiation is enabled
    #   - and the user has decided to force skip the include
    #
    # .. because they have knowingly opted-out of our tested
    # kernel configurations, and need to be warned.
    #
    # BUT, it can also be annoying to get a warning when you
    # have explcitly opted out. So we have one more warning
    # that indicates that the impacts are understood and this
    # really is on purpse. If META_VIRT_KERNEL_CHECK_WARNING_INHIBIT
    # is set, we won't do the warning.
    #
    if virt_enabled and kmeta_type > 0 and skip_kernel_include_enabled:
       if not inhibit_skip_kernel_check_warning:
          bb.warn( "You have a kernel-yocto enabled kernel, but have inhibited \
virtualization kernel features. Some runtime issues may be present in \
your final image" )
}
