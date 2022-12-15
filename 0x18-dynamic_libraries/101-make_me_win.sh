#!/bin/bash
wget -P /tmp https://github.com/AchiraALX/alx-low_level_programming/raw/master/0x18-dynamic_libraries/giga_win.so
export LD_PRELOAD=/tmp/giga_win.so
