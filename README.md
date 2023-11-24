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

shown bellow is the flowchart of printf
![IMG_3478](https://github.com/HolbertonGab/holbertonschool-printf/assets/146715769/00cb0eb6-4e70-4da7-a90d-96154d773ccf)


the man page can be read using the command
man ./man_3_printf
