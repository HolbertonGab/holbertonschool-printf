#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct specifiers - new struct type defining conversion specifiers
 * @valid: a valid character
 * @functions: the functions to associate
 *
 */
typedef struct specifiers
{
	char *valid;
	int (*functions)(va_list);
} speci;

int _printf(const char *format, ...);
int _putchar(char c);
int print_character(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_integer(va_list args);

#endif
