#### NAME
printf

##### SYNOPSIS 
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