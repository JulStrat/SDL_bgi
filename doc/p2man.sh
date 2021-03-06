#!/bin/sh

if [ $# -eq 0 ] ; then
  printf "Usage: p2man FILE.3.md\n"
  exit 1
fi


FILE=$(basename $1 .3.md)
pandoc -s -t man $FILE.3.md -o $FILE.3

