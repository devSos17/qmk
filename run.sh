#!/bin/bash
#
qmk json2c ./sofle_rev1_s1.json -o ./keyboards/sofle/keymaps/s1/keymap.c

cat ./keyboards/sofle/keymaps/s1/extra.c >> ./keyboards/sofle/keymaps/s1/keymap.c

qmk compile || exit 1

read -p "contiue ?"

qmk flash

read -p "second "

qmk flash
