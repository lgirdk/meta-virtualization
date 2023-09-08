Description:

    oe-go-mod-autogen.py is a helper script for go mod recipes. It is based
    on intiial efforts to use only the git fetcher versus golangs module
    infrastructure.
    
    Example:

      cmd: <path_to>/meta-virtualization/scripts/oe-go-mod-autogen.py \
           --repo https://github.com/docker/compose --rev v2.20.3
      output: src_uri.inc, relocation.inc, modules.txt
    
    Copy these three generated files to replace the original ones,
    then we only need update PV and SRCREV, and docker-compose is upgraded.

    See --help for more explanations and examples.
    
    Below are some technical details.
    
    * get module's repo from module name
    
      This script checks the following two URLs to determine the module's repo.
      1. https://<module_name_tweaked>?=go-get=1
      2. https://pkg.go.dev/<module_name_tweaked>
    
      The module_name_tweaked is derived from module_name, with the last components
      removed one by one. Let me use two examples to explain this.
    
      For module_name sigs.k8s.io/json, the sigs.k8s.io/json is first used as
      module_name_tweaked for searching. And we can correctly get the repo URL, so
      the search stops.
    
      For module_name github.com/k3s-io/etcd/api/v3, the following ones are used
      as module_name_tweaked:
      github.com/k3s-io/etcd/api/v3
      github.com/k3s-io/etcd/api
      github.com/k3s-io/etcd
      And when searching 'github.com/k3s-io/etcd', we get the repo URL, so the search
      stops.
    
    * determine the srcdir:destdir mapping in 'vendor' creation
    
      To correctly form the 'vendor' directory, the mapping is critical.
      This script makes use of tag matching and path matching to determine
      the subpath in the repo for the module.
    
    * avoid subpath being overriden by parent path
    
      We need to avoid subpath being overriden by parent path. This is needed
      for both SRC_URI ordering in src_uri.inc and the sites mapping ordering
      in relocation.inc. This script simply uses the length as the ordering key,
      simply for the reason that if a path is a subpath of another path, it must
      be longer.
    
    * the .git suffix is removed to sync with each other
    
      Unlike normal recipes, go mod recipe usually have many SRC_URIs. This script
      remove the '.git' suffix from repo URL so that the repo URLs are in sync
      with each.
    
    * basic directory hierarchy and caching mechanism
    
      <cwd>/repos: hold the repos downloaded and checked
      <cwd>/wget-contents: hold the contents to determine the module's repo
      <cwd>/wget-contents/<module_name>.repo_url.cache: the repo value cache
      This is to avoid unnecessary URL fetching and repo cloning.
    
    * the ERROR_OUT_ON_FETCH_AND_CHECKOUT_FAILURE switch in script
    
      The script must get the correct repo_url, fullsrc_rev and subpath for
      each required module in go.mod to correctly generate the src_uri.inc and
      relocation.inc files. If this process fails for any required module, this
      script stop immediately, as I deliberately set ERROR_OUT_ON_FETCH_AND_CHECKOUT_FAILURE
      to True in this script. The purpose is to encourage people to report
      problems to meta-virt so that we can improve this script according to
      these feedbacks. But this variable can set to False, then the script
      only records the failed modules in self.modules_unhandled with reasons
      added, people can modify the generated src_uri.inc and relocation.inc
      to manually handle these unhandled modules if they are urgent to
      add/upgrade some go mod recipes.
    
