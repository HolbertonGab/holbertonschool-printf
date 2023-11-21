#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_character - prints character
 * @args: character argument
 * Return: number of characters
*/
int print_character(va_list args)
{
	int chara;

	chara = va_args(args, int);
	return (_putchar(chara));
}
/**
 * print_string - prints a string
 * @args: string argument
 * Return: number of characters
*/
int print_string(va_list args)
{
	int index = 0;
	int count
}
