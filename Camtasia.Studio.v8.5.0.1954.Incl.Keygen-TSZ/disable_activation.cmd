SET NEWLINE=^& echo.

FIND /C /I "activation.cloud.techsmith.com" %WINDIR%\system32\drivers\etc\hosts
IF %ERRORLEVEL% NEQ 0 ECHO %NEWLINE%^127.0.0.1                   activation.cloud.techsmith.com>>%WINDIR%\system32\drivers\etc\hosts

FIND /C /I "oscount.techsmith.com" %WINDIR%\system32\drivers\etc\hosts
IF %ERRORLEVEL% NEQ 0 ECHO ^127.0.0.1                   oscount.techsmith.com>>%WINDIR%\system32\drivers\etc\hosts

FIND /C /I "65.52.240.48" %WINDIR%\system32\drivers\etc\hosts
IF %ERRORLEVEL% NEQ 0 ECHO ^127.0.0.1                   65.52.240.48>>%WINDIR%\system32\drivers\etc\hosts

FIND /C /I "69.167.144.18" %WINDIR%\system32\drivers\etc\hosts
IF %ERRORLEVEL% NEQ 0 ECHO ^127.0.0.1                   69.167.144.18>>%WINDIR%\system32\drivers\etc\hosts