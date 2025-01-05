[.NET Core CLR (coreclr)](https://github.com/3F/coreclr)
=========================

[![Build status](https://ci.appveyor.com/api/projects/status/asb0nbj8tly2rp7p/branch/master?svg=true)](https://ci.appveyor.com/project/3Fs/coreclr-62ql7/branch/master)
[![License](https://img.shields.io/badge/License-MIT-74A5C2.svg)](https://github.com/3F/coreclr/blob/master/LICENSE.TXT)

.NET Core complete runtime implementation. Also includes IL Assembler, IL Disassembler, RyuJIT, the .NET GC, native interop and many other components.

Some of these components have been **modified** and also known as *3F's IL Assembler on coreclr* ([github/3F](https://github.com/3F))
specialy for [https://github.com/3F/DllExport](https://github.com/3F/DllExport) and for other related purposes.

Licensed under the [MIT License (MIT)](https://github.com/3F/coreclr/blob/master/LICENSE.TXT)

```r
Copyright (c) .NET Foundation and Contributors
Copyright (c) 2016-2025  Denis Kuzmin <x-3F@outlook.com> github/3F
```

## ILAsm on coreclr

3F's IL Assembler (ILAsm) + IL Disassembler (ILDasm) https://github.com/3F/coreclr

[`gnt`](https://3F.github.io/GetNuTool/releases/latest/gnt/)`ILAsm` [[?](https://github.com/3F/GetNuTool)]
[![NuGet package](https://img.shields.io/nuget/v/ILAsm.svg)](https://www.nuget.org/packages/ILAsm/)
[![release](https://img.shields.io/github/release/3F/coreclr.svg)](https://github.com/3F/coreclr/releases/latest)

Note the following,

.res / .obj

In order to provide a compatible resource converter to obj COFF-format when assembling, use [/CVRES](https://github.com/3F/coreclr/issues/2) (/CVR) key:

```
ilasm ... /CVR=cvtres.exe
```

**PDB** files are available through GitHub Releases:
https://github.com/3F/coreclr/releases

NuGet Package Preferences:  

* `$(ILAsm_RootPkg)` - path to ILAsm package folder.
* `$(ILAsm_PathToBin)` - path to `\bin` folder., e.g. *$(ILAsm_PathToBin)Win.x64\ilasm.exe*
