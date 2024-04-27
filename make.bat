@echo off


cl /c src/*.c /D _M_X64
link /SUBSYSTEM:WINDOWS *.obj src/lib/raylibdll.lib src/lib/raylib.lib msvcrt.lib kernel32.lib /ENTRY:main /OUT:main.exe
del *.obj
start main.exe