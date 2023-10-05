#!/usr/bin/env python3

# SPDX-License-Identifier: GPL-2.0-only
#
# go-dep processor
#
# Copyright (C) 2022 Bruce Ashfield
# Copyright (C) 2023 Chen Qi
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

import os
import sys
import logging
import argparse
from collections import OrderedDict
import subprocess
import textwrap

# This switch is used to make this script error out ASAP, mainly for debugging purpose
ERROR_OUT_ON_FETCH_AND_CHECKOUT_FAILURE = True

logger = logging.getLogger('oe-go-mod-autogen')
loggerhandler = logging.StreamHandler()
loggerhandler.setFormatter(logging.Formatter("%(levelname)s: %(message)s"))
logger.addHandler(loggerhandler)
logger.setLevel(logging.INFO)

class GoModTool(object):
    def __init__(self, repo, rev, workdir):
        self.repo = repo
        self.rev = rev
        self.workdir = workdir

        # Stores the actual module name and its related information
        # {module: (repo_url, repo_dest_dir, fullsrcrev)}
        self.modules_repoinfo = {}

        # {module_name: (url, version, destdir, fullsrcrev)}
        #
        # url: place to get the source codes, we only support git repo
        # version: module version, git tag or git rev
        # destdir: place to put the fetched source codes
        # fullsrcrev: full src rev which is the value of SRC_REV
        #
        # e.g.
        # For 'github.com/Masterminds/semver/v3 v3.1.1' in go.mod:
        # module_name = github.com/Masterminds/semver/v3
        # url = https://github.com/Masterminds/semver
        # version = v3.1.1
        # destdir = ${WORKDIR}/${BP}/src/${GO_IMPORT}/vendor/github.com/Masterminds/semver/v3
        # fullsrcrev = d387ce7889a157b19ad7694dba39a562051f41b0
        self.modules_require = OrderedDict()

        # {orig_module: (actual_module, actual_version)}
        self.modules_replace = OrderedDict()

        # Unhandled modules
        self.modules_unhandled = OrderedDict()

        # store subpaths used to form srcpath
        # {actual_module_name: subpath}
        self.modules_subpaths = OrderedDict()

        # modules's actual source paths, record those that are not the same with the module itself
        self.modules_srcpaths = OrderedDict()

        # store lines, comment removed
        self.require_lines = []
        self.replace_lines = []

        # fetch repo
        self.fetch_and_checkout_repo(self.repo.split('://')[1], self.repo, self.rev, checkout=True, get_subpath=False)

    def show_go_mod_info(self):
        # Print modules_require, modules_replace and modules_unhandled
        print("modules required:")
        for m in self.modules_require:
            url, version, destdir, fullrev = self.modules_require[m]
            print("%s %s %s %s" % (m, version, url, fullrev))

        print("modules replace:")
        for m in self.modules_replace:
            actual_module, actual_version = self.modules_replace[m]
            print("%s => %s %s" % (m, actual_module, actual_version))

        print("modules unhandled:")
        for m in self.modules_unhandled:
            reason = self.modules_unhandled[m]
            print("%s unhandled: %s" % (m, reason))

    def parse(self):
        # check if this repo needs autogen
        repo_url, repo_dest_dir, repo_fullrev = self.modules_repoinfo[self.repo.split('://')[1]]
        if os.path.isdir(os.path.join(repo_dest_dir, 'vendor')):
            logger.info("vendor direcotry has already existed for %s, no need to add other repos" % self.repo)
            return
        go_mod_file = os.path.join(repo_dest_dir, 'go.mod')
        if not os.path.exists(go_mod_file):
            logger.info("go.mod file does not exist for %s, no need to add otehr repos" % self.repo)
            return
        self.parse_go_mod(go_mod_file)
        self.show_go_mod_info()

    def fetch_and_checkout_repo(self, module_name, repo_url, rev, default_protocol='https://', checkout=False, get_subpath=True):
        """
        Fetch repo_url to <workdir>/repos/repo_base_name
        """
        protocol = default_protocol
        if '://' in repo_url:
            repo_url_final = repo_url
        else:
            repo_url_final = default_protocol + repo_url
        logger.debug("fetch and checkout %s %s" % (repo_url_final, rev))
        repos_dir = os.path.join(self.workdir, 'repos')
        if not os.path.exists(repos_dir):
            os.makedirs(repos_dir)
        repo_basename = repo_url.split('/')[-1].split('.git')[0]
        repo_dest_dir = os.path.join(repos_dir, repo_basename)
        module_last_name = module_name.split('/')[-1]
        git_action = "fetch"
        if os.path.exists(repo_dest_dir):
            if checkout:
                # check if current HEAD is rev
                try:
                    headrev = subprocess.check_output('git rev-list -1 HEAD', shell=True, cwd=repo_dest_dir).decode('utf-8').strip()
                    requiredrev = subprocess.check_output('git rev-list -1 %s 2>/dev/null || git rev-list -1 %s/%s' % (rev, module_last_name, rev), shell=True, cwd=repo_dest_dir).decode('utf-8').strip()
                    if headrev == requiredrev:
                        logger.info("%s has already been fetched and checked out as required, skipping" % repo_url)
                        self.modules_repoinfo[module_name] = (repo_url, repo_dest_dir, requiredrev)
                        return
                    else:
                        logger.info("HEAD of %s is not %s, will do a clean clone" % (repo_dest_dir, requiredrev))
                        git_action = "clone"
                except:
                    logger.info("'git rev-list' in %s failed, will do a clean clone" % repo_dest_dir)
                    git_action = "clone"
            else:
                # determine if the current repo points to the desired remote repo
                try:
                    remote_origin_url = subprocess.check_output('git config --get remote.origin.url', shell=True, cwd=repo_dest_dir).decode('utf-8').strip()
                    if remote_origin_url.endswith('.git'):
                        if not repo_url_final.endswith('.git'):
                            remote_origin_url = remote_origin_url[:-4]
                    else:
                        if repo_url_final.endswith('.git'):
                            remote_origin_url = remote_origin_url + '.git'
                    if remote_origin_url != repo_url_final:
                        logger.info("remote.origin.url for %s is not %s, will do a clean clone" % (repo_dest_dir, repo_url_final))
                        git_action = "clone"
                except:
                    logger.info("'git config --get remote.origin.url' in %s failed, will do a clean clone" % repo_dest_dir)
                    git_action = "clone"
        else:
            # No local repo, clone it.
            git_action = "clone"

        if git_action == "clone":
            logger.info("Removing %s" % repo_dest_dir)
            subprocess.check_call('rm -rf %s' % repo_dest_dir, shell=True)

        # clone/fetch repo
        try:
            git_cwd = repos_dir if git_action == "clone" else repo_dest_dir
            logger.info("git %s %s in %s" % (git_action, repo_url_final, git_cwd))
            subprocess.check_call('git %s %s >/dev/null 2>&1' % (git_action, repo_url_final), shell=True, cwd=git_cwd)
        except:
            logger.warning("Failed to %s %s in %s" % (git_action, repo_url_final, git_cwd))
            return

        def get_requiredrev(get_subpath):
            import re
            # check if rev is a revision or a version
            if len(rev) == 12 and re.match('[0-9a-f]+', rev):
                rev_is_version = False
            else:
                rev_is_version = True

            # if rev is not a version, 'git rev-list -1 <rev>' should just succeed!
            if not rev_is_version:
                try:
                    rev_return = subprocess.check_output('git rev-list -1 %s 2>/dev/null' % rev, shell=True, cwd=repo_dest_dir).decode('utf-8').strip()
                    if get_subpath:
                        cmd = 'git branch -M toremove && git checkout -b check_subpath %s && git branch -D toremove' % rev_return
                        subprocess.check_call(cmd, shell=True, cwd=repo_dest_dir)
                        # try to get the subpath for this module
                        module_name_parts = module_name.split('/')
                        while (len(module_name_parts) > 0):
                            subpath = '/'.join(module_name_parts)
                            dir_to_check = repo_dest_dir + '/' + '/'.join(module_name_parts)
                            if os.path.isdir(dir_to_check):
                                self.modules_subpaths[module_name] = subpath
                                break
                            else:
                                module_name_parts.pop(0)
                    return rev_return
                except:
                    logger.warning("Revision (%s) not in repo(%s)" % (rev, repo_dest_dir))
                    return None

            # the following codes deals with case where rev is a version
            # determine the longest match tag, in this way, we can get the current srcpath to be used in relocation.inc
            # we first get the initial tag, which is formed from module_name and rev
            module_parts = module_name.split('/')
            if rev.startswith(module_parts[-1] + '.'):
                tag = '/'.join(module_parts[:-1]) + '/' + rev
                last_module_part_replaced = True
            else:
                tag = '/'.join(module_parts) + '/' + rev
                last_module_part_replaced = False
            logger.debug("use %s as the initial tag for %s" % (tag, module_name))
            tag_parts = tag.split('/')
            while(len(tag_parts) > 0):
                try:
                    rev_return = subprocess.check_output('git rev-list -1 %s 2>/dev/null' % tag, shell=True, cwd=repo_dest_dir).decode('utf-8').strip()
                    if len(tag_parts) > 1:
                        # ensure that the subpath exists
                        if get_subpath:
                            cmd = 'git branch -M toremove && git checkout -b check_subpath %s && git branch -D toremove' % rev_return
                            subprocess.check_call(cmd, shell=True, cwd=repo_dest_dir)
                            # get subpath for the actual_module_name
                            if last_module_part_replaced:
                                subpath = '/'.join(tag_parts[:-1]) + '/' + module_parts[-1]
                                if not os.path.isdir(repo_dest_dir + '/' + subpath):
                                    subpath = '/'.join(tag_parts[:-1])
                            else:
                                subpath = '/'.join(tag_parts[:-1])
                            if not os.path.isdir(repo_dest_dir + '/' + subpath):
                                logger.warning("subpath (%s) derived from tag matching does not exist in %s" % (subpath, repo_dest_dir))
                                return None
                            self.modules_subpaths[module_name] = subpath
                            logger.info("modules_subpath[%s] = %s" % (module_name, subpath))
                    return rev_return
                except:
                    tag_parts.pop(0)
                    tag = '/'.join(tag_parts)
            logger.warning("No tag matching %s" % rev)
            return None

        requiredrev = get_requiredrev(get_subpath)
        if requiredrev:
            logger.info("Got module(%s) requiredrev: %s" % (module_name, requiredrev))
            if checkout:
                subprocess.check_call('git checkout -b gomodautogen %s' % requiredrev, shell=True, cwd=repo_dest_dir)
            self.modules_repoinfo[module_name] = (repo_url, repo_dest_dir, requiredrev)
        else:
            logger.warning("Failed to get requiredrev, repo_url = %s, rev = %s, module_name = %s" % (repo_url, rev, module_name))

    def parse_go_mod(self, go_mod_path):
        """
        Parse go.mod file to get the modules info
        """
        # First we get the require and replace lines
        # The parsing logic assumes the replace lines come *after* the require lines
        inrequire = False
        inreplace = False
        with open(go_mod_path, 'r') as f:
            lines = f.readlines()
            for line in lines:
                if line.startswith('require ('):
                    inrequire = True
                    continue
                if line.startswith(')'):
                    inrequire = False
                    continue
                if line.startswith('require ') or inrequire:
                    # we have one line require
                    require_line = line.lstrip('require ').split('//')[0].strip()
                    if require_line:
                        self.require_lines.append(require_line)
                    continue
                # we can deal with requires and replaces separately because go.mod always writes requires before replaces
                if line.startswith('replace ('):
                    inreplace = True
                    continue
                if line.startswith(')'):
                    inreplace = False
                    continue
                if line.startswith('replace ') or inreplace:
                    replace_line = line.lstrip('replace ').split('//')[0].strip()
                    if replace_line:
                        self.replace_lines.append(replace_line)
                    continue
        #
        # parse the require_lines and replace_lines to form self.modules_require and self.modules_replace
        #
        logger.debug("Parsing require_lines and replace_lines ...")
        # A typical replace line is as below:
        #   github.com/hashicorp/golang-lru => github.com/ktock/golang-lru v0.5.5-0.20211029085301-ec551be6f75c
        # It means that the github.com/hashicorp/golang-lru module is replaced by github.com/ktock/golang-lru
        # with the version 'v0.5.5-0.20211029085301-ec551be6f75c'.
        # So the destdir is vendor/github.com/hashicorp/golang-lru while the contents are from github.com/ktock/golang-lru
        for line in self.replace_lines:
            orig_module, actual = line.split('=>')
            actual_module, actual_version = actual.split()
            orig_module = orig_module.strip()
            actual_module = actual_module.strip()
            actual_version = actual_version.strip()
            self.modules_replace[orig_module] = (actual_module, actual_version)
        #
        # Typical require lines are as below:
        #   github.com/Masterminds/semver/v3 v3.1.1
        #   golang.org/x/crypto v0.0.0-20220321153916-2c7772ba3064
        #
        # We need to first try https://<module_name>?=go-get=1 to see it contains
        # line starting with '<meta name="go-import" content='.
        #
        # If so, get root-path vcs repo-url from content. See https://go.dev/ref/mod#vcs-find
        # For example, the above 'wget https://golang.org/x/crypto?go-get=1' gives you
        # <meta name="go-import" content="golang.org/x/crypto git https://go.googlesource.com/crypto">
        # In such case, the self.modules_require has the following contents:
        # module_name: golang.org/x/crypto
        # url: https://go.googlesource.com/crypto
        # version: v0.0.0-20220321153916-2c7772ba3064
        # destdir: ${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/crypto
        # fullsrcrev: 2c7772ba30643b7a2026cbea938420dce7c6384d (git rev-list -1 2c7772ba3064)
        #
        # If not, try https://pkg.go.dev/<module_name>, and find the 'Repository'.
        # For example, 'wget https://pkg.go.dev/github.com/Masterminds/semver/v3' gives:
        # github.com/Masterminds/semver
        # In such case, the self.modules has the following contents:
        # module_name: github.com/Masterminds/semver/v3
        # url: https://github.com/Masterminds/semver
        # version: v3.1.1
        # destdir: ${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/Masterminds/semver/v3
        # fullsrcrev: 7bb0c843b53d6ad21a3f619cb22c4b442bb3ef3e (git rev-list -1 v3.1.1)
        #
        # As a last resort, if the last component of <module_name> matches 'v[0-9]+',
        # remove the last component and try wget https://<module_name_with_last_component_removed>?go-get=1,
        # then try using the above matching method.
        #
        for line in self.require_lines:
            module_name, version = line.strip().split()
            logger.debug("require line: %s" % line)
            logger.debug("module_name = %s; version = %s" % (module_name, version))
            # take the modules_replace into consideration to get the actual version and actual module name
            # note that the module_name is used in destdir, and the actual_module_name and actual_version
            # are used to determine the url and fullsrcrev
            destdir = '${WORKDIR}/${BP}/src/import/vendor.fetch/%s' % module_name
            actual_module_name = module_name
            actual_version = version
            if module_name in self.modules_replace:
                actual_module_name, actual_version = self.modules_replace[module_name]
            logger.debug("actual_module_name = %s; actual_version = %s" % (actual_module_name, actual_version))
            url, fullsrcrev = self.get_url_srcrev(actual_module_name, actual_version)
            logger.debug("url = %s; fullsrcrev = %s" % (url, fullsrcrev))
            if url and fullsrcrev:
                self.modules_require[module_name] = (url, version, destdir, fullsrcrev)
                # form srcpath, actual_module_name/<subpath>
                if actual_module_name in self.modules_subpaths:
                    subpath = self.modules_subpaths[actual_module_name]
                    srcpath = '%s/%s' % (actual_module_name, subpath)
                    self.modules_srcpaths[module_name] = srcpath
                    logger.info("self.modules_srcpaths[%s] = %s" % (module_name, srcpath))
                else:
                    self.modules_srcpaths[module_name] = actual_module_name
            else:
                logger.warning("get_url_srcrev(%s, %s) failed" % (actual_module_name, actual_version))
                if ERROR_OUT_ON_FETCH_AND_CHECKOUT_FAILURE:
                    sys.exit(1)

    def use_wget_to_get_repo_url(self, wget_content_file, url_cache_file, module_name):
        """
        Use wget to get repo_url for module_name, return None if not found
        """
        try:
            logger.info("wget -O %s https://%s?=go-get=1" % (wget_content_file, module_name))
            subprocess.check_call('wget -O %s https://%s?=go-get=1' % (wget_content_file, module_name), shell=True)
            with open(wget_content_file, 'r') as f:
                for line in f.readlines():
                    if '<meta name="go-import" content=' in line:
                        logger.info("Succeed to find go-import content for %s" % module_name)
                        logger.debug("The line is %s" % line)
                        root_path, vcs, repo_url = line.split('content=')[1].split('"')[1].split()
                        logger.info("%s: %s %s %s" % (module_name, root_path, vcs, repo_url))
                        if vcs != 'git':
                            logger.warning('%s unhandled as its vcs is %s which is not supported by this script.' % (module_name, vcs))
                            unhandled_reason = 'vcs %s is not supported by this script' % vcs
                            self.modules_unhandled[module_name] = unhandled_reason
                            return None
                        with open(url_cache_file, 'w') as f:
                            f.write(repo_url)
                        return repo_url
        except:
            logger.info("wget -O %s https://%s?=go-get=1 failed" % (wget_content_file, module_name))
        # if we cannot find repo url from https://<module_name>?=go-get=1, try https://pkg.go/dev/<module_name>
        try:
            logger.info("wget -O %s https://pkg.go.dev/%s" % (wget_content_file, module_name))
            subprocess.check_call("wget -O %s https://pkg.go.dev/%s" % (wget_content_file, module_name), shell=True)
            repo_url_found = False
            with open(wget_content_file, 'r') as f:
                in_repo_section = False
                for line in f.readlines():
                    if '>Repository<' in line:
                        in_repo_section = True
                        continue
                    if in_repo_section:
                        newline = line.strip()
                        if newline != '' and not newline.startswith('<'):
                            repo_url = newline
                            repo_url_found = True
                            break
            if repo_url_found:
                logger.info("repo url for %s: %s" % (module_name, repo_url))
                with open(url_cache_file, 'w') as f:
                    f.write(repo_url)
                return repo_url
            else:
                unhandled_reason = 'cannot determine repo_url for %s' % module_name
                self.modules_unhandled[module_name] = unhandled_reason
                return None
        except:
            logger.info("wget -O %s https://pkg.go.dev/%s failed" % (wget_content_file, module_name))
            return None


    def get_repo_url_rev(self, module_name, version):
        """
        Return (repo_url, rev)
        """
        import re
        # First get rev from version
        v = version.split('+incompatible')[0]
        version_components = v.split('-')
        if len(version_components) == 1:
            rev = v
        elif len(version_components) == 3:
            if len(version_components[2]) == 12:
                rev = version_components[2]
            else:
                rev = v
        else:
            rev = v

        #
        # Get repo_url
        # We put a cache mechanism here, <wget_content_file>.repo_url.cache is used to store the repo url fetch before
        #
        wget_dir = os.path.join(self.workdir, 'wget-contents')
        if not os.path.exists(wget_dir):
            os.makedirs(wget_dir)
        wget_content_file = os.path.join(wget_dir, module_name.replace('/', '_'))
        url_cache_file = "%s.repo_url.cache" % wget_content_file
        if os.path.exists(url_cache_file):
            with open(url_cache_file, 'r') as f:
                repo_url = f.readline().strip()
                return (repo_url, rev)
        module_name_parts = module_name.split('/')
        while (len(module_name_parts) > 0):
            module_name_to_check = '/'.join(module_name_parts)
            logger.info("module_name_to_check: %s" % module_name_to_check)
            repo_url = self.use_wget_to_get_repo_url(wget_content_file, url_cache_file, module_name_to_check)
            if repo_url:
                return (repo_url, rev)
            else:
                if module_name in self.modules_unhandled:
                    return (None, rev)
                else:
                    module_name_parts.pop(-1)

        unhandled_reason = 'cannot determine the repo for %s' % module_name
        self.modules_unhandled[module_name] = unhandled_reason
        return (None, rev)

    def get_url_srcrev(self, module_name, version):
        """
        Return url and fullsrcrev according to module_name and version
        """
        repo_url, rev = self.get_repo_url_rev(module_name, version)
        if not repo_url or not rev:
            return (None, None)
        self.fetch_and_checkout_repo(module_name, repo_url, rev)
        if module_name in self.modules_repoinfo:
            repo_url, repo_dest_dir, repo_fullrev = self.modules_repoinfo[module_name]
            # remove the .git suffix to sync repos across modules with different versions and across recipes
            if repo_url.endswith('.git'):
                repo_url = repo_url[:-len('.git')]
            return (repo_url, repo_fullrev)
        else:
            unhandled_reason = 'fetch_and_checkout_repo(%s, %s, %s) failed' % (module_name, repo_url, rev)
            self.modules_unhandled[module_name] = unhandled_reason
            return (None, None)

    def gen_src_uri_inc(self):
        """
        Generate src_uri.inc file containing SRC_URIs
        """
        src_uri_inc_file = os.path.join(self.workdir, 'src_uri.inc')
        # record the <name> after writting SRCREV_<name>, this is to avoid modules having the same basename resulting in same SRCREV_xxx
        srcrev_name_recorded = []
        template = """#       %s %s
# [1] git ls-remote %s %s
SRCREV_%s="%s"
SRC_URI += "git://%s;name=%s;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/%s"

"""
        # We can't simply write SRC_URIs one by one in the order that go.mod specify them.
        # Because the latter one might clean things up for the former one if the former one is a subpath of the latter one.
        def take_first_len(elem):
            return len(elem[0])

        src_uri_contents = []
        with open(src_uri_inc_file, 'w') as f:
            for module in self.modules_require:
                # {module_name: (url, version, destdir, fullsrcrev)}
                repo_url, version, destdir, fullrev = self.modules_require[module]
                if module in self.modules_replace:
                    actual_module_name, actual_version = self.modules_replace[module]
                else:
                    actual_module_name, actual_version = (module, version)
                if '://' in repo_url:
                    repo_url_noprotocol = repo_url.split('://')[1]
                else:
                    repo_url_noprotocol = repo_url
                if not repo_url.startswith('https://'):
                    repo_url = 'https://' + repo_url
                name = module.split('/')[-1]
                if name in srcrev_name_recorded:
                    name = '-'.join(module.split('/')[-2:])
                src_uri_contents.append((actual_module_name, actual_version, repo_url, fullrev, name, fullrev, repo_url_noprotocol, name, actual_module_name))
                srcrev_name_recorded.append(name)
            # sort the src_uri_contents and then write it
            src_uri_contents.sort(key=take_first_len)
            for content in src_uri_contents:
                f.write(template % content)
        logger.info("%s generated" % src_uri_inc_file)

    def gen_relocation_inc(self):
        """
        Generate relocation.inc file
        """
        relocation_inc_file = os.path.join(self.workdir, 'relocation.inc')
        template = """export sites="%s"

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
"""
        sites = []
        for module in self.modules_require:
            # <dest>:<source>[:force]
            if module in self.modules_srcpaths:
                srcpath = self.modules_srcpaths[module]
                logger.debug("Using %s as srcpath of module (%s)" % (srcpath, module))
            else:
                srcpath = module
            sites.append("%s:%s:force" % (module, srcpath))
        # To avoid the former one being overriden by the latter one when the former one is a subpath of the latter one, sort sites
        sites.sort(key=len)
        with open(relocation_inc_file, 'w') as f:
            sites_str = ' \\\n           '.join(sites)
            f.write(template % sites_str)
        logger.info("%s generated" % relocation_inc_file)

    def gen_modules_txt(self):
        """
        Generate modules.txt file
        """
        modules_txt_file = os.path.join(self.workdir, 'modules.txt')
        with open(modules_txt_file, 'w') as f:
            for l in self.require_lines:
                f.write('# %s\n' % l)
                f.write('## explicit\n')
            for l in self.replace_lines:
                f.write('# %s\n' %l)
        logger.info("%s generated" % modules_txt_file)

    def sanity_check(self):
        """
        Various anity checks
        """
        sanity_check_ok = True
        #
        # Sanity Check 1:
        #     For modules having the same repo, at most one is allowed to not have subpath.
        #     This check operates on self.modules_repoinfo and self.modules_subpaths
        #
        repo_modules = {}
        for module in self.modules_repoinfo:
            # first form {repo: [module1, module2, ...]}
            repo_url, repo_dest_dir, fullsrcrev = self.modules_repoinfo[module]
            if repo_url not in repo_modules:
                repo_modules[repo_url] = [module]
            else:
                repo_modules[repo_url].append(module)
        for repo in repo_modules:
            modules = repo_modules[repo]
            if len(modules) == 1:
                continue
            # for modules sharing the same repo, at most one is allowed to not have subpath
            nosubpath_modules = []
            for m in modules:
                if m not in self.modules_subpaths:
                    nosubpath_modules.append(m)
            if len(nosubpath_modules) == 0:
                continue
            if len(nosubpath_modules) > 1:
                logger.warning("Multiple modules sharing %s, but they don't have subpath: %s. Please double check." % (repo, nosubpath_modules))
            if len(nosubpath_modules) == 1:
                # do further check, OK if the module is the prefix for other modules sharing the same repo
                module_to_check = nosubpath_modules[0]
                for m in modules:
                    if module_to_check == m:
                        continue
                    if not m.startswith('%s/' % module_to_check):
                        logger.warning("%s is sharing repo (%s) with other modules, and it might need a subpath. Please double check: %s and: %s" % (module_to_check, repo, nosubpath_modules,m))
                        continue

        #
        # End of Sanity Check
        #
        if not sanity_check_ok:
            sys.exit(1)
        return

def main():
    parser = argparse.ArgumentParser(
        description="go mod dependency -> SRC_URI procesing",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=textwrap.dedent('''\

        Overview:
        =========

          go-mod-oe is a tool for processing go dependencies to generate
          dependencies suitable for OE fetcher consumption.

          In particular, it creates a build structure suitable for
          '-mod="vendor"' go builds. Once complete all go mod dependencies
          are in the vendor/ directory, so no golang specific fetching or
          network access happens during the build.

          The files src_uri.inc, relocation.inc and modules.txt are generated
          and suitable for recipe inclusion.

          A recipe build can then use these files to leverage the git fetcher
          and related functionality (mirrors, sstate, etc).

          Note 1: --rev does not have to be a tag, if you want to track the tip of
                  a branch specify the latest git has on that branch, and it will
                  be used.

          Note 2: This script does not generate an entire recipe, the way the
                  the outputs are used can be modified as required.

          Note 3: if a go.mod has a bad revision, or needs to be manually updated
                  to fetch fixes: go.mod in the main repository (see the repos/
                  directory). If go.mod is edited, modules.txt also has to be
                  updated to match the revision information.

        How to use in a recipe:
        =======================

        There are examples in meta-virtualization of recipes that use this
        script and stragegy for builds: docker-compose, nerdcli, k3s

          1) The recipe should set the master repository SRCREV details, and then include
             the src_uri.inc file:

               SRCREV_nerdcli = "e084a2df4a8861eb5f0b0d32df0643ef24b81093"
               SRC_URI = "git://github.com/containerd/nerdctl.git;name=nerdcli;branch=master;protocol=https"

               include src_uri.inc

            This results in the SRC_URI being fully populated with the main
            repository and all dependencies.

          2) The recipe should either copy, or include the relocation.inc file. It sets
             a variable "sites" that is a list of source locations (where the src_uri.inc
             fetches) and destination in a vendor directory, it also has a do_compile:prepend()
             that contains a loop which relocates the fetches into a vendor.copy directory.

             It is expected to be processed as follows, before compilation starts:

                # sets the "sites" variable and copies files
                include relocation.inc

             The do_compile:prepend, contains the following loop:

               cd ${S}/src/import
               # this moves all the fetches into the proper vendor structure
               # expected for build
               for s in ${sites}; do
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

            The main compile() function, should set the appropriate GO variables,
            copy modules.txt and build the appripriate target:

               # our copied .go files are to be used for the build
               ln -sf vendor.copy vendor

           3) The modules.txt file should be copied into the recipe directory, included
              on the SRC_URI and copied into place after the relocation has been
              processed.

               # patches and config
               SRC_URI += "file://0001-Makefile-allow-external-specification-of-build-setti.patch \\
                           file://modules.txt \
                          "

            .....

               cp ${WORKDIR}/modules.txt vendor/

        Example: Updating the K3S recipe
        ================================

          % cd meta-virtualization/recipe-containers/k3s/
          # produces src_uri.inc, relocation.inc and modules.txt in the current directory
          % ../../scripts/oe-go-mod-autogen.py --repo https://github.com/rancher/k3s.git --rev v1.27.5+k3s1

          % cp modules.txt k3s/

          ... add and commit files.


        '''))
    parser.add_argument("--repo", help = "Repo for the recipe.", required=True)
    parser.add_argument("--rev", help = "Revision for the recipe.", required=True)
    parser.add_argument("--module", help = "Go module name. To be used with '--test'")
    parser.add_argument("--version", help = "Go module version. To be used with '--test'")
    parser.add_argument("--test", help = "Test to get repo url and fullsrcrev, used together with --module and --version.", action="store_true")
    parser.add_argument("--workdir", help = "Working directory to hold intermediate results and output.", default=os.getcwd())
    parser.add_argument("-d", "--debug",
                        help = "Enable debug output",
                        action="store_const", const=logging.DEBUG, dest="loglevel", default=logging.INFO)
    parser.add_argument("-q", "--quiet",
                        help = "Hide all output except error messages",
                        action="store_const", const=logging.ERROR, dest="loglevel")
    parser.add_argument("-v", action='store_true', dest="verbose",
                        help="verbose")

    args = parser.parse_args()

    if args.verbose:
        args.loglevel = args.verbose
    args = parser.parse_args()

    logger.setLevel(args.loglevel)
    logger.debug("oe-go-mod-autogen.py running for %s:%s in %s" % (args.repo, args.rev, args.workdir))
    gomodtool = GoModTool(args.repo, args.rev, args.workdir)
    if args.test:
        if not args.module or not args.version:
            print("Please specify --module and --version")
            sys.exit(1)
        url, srcrev = gomodtool.get_url_srcrev(args.module, args.version)
        print("url = %s, srcrev = %s" % (url, srcrev))
        if not url or not srcrev:
            print("Failed to get url & srcrev for %s:%s" % (args.module, args.version))
    else:
        gomodtool.parse()
        gomodtool.sanity_check()
        gomodtool.gen_src_uri_inc()
        gomodtool.gen_relocation_inc()
        gomodtool.gen_modules_txt()


if __name__ == "__main__":
    try:
        ret = main()
    except Exception as esc:
        ret = 1
        import traceback
        traceback.print_exc()
    sys.exit(ret)
