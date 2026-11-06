::! https://github.com/3F/coreclr
::! Based on version for https://github.com/3F/7z.Libs
@echo off

:: Arguments: https://github.com/3F/GetNuTool?tab=readme-ov-file#touch--install--run
:: 1 tmode "path to the working directory" "path to the package"
if "%~1" LSS "1" echo Version "%~1" is not supported.>&2 & exit /B1

set "tmode=%~2"
set "wdir=%~3"
set "pdir=%~4"

if "%~2"=="install" goto :install
if "%~2"=="run" goto :install

set "filter="
setlocal enableDelayedExpansion

if not defined use (

    if "%tmode%"=="touch" (
        call :xcopyX x64 "" +
        call :xcopyX x86 "" +
    )

) else (

    call :parseUseCommand xcmd filter
    if [!xcmd!]==[help] ( goto help ) else if [!xcmd!]==[?] ( goto help )

    set "oprev="
    if "!xcmd:~0,1!"=="@" (
        set "xcmd=!xcmd:~1!"
        set "oprev=@"
    )

    if "!xcmd!"=="x64" (
        call :xcopyX x64 !oprev!

    ) else if "!xcmd!"=="x86" (
        call :xcopyX x86 !oprev!

    ) else if "!xcmd!"=="x64+x86" (
        call :xcopyX x64 "!oprev!" +
        call :xcopyX x86 "!oprev!" +

    ) else if "!xcmd!"=="x86+x64" (
        call :xcopyX x86 "!oprev!" +
        call :xcopyX x64 "!oprev!" +

    ) else if "!xcmd!"=="-" (
        exit /B 0

    ) else (
        echo "!xcmd!" is not supported in current .pkg.install>&2 & exit /B1
    )
)

exit /B 0

:xcopyX
    :: (1) arch
    :: [2] (optional) direction flag
    :: [3] (optional) use of a combination
    if "%~2"=="@" (
        set "_subdir=%~1\ILAsm"
    ) else (
        if not "%~3"=="" ( set "_subdir=ILAsm\%~1" ) else set "_subdir=ILAsm\"
    )
    call :xcopyDirOrFile "%pdir%\bin\Win.%~1" !_subdir!
exit /B 0

:xcopyDirOrFile
    :: (1) input directory
    :: [2] optional output directory

    set "_odir=%~2"
    if defined _odir set "_odir=%~2\"

    call :xcopy "%~1" "!_odir!"
exit /B 0

:xcopy
    :: xcopy: including the readonly (/R) attr
    :: (1) input file
    :: [2] optional new name
    xcopy "%~1" "%wdir%%~2." /Y/R/V/I/Q 2>nul>nul || goto :error
exit /B 0


:error
exit /B 1

:parseUseCommand
    :: &(1) - output main command
    :: &[2] - optional. output filter

    :: keep the first space because, for example, `:ilasm`
    for /f "tokens=1-2 delims=:" %%a in (" %use%") do (
        call :trim _t %%a & set "%1=!_t!"
        call :trim _t %%b & set "%2=!_t!"
    )
exit /B 0

:trim
    set "%1=%~2"
exit /B 0

:help
    echo.
    echo `touch` mode (~ILAsm) and -p:use=
    echo Details: https://github.com/3F/coreclr
    echo          https://github.com/3F/GetNuTool
    echo.
    echo.For example,
    echo.& echo gnt ~ILAsm 
    echo.& echo     ILAsm\x64\, ILAsm\x86\
    echo.& echo gnt ~ILAsm -p:use=x64
    echo.& echo     ILAsm\
    echo.& echo gnt ~ILAsm -p:use=x86
    echo.& echo     ILAsm\
    echo.& echo gnt ~ILAsm -p:use=@x64
    echo.& echo     x64\ILAsm\
    echo.& echo gnt ~ILAsm -p:use=@x64+x86
    echo.& echo     x64\ILAsm\, x86\ILAsm\
exit /B 0

:getMajorVersion
    ::   (1) - Input full version string.
    :: *&(2) - Output major
    ::  !!1  - Error code 1 if failed.

    for /F "tokens=1,2,3 delims=." %%a in ("%~1") do (
        set "%2=%%a" & exit /B 0
    )
    set "%2="
exit /B 1

:install

set /p _version=<"%pdir%\.version"
set /p _modv=<"%pdir%\bin\Win.x64\.modversion"

call :getMajorVersion "%_version%" major
set _version=%major%.%_modv%

set "dst=%pdir%\..\ILAsm.%_version%"
if exist "%dst%" rmdir /S/Q "%dst%"

::`ren` must be processed as a single command along with the called program due to line-by-line processing by the cmd processor after loss of src
ren "%pdir%" ILAsm.%_version% && echo.exit/B0>"%dst%\.cmd"&"%dst%\.cmd"