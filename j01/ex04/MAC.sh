#!/bin/sh
ifconfig | grep 'ether ' | sed -e 's/ether//g;s/ //g' | tr -d '\t'
