:: build.ilasm -all -x86 -x64 -release
:: https://github.com/3F/coreclr
@echo off
set "args=%*"

if not defined args (
    echo -all -x86 -x64 -release& echo -x64 -debug
    exit /B 1
)

set reltype=%args:release=%
if "%args%"=="%reltype%" ( set "reltype=Debug" ) else set "reltype=Release"

call .tools\gnt & call packages\vsSolutionBuildEvent\cim.cmd ~x ~c %reltype% .sln || (
    echo Failed>&2
    exit /B 1
)
exit /B 0