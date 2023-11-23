# C - printf

recreate the command printf which prints a string of characters. It can also be used to print one or more variables formatted in the output stream

the compiler used is gcc with the options -Wall -Werror -Wextra -std=gnu89 

the command must be able to run on Ubuntu 20.04 LTS, and it will be compiled on GCC as mentionned above. the command will only work when presented with a string, and as per required in the rules, we must not use more than five functions per file, and the othorized fuctions and macros consist of :
- write
- malloc
- free
- va_start
- va_end
- va_copy
- va_arg

printf is primaraly used to print out a string of text, as desplayed below :
printf("this message shall be printed");
which will result in :
this message shall be printed

the man page for printf goes as follow :
#### NAME
printf

###### SYNOPSIS 
#include "main.h"

int _printf(const char *format, ...);

##### DESCRIPTION
the printf function write its out put to stdout which is the standard output stream

##### COVERSION SPECIFIERS
- c : with this specifier, the int argument is converted to an unsigned char, and the resulting character is printed.

- s : the const char * argument should be a pointer to an array (pointer to a string). tha characters from the array are printed up to NULL, which will not be printed.

- % : a % will be printed out. no argument will be converted.

- d, i : The int argument is converted to signed decimal notation.

##### RETURN
prints out a string of characters

##### EXEMPLE

printf("this message shall be printed");
which will result in :
this message shall be printed

##### DATE
21/11/2023