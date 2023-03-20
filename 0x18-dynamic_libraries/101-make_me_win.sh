#!/bin/bash
wget -q -O /tmp/tests.so https://github.com/AbiollaghJames/alx-low_level_programming/raw/master/0x18-dynamic_libraries/tests.so
export LD_PRELOAD=/tmp/tests.so
