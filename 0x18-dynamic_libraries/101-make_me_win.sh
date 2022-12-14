#!/bin/bash
wget -P /tmp https://github.com/remmysilver/alx-low_level_programming/blob/650603c7e1bbe3087290cb79717d15e3c3ee35f8/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/iwin.so
