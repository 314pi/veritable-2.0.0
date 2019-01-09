@echo off
REM
REM CloneCLI - A batch file wrapper for CloneVDI.
REM
REM Running CloneVDI inside this "wrapper" ensures that the command
REM prompt window waits for CloneVDI to finish before issuing the next
REM comand prompt (the CMD window does not normally wait for GUI
REM applications to terminate).
REM
REM An alternative is to run CloneVDI using the "start /wait" command,
REM eg. from the prompt type "start /wait clonevdi "+[clonevdi arguments]
REM
clonevdi.exe %1 %2 %3 %4 %5 %6 %7 %8 %9
