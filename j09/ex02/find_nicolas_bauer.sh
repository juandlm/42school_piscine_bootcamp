#!/bin/sh
cat $1 | grep -i "Nicolas	Bauer" | grep '[0-9]\{3\}-[0-9]\{4\}' | cut -c 26- | cut -c -13
