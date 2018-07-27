#!/bin/sh
output=$( ifconfig | grep "inet " | awk '{print $2}' )
if test -z "$output"
then
	echo "I am lost!"
else
	echo $output | tr ' ' '\n'
fi
