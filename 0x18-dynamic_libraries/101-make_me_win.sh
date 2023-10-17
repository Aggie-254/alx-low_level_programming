#!/bin/bash
wget https://raw.githubusercontent.com/Aggie-254/alx-low_level_programming/master/0x18-dynamic_libraries/librand.so -O ../librand.so
export LD_PRELOAD="../librand.so"
