@echo off


cl /c src/*.c /D _M_X64
rc /fo src/resource/res.res src/resource/resource.rc
link /SUBSYSTEM:WINDOWS *.obj src/lib/raylibdll.lib src/lib/raylib.lib msvcrt.lib kernel32.lib src/resource/res.res /ENTRY:main /OUT:pong.exe
del *.obj
start pong.exe