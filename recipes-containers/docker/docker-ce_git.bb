# docker-ce and docker-moby are now nearly identical. We simply include the
# moby recipe and warn if this is being built.
include docker-moby_git.bb

do_compile:prepend() {
    bbwarn "${PN} is now the same as docker-moby. This recipe will be removed in future releases."
    bbwarn "Consumers of docker should migrate to moby as soon as possible"
}
