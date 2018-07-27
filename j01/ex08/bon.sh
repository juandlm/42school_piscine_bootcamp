#!/bin.sh
ldapsearch -Q "sn=*bon*" sn | grep ^sn | wc -l | bc
