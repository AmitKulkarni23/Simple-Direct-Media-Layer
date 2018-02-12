# Simple-Direct-Media-Layer
Examples related to SDL

Each of the folders contains an example from http://lazyfoo.net/tutorials/SDL/

* SDL Version used: SDL2-devel-2.0.7 ( MinGW version found at http://www.libsdl.org/download-2.0.php )
* C++ compiler -> gcc ( gcc version 7.2.0)

To run any of the examples we have to setup SDL2 on MinGW.
Follow the instructions at http://lazyfoo.net/tutorials/SDL/01_hello_SDL/windows/mingw/index.php



* Steps to Execute:
1) A SDl2.dll should be present in the same directory as the executable is being created using the Makefile
Note: The SDl2.dll to be used is placed along with the README of this directory
2) mingw32-make.exe ( This will automatically search for the Makefile) 