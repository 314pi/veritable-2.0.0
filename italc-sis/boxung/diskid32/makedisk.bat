set include=c:\wc_110\h;c:\wc_110\h\nt

del diskid32.exe

wcl386 diskid32.cpp

wlink @diskid32.lnk

wstrip diskid32.exe

del diskid32.obj

