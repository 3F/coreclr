using System;
using Xunit;
using System.Reflection;
using System.Linq;
using System.IO;
using System.Runtime.Loader;

namespace ConsoleApplication
{
    public class Program
    {
        // This string templates will generate a scrip.
        // They take following parameters:
        //  {0} - Method name.
        //  {1} - Path to the runtime.
        //  {2} - Path to the Debugger.Tests\dotnet folder.
        static string cmdTemplate = @"@echo off
setlocal ENABLEDELAYEDEXPANSION
set OLD_CORE_ROOT=%CORE_ROOT%
set CORE_ROOT=
set __ThisScriptPath=%~dp0
set RUNTIME_PATH={1}
pushd {2}
%RUNTIME_PATH%\corerun.exe xunit.console.netcore.exe DebuggerTest.dll -method {0} -xml %__ThisScriptPath%\{0}.log
set CLRTestExitCode=!ERRORLEVEL!
set CORE_ROOT=%OLD_CORE_ROOT%
popd
IF NOT ""%CLRTestExitCode%"" == ""0"" (
  ECHO END EXECUTION - FAILED
  ECHO FAILED
  Exit /b 1
) ELSE (
  ECHO END EXECUTION - PASSED
  ECHO PASSED
  Exit /b 0
)";
    static string shTemplate= @"#!/bin/bash
ulimit -n 2048
scriptPath=$(dirname $0)

pushd $scriptPath
scriptFullPath=`pwd`
testsRootPath=$scriptFullPath/../..
popd

runtime_path={1}
export LD_LIBRARY_PATH=$runtime_path
pushd {2}
chmod u+x $runtime_path/corerun
OldCoreRoot=$CORE_ROOT
unset CORE_ROOT
$runtime_path/corerun xunit.console.netcore.exe DebuggerTest.dll -method {0} -xml $scriptFullPath/{0}.log

# PostCommands
CLRTestExitCode=$?
CLRTestExpectedExitCode=0

popd
export CORE_ROOT=$OldCoreRoot
echo Expected: $CLRTestExpectedExitCode
echo Actual: $CLRTestExitCode
if [ $CLRTestExitCode -ne $CLRTestExpectedExitCode ]
then
  echo END EXECUTION - FAILED
  exit 1
else
  echo END EXECUTION - PASSED
  exit 0
fi";

        public static void Main(string[] args)
        {
            if(args.Length != 3)
            {
                Console.WriteLine("Usage: {0} <tests root path> <runtime path> <tests library path>", Path.GetFileName(Assembly.GetEntryAssembly().GetName().Name));
                return;
            }
           
            string DeployPath = Path.Combine(Path.GetFullPath(args[0]), "tests");
            string runtimePath = Path.GetFullPath(args[1]);
            string dotnetTestsPath = Path.GetFullPath(args[2]);
            AssemblyName an = new AssemblyName("DebuggerTest, Version=999.999.999.999, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a");
            Assembly assembly = null;
            try
            {
                assembly = AssemblyLoadContext.Default.LoadFromAssemblyPath(@"C:\dev\test\Debugger.Tests\dotnet\DebuggerTest.dll");
                //assembly = Assembly.Load(an);
            }
            catch (System.IO.FileNotFoundException)
            {
                string curAssemblyDir = Path.GetDirectoryName(new System.Uri(Assembly.GetEntryAssembly().CodeBase).AbsolutePath);
                Console.WriteLine("Error: can't find DebuggerTest.dll. Please put DebuggerTest.dll to {0}", curAssemblyDir);
                return;
            }
           
            var methods = assembly.GetTypes().SelectMany(t => t.GetMethods());
            foreach (var item in methods)
            {
                TheoryAttribute att = (TheoryAttribute)item.GetCustomAttribute(typeof(TheoryAttribute));
                if(att != null && att.Skip == null)
                {
                    string xunitTestMethodName = item.DeclaringType.FullName + '.' + item.Name;
                    string destDir = Path.Combine(DeployPath, xunitTestMethodName);
                    Console.WriteLine(destDir);
                    if(!Directory.Exists(destDir))
                        Directory.CreateDirectory(destDir);
                    
                    File.WriteAllText(Path.Combine(destDir, xunitTestMethodName+".cmd"), string.Format(cmdTemplate, xunitTestMethodName, runtimePath, dotnetTestsPath));
                    File.WriteAllText(Path.Combine(destDir, xunitTestMethodName+".sh"), string.Format(shTemplate, xunitTestMethodName, runtimePath, dotnetTestsPath));
                }
            }
        }
    }
}
