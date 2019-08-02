:: To prevent all commands in a batch file (including the echo off command) from displaying on the screen
@echo off

:: remove the folder "build". 
:: /S: removes all directories and files in the specified directory in addition to the directory itself.  Used to ::ove a directory tree.
:: /Q: Quiet mode, do not ask if ok to ::ove a directory tree with /S
@RD /S /Q "build"

mkdir build
cd build

cmake ../src -G "MinGW Makefiles"
:: -G specifies generator
:: Generate a project buildsystem

:: Build the project
cmake --build ../build

:: PAUSE prevents the command prompt of closing.
PAUSE