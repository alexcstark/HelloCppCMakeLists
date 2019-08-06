# HelloCppCMakeLists
To learn C++ and CMakeLists

References:
[1]
https://arne-mertz.de/2018/05/hello-cmake/
[2] To install MinGw and configure the computer to use it.
http://www.mingw.org/wiki/Getting_Started/
[3] Installing MinGw and configuring the system for MinGw
https://www.rose-hulman.edu/class/csse/resources/MinGW/installation.htm
[4] A convenient environment editor
https://www.rapidee.com

We can install MinGw independently, or let it be installed with Qt. Mine is the second case. 
Ref [2] is a good start for using MinGw.
If you install MinGW, don't change the proposed default installation path (C:\MinGW) [3].
Command line interpreter needs to know where to find MinGw. For that, we need to add below values to windows PATH environment variable:
C:\Qt\Qt5.13.0\5.13.0\mingw73_64\bin

(For editing environment variables, I use Rapid Environment Editor [4]).

By double-click on CMake.bat file, we build the project. As the result, the file build/prog.exe will be generated.
You can open command prompt in this folder and enter the command:
./prog.exe

The function will run and the message in it, "Hello World", will be printed.

CMake is a cross-platform, open-source build system.


