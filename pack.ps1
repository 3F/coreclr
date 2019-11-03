param($OS, $Arch, $Type, $RootBinDir, $PkgTools)

$BinDir = "$RootBinDir\Product\$OS.$Arch.$Type"
$ObjDir = "$RootBinDir\obj\\"

if($OS -eq "Windows_NT") {
  $OS = "Win"
}

$zipLvl   = "Fastest" # NoCompression / Fastest / Optimal
$odir     = "$RootBinDir\Product"

$pdir     = "$odir\coreclr.ILAsm.$OS.$Arch"
$nupkg    = "$odir\.nupkg"
$nuspec   = "$ObjDir\ILAsm.nuspec"

$fBin     = "$OS.$Arch"
$infFiles = ('.\changelog.txt', '.\LICENSE.TXT', '.\PATENTS.TXT', '.\README.md', "$ObjDir\.version.txt")


## svc

Remove-Item ("$odir\$fBin", "$pdir.zip") -Force -Recurse -ErrorAction Ignore


## zip distr

Get-ChildItem -Path $BinDir | ForEach-Object {
  if($_.PSIsContainer)
  {
    # without this some files in subdirs can be copied in root folder
    $null = New-Item -ItemType Directory -Force -Path ($pdir + '\\' + $_.Name)
  }
  Copy-Item $_.fullname $pdir -Recurse -Force
}

Copy-Item $infFiles $pdir -Force

$zipver = (Get-Content "$ObjDir\.version.txt" | Select-String -Pattern '([^+]+?\+[0-9a-fA-F]{7})').Matches.Groups[1].Value
Compress-Archive "$pdir\*" "$pdir.$zipver.zip" -CompressionLevel $zipLvl


## nupkg distr

Remove-Item "$pdir\PDB" -Force -Recurse
Rename-Item $pdir $fBin

$null = New-Item -ItemType Directory -Force -Path "$nupkg\bin"

Remove-Item "$nupkg\bin\$fBin" -Force -Recurse -ErrorAction Ignore
Move-Item "$odir\$fBin" "$nupkg\bin" -Force

Copy-Item $infFiles "$nupkg" -Force
Copy-Item "$nuspec" "$nupkg" -Force

Copy-Item "$PkgTools\build" "$nupkg" -Force -Recurse
Copy-Item "$PkgTools\tools" "$nupkg" -Force -Recurse
