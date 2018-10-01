This has the cpp_py package.

Please do not distribute.

Instructions for installing the simplecpp package:
1. Copy this directory (simplecpp) somewhere.
2. Change the directory to this, and execute
   ./configure.sh

This should create cpp_py/lib/libsprite.a which is needed in
cpp_py.  The include files will be in cpp_py/include.



g++ is the compiler for use with cpp_py.  You can create an alias
so that you dont need to give the entire filename to use g++.

To use cpp_py, your source files should contain
#include <cpp_py>

------
   
Simplecpp directory contains following subdirectories:

       include : contains C++ include files

       lib     : contains libsprite.a  

       src     : source files.  

       programs : programs developed by devlopers.  Ready
                 to be compiled and executed.

-----
