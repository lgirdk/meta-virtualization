include runc.inc

SRCREV = "fce58ab2d5c488bc573d02712db476a6daa9a60c"
SRC_URI = " \
    git://github.com/opencontainers/runc;branch=master \
    file://0001-Makefile-respect-GOBUILDFLAGS-for-runc-and-remove-re.patch \
    "
RUNC_VERSION = "1.0.0-rc93"

CVE_PRODUCT = "runc"

# use BFD when ld-is-gold is used to work around:
# http://errors.yoctoproject.org/Errors/Details/580099/
# CGO_ENABLED=1 x86_64-oe-linux-go build -trimpath  -tags "seccomp seccomp                       netgo osusergo" -ldflags "-w -extldflags -static -X main.gitCommit="fce58ab2d5c488bc573d02712db476a6daa9a60c-dirty" -X main.version=1.0.0-rc93+dev " -o runc .
# TOPDIR/tmp-glibc/work/core2-64-oe-linux/runc-opencontainers/1.0.0-rc93+gitAUTOINC+fce58ab2d5-r0/recipe-sysroot-native/usr/bin/x86_64-oe-linux/../../libexec/x86_64-oe-linux/gcc/x86_64-oe-linux/11.0.1/ld: internal error in format_file_lineno, at ../../gold/dwarf_reader.cc:2278
# collect2: error: ld returned 1 exit status
LDFLAGS_append = "${@bb.utils.contains('DISTRO_FEATURES', 'ld-is-gold', ' -fuse-ld=bfd ', '', d)}"
