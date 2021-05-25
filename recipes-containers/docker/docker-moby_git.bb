HOMEPAGE = "http://www.docker.com"
SUMMARY = "Linux container runtime"
DESCRIPTION = "Linux container runtime \
 Docker complements kernel namespacing with a high-level API which \
 operates at the process level. It runs unix processes with strong \
 guarantees of isolation and repeatability across servers. \
 . \
 Docker is a great building block for automating distributed systems: \
 large-scale web deployments, database clusters, continuous deployment \
 systems, private PaaS, service-oriented architectures, etc. \
 . \
 This package contains the daemon and client, which are \
 officially supported on x86_64 and arm hosts. \
 Other architectures are considered experimental. \
 . \
 Also, note that kernel version 3.10 or above is required for proper \
 operation of the daemon process, and that any lower versions may have \
 subtle and/or glaring issues. \
 "

# Notes:
#   - This docker variant uses moby and the other individually maintained
#     upstream variants for SRCREVs
#   - It is a true community / upstream tracking build, and is not a
#     docker curated set of commits or additions
#   - The version number on this package tracks the versions assigned to
#     the curated docker-ce repository. This allows compatibility and
#     functional equivalence, while allowing new features to be more
#     easily added.
#   - This could be called "docker-moby" or just "moby" in the future, but
#     that would require the creation of a virtual/docker dependency, which
#     is possible, but overkill at the moment (while we wait for the upstream
#     to stop changing).
#   - The common components of this recipe and docker-ce do need to be moved
#     to a docker.inc recipe

SRCREV_moby = "3db8385b187168d99680aa8b68ffb5020c606982"
SRCREV_libnetwork = "64b7a4574d1426139437d20e81c0b6d391130ec8"
SRCREV_cli = "e0d47b1c0b0c4689e8e4c5da901d7046e5e0e512"
SRC_URI = "\
	git://github.com/moby/moby.git;branch=20.10;name=moby \
	git://github.com/docker/libnetwork.git;branch=master;name=libnetwork;destsuffix=git/libnetwork \
	git://github.com/docker/cli;branch=20.10;name=cli;destsuffix=git/cli \
	file://docker.init \
	file://0001-libnetwork-use-GO-instead-of-go.patch \
        file://0001-cli-use-external-GO111MODULE-and-cross-compiler.patch \
        file://0001-dynbinary-use-go-cross-compiler.patch \
	"

require docker.inc

# Apache-2.0 for docker
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=4859e97a9c7780e77972d989f0823f28"

DOCKER_VERSION = "20.10.6"
PV = "${DOCKER_VERSION}+git${SRCREV_moby}"

CVE_PRODUCT = "docker"
