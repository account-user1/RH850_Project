@echo off
set SipChecker=%~dp0SipModificationChecker.exe
set SrcDir=%~dp0..\..\BSW
set ReferenceFile=%~dp0SipModificationChecker.xml
%SipChecker% %SrcDir% %ReferenceFile%
