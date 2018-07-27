#!/bin/sh
cat /etc/passwd | grep -v '^#' | sed 'n;d' | rev | sort -r | awk -F: '{if( NR >= '$FT_LINE1' && NR <= '$FT_LINE2' ) print $NF}' | paste -sd, - | sed -e 's/,/, /g;s/$/./g' | tr -d '\n'
