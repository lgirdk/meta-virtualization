export sites="gotest.tools/v3:gotest.tools/v3:force \
           golang.org/x/sys:golang.org/x/sys:force \
           golang.org/x/net:golang.org/x/net:force \
           github.com/gofrs/flock:github.com/gofrs/flock:force \
           github.com/google/uuid:github.com/google/uuid:force \
           github.com/gorilla/mux:github.com/gorilla/mux:force \
           github.com/moby/vpnkit:github.com/moby/vpnkit:force \
           github.com/u-root/uio:github.com/u-root/uio:force \
           github.com/songgao/water:github.com/songgao/water:force \
           github.com/urfave/cli/v2:github.com/urfave/cli/v2:force \
           github.com/google/go-cmp:github.com/google/go-cmp:force \
           github.com/pierrec/lz4/v4:github.com/pierrec/lz4/v4:force \
           github.com/xrash/smetrics:github.com/xrash/smetrics:force \
           github.com/sirupsen/logrus:github.com/sirupsen/logrus:force \
           github.com/josharian/native:github.com/josharian/native:force \
           github.com/insomniacslk/dhcp:github.com/insomniacslk/dhcp:force \
           github.com/Masterminds/semver/v3:github.com/Masterminds/semver/v3:force \
           github.com/cpuguy83/go-md2man/v2:github.com/cpuguy83/go-md2man/v2:force \
           github.com/moby/sys/mountinfo:github.com/moby/sys/mountinfo/mountinfo:force \
           github.com/russross/blackfriday/v2:github.com/russross/blackfriday/v2:force \
           github.com/containernetworking/plugins:github.com/containernetworking/plugins:force"

do_compile:prepend() {
    cd ${S}/src/import
    for s in $sites; do
        site_dest=$(echo $s | cut -d: -f1)
        site_source=$(echo $s | cut -d: -f2)
        force_flag=$(echo $s | cut -d: -f3)
        mkdir -p vendor.copy/$site_dest
        if [ -n "$force_flag" ]; then
            echo "[INFO] $site_dest: force copying .go files"
            rm -rf vendor.copy/$site_dest
            rsync -a --exclude='vendor/' --exclude='.git/' vendor.fetch/$site_source/ vendor.copy/$site_dest
        else
            [ -n "$(ls -A vendor.copy/$site_dest/*.go 2> /dev/null)" ] && { echo "[INFO] vendor.fetch/$site_source -> $site_dest: go copy skipped (files present)" ; true ; } || { echo "[INFO] $site_dest: copying .go files" ; rsync -a --exclude='vendor/' --exclude='.git/' vendor.fetch/$site_source/ vendor.copy/$site_dest ; }
        fi
    done
}
