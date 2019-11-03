@echo off

set "__CMakeCompileWinShort=ON"

:: -all -x86 -x64 -release
build -skipmscorlib -skiptests -skipbuildpackages -skipcrossarchnative -skipmanagedtools -skiprestoreoptdata -skiprestore %*