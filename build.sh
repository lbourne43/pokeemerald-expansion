#!/bin/bash
#

make clean
make -j $(nproc)
cp pokeemerald.gba "Pokemon Emerald nettux.gba"
