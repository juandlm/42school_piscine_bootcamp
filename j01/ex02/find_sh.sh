#!/bin/sh
basename $(find . -name "*.sh" -print) | sed -e 's/\.sh//g'
