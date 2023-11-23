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

	chara = va_arg(args, int);
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
	int count = 0;
	char *str = 0;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "";
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent string
 * @args: string argument
 * Return: the percent string
 *
*/
int print_percent(va_list args)
{
	char *str = 0;

	str = "%";

	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
/**
 * print_decimal - prints a decimal
 * @args: decimal argument
 * Return: count of characters printed
 */
int print_decimal(va_list args)
{
	int number = va_arg(args, int);
	int characterCount = 0;
	unsigned int absoluteValue = 0;
	unsigned int countDigits = 1;
	unsigned int temp = absoluteValue;

	if (number < 0)
	{
		absoluteValue = -number;
		characterCount = _putchar('-');
	}
	else
	{
		absoluteValue = number;
	}
	while (absoluteValue / countDigits >= 10)
	{
		temp /= 10;
		countDigits *= 10;
	}
	while (countDigits >= 1)
	{
		characterCount += _putchar(((absoluteValue / countDigits) % 10) + '0');
		countDigits /= 10;
	}
	return (characterCount);
}
/**
 * print_integer - prints an integer
 * @args: integer argument
 * Return: the count of characters printed by print_decimal
 */
int print_integer(va_list args)
{
	return (print_decimal(args));
}
