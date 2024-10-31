cd .

if "%1"=="" ("D:\matlab2019\Matlab2019b\bin\win64\gmake"  -B -f TEST_IPM_2_0.mk all) else ("D:\matlab2019\Matlab2019b\bin\win64\gmake"  -B -f TEST_IPM_2_0.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
