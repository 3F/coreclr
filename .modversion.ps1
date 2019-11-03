param($ObjDir, $NativeVersionFile)

$vNative = $ObjDir + $NativeVersionFile

# {origin-major}.{origin-minor}.{mod-major}.{mod-minor}+SHA1
# ...............................^^^^^^^^^^^^^^^^^^^^^ .modversion

$mdv = Get-Content ".\.modversion"
$nvf = Get-Content $vNative

$raw = ($nvf | Select-String -Pattern 'VER_PRODUCTVERSION_STR[^"]+"([^"]+)"').Matches.Groups[1].Value
$v   = ($raw | Select-String -Pattern '(\d+),(\d+),(\d+),(\d+)\s*@Commit:\s*([0-9a-fA-F]+)').Matches.Groups

$modversion     = '{0}.{1}.{2}' -f $v[1],$v[2],$mdv
$modverPlusSha1 = '{0}+{1}' -f $modversion,$v[5].Value.Substring(0, 9)

Add-Content $vNative ('#define VER_3FMOD_BSHA1_STR         "{0}"' -f $v[5])
Add-Content $vNative ('#define VER_3FMOD_PRODUCT_STR       "{0}"' -f $modverPlusSha1)

# ILAsm .nuspec

$ILAsm = "ILAsm.nuspec"

(Get-Content ".\$ILAsm").Replace('%Version%', $modversion).Replace('%VersionFull%', $modverPlusSha1) | Set-Content "$ObjDir\$ILAsm"

Set-Content ($ObjDir + '.version.txt' ) ("{0}+{1}: {2}" -f $modversion, $v[5], 'https://github.com/3F/coreclr')