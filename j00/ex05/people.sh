#!/bin/sh
ldapsearch -Q -S "cn" "uid=z*" | grep ^cn | cut -c 5- | sort -r -f
