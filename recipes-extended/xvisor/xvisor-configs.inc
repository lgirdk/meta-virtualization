def get_oemake_config(d):
    plat = d.getVar('XVISOR_PLAT')

    if plat is None:
        return ""

    if 'riscv/virt32' in plat:
        return "generic-32b-defconfig"
    if 'riscv/virt64' in plat:
        return "generic-64b-defconfig"

    return ""

def map_xvisor_arch(a, d):
    import re

    if   re.match('(i.86|x86.64)$', a):  return 'x86'
    elif re.match('armeb$', a):                 return 'arm'
    elif re.match('aarch64$', a):               return 'arm'
    elif re.match('aarch64_be$', a):            return 'arm'
    elif re.match('aarch64_ilp32$', a):         return 'arm'
    elif re.match('aarch64_be_ilp32$', a):      return 'arm'
    elif re.match('riscv(32|64|)(eb|)$', a):    return 'riscv'
    else:
        bb.error("cannot map '%s' to a Xvisor architecture" % a)
