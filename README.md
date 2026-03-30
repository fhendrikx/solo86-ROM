# SoloROM

This repository contains the code and tools required to build Solo/86 ROM code in C and Assembler. This repository contains a generic "template" that can be used to build ROM images for Solo/86.


## Building SoloROM

### What tools do I need to build SoloOS?

You'll need to install the following:
- gcc
- make
- mtools
- nasm
- dosfstools
- bison
- flex
- texinfo
- texi2html


### Building Cross-Compiler

Load the environment for building:

    source env.sh

Buld the GCC IA-16 cross compiler:

    cd cross
    make


### Building SoloROM

Load the environment for building:

    source env.sh

Then build the system:

    make

