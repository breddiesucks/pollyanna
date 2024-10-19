#/bin/bash

touch sampleseed.txt

gcc -g -o main main.c funcEncrypt.c funcStrings.c

echo "Compilation complete with GDB annotations, ping me in case you stumble upon any bugs/errors"
