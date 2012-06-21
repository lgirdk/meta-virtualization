THISDIR := "${@os.path.dirname(bb.data.getVar('FILE', d, True))}"
FILESPATH =. "${@base_set_filespath(["${THISDIR}/${PN}"], d)}:"

DEPENDS += " ncurses"

do_compile_prepend() {
	export LIBRARY_PATH=${STAGING_DIR_TARGET}/lib
}

