#!/bin/sh
touch -A -000001 bomb.txt | stat bomb.txt | awk '{print $11}'
