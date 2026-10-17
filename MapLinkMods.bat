@echo off
chcp 65001 >nul
title 批量映射 Mod 文件夹到 P 盘

echo ==================================================
echo     正在批量映射 GameProMod 下的所有文件夹
echo ==================================================
echo.

set "SOURCE=D:\DayzProject\Github\LBmaster_ChineseTranslation"
set "TARGET=P:\"

for /d %%i in ("%SOURCE%\*") do (
    echo 映射: %%~nxi
    mklink /J "%TARGET%%%~nxi" "%%i" 2>nul
    if errorlevel 0 (
        echo   ✅ 成功: %%~nxi
    ) else (
        echo   ❌ 失败: %%~nxi (可能已存在或权限不足)
    )
    echo.
)

echo ==================================================
echo 映射完成！请检查 P 盘。
pause