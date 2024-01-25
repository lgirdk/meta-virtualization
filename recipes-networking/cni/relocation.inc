export sites="golang.org/x/net:golang.org/x/net:force \
           golang.org/x/sys:golang.org/x/sys:force \
           gopkg.in/yaml.v3:gopkg.in/yaml.v3:force \
           golang.org/x/text:golang.org/x/text:force \
           golang.org/x/tools:golang.org/x/tools:force \
           github.com/onsi/gomega:github.com/onsi/gomega:force \
           github.com/go-logr/logr:github.com/go-logr/logr:force \
           github.com/google/pprof:github.com/google/pprof:force \
           github.com/google/go-cmp:github.com/google/go-cmp:force \
           github.com/onsi/ginkgo/v2:github.com/onsi/ginkgo/v2:force \
           github.com/vishvananda/netns:github.com/vishvananda/netns:force \
           github.com/go-task/slim-sprig:github.com/go-task/slim-sprig:force \
           github.com/Masterminds/semver/v3:github.com/Masterminds/semver/v3:force"

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
