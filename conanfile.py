#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
from conans import ConanFile

class GcemConan(ConanFile):
    name = "gcem"
    license = "Apache-2.0"
    url = "https://github.com/kthohr/gcem"
    author = "Keith O'Hara"
    version = "1.8.1"
    description = "A C++ compile-time math library using generalized constant expressions"
    homepage = "https://www.kthohr.com/gcem.html"
    topics = ("constexpr", "math")
    no_copy_source = True
    scm = {
        "type": "git",
        "url": "auto",
        "revision": "auto"
    }
    
    def package(self):
        self.copy("LICENSE", "licenses")
        self.copy("*.hpp", dst="include/kthohr", src="include", keep_path=True)
    
    def package_id(self):
        self.info.header_only()
