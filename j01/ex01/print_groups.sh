#!/bin/sh
printf $(groups $FT_USER | sed -e 's/ /,/g')
