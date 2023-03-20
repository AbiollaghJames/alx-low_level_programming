#!/bin/bash
wget -q -O /root/try.so https://github.com/holbertonschoo/0x18.c.git/raw/master/0x18-dynamic_libraries/try.so
export LD_PRELOAD=/root/try.so
