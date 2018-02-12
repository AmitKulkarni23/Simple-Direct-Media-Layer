# Run with sh mingw64build.sh
# Some new stuff
# 
# Here g++ is used
# -D MINGW is used as a compiler 'switch' to tell us where to find SDL
# -std=c++14 uses the c++14 standard
# 
# 
# 
# 

COMPILE="g++ -D MINGW -std=c++14 -static-libstdc++ -static-libgcc -I./include/ -o lab.exe ./src/*.cpp -lmingw32 -lSDL2main -lSDL2 -mwindows -L libwinpthread-1.dll"

echo $COMPILE
echo "-------------------------------------------"
eval $COMPILE
