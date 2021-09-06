@echo off
setlocal EnableDelayedExpansion
g++ -std=c++17 %1
if !ERRORLEVEL! == 0 (
    echo [ok]
    a < in
)