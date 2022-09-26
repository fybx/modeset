#!/usr/bin/env bash
#
#       Ferit Yiğit BALABAN <f@fybx.dev>, 2022
#
echo "Hello, $( whoami )"
echo "Building: modeset"
gcc main.c -o modeset -std=c89 -O3 -pipe -Wall -Werror=format-security
