The command used to build the static library
>> gcc -c -o mathlib.o mathlib.c
>> ar rcs libmathlib.a mathlib.o


The command to be used to link the static library to the test app
>> gcc -c -Wall -Wextra -fpic mathlib.c


The command used to build the shared library
>> gcc -shared -o libmathlib.so mathlib.c

The command used to link the shared library to the test app
gcc -shared -o libmathlib.so mathlib.o -lm


Test static 
gcc -o test_static test.c -L. -lmathlib


Test shared .
gcc -o test_shared test.c -L. -lmathlib



