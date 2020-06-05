To install and use, run commands:
- libtoolize
- aclocal
- autoconf
- automake --add-missing --foreign
- ./configure
- make
- ./zadanie2

IF you don't have perl and m4:

To install the required apps, use the following commands:

    sudo apt install perl
    sudo apt install m4

If any problems occur while accessing autotools, please check for other dependencies by command:

    sudo apt show autoconf
