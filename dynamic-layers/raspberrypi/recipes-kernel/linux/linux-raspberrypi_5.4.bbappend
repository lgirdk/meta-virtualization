FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI += " \
    file://0001-swiotlb-xen-use-vmalloc_to_page-on-vmalloc-virt-addr.patch \
    file://0002-swiotlb-xen-remove-start_dma_addr.patch \
    file://0003-swiotlb-xen-add-struct-device-parameter-to-xen_phys_.patch \
    file://0004-swiotlb-xen-add-struct-device-parameter-to-xen_bus_t.patch \
    file://0007-swiotlb-xen-add-struct-device-parameter-to-is_xen_sw.patch \
    file://0008-swiotlb-xen-introduce-phys_to_dma-dma_to_phys-transl.patch \
    file://0009-xen-arm-introduce-phys-dma-translations-in-xen_dma_s_kernel_5.4.patch \
    file://0010-xen-arm-call-dma_to_phys-on-the-dma_addr_t-parameter.patch \
    file://0011-adding-page-coherent-patch.patch \
    "

# Add support for virtio.scc which linux-yocto_virtualization adds
SRCREV_meta = "aafb8f095e97013d6e55b09ed150369cbe0c6476"
SRC_URI_append += " \
    git://git.yoctoproject.org/yocto-kernel-cache;type=kmeta;name=meta;branch=yocto-5.4;destsuffix=kernel-meta \
    "
