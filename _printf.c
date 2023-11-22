#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
 * _printf - recreates the printf function
 * @format: strings with format specifiers
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int char_count = 0, index = 0;
	int (*format_func)(va_list) = 0;
	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		while (format != NULL && format[index] != '\0')
		{
			if (format[index] == '%')
			{
				if (format[index + 1] == '%')
				{
					char_count += _putchar(format[index]);
					index += 2;
				}
				else
				{
					format_func = get_pf_functions(format[index + 1]);
					if (format_func)
						char_count += format_func(args);
					else
						char_count = _putchar(format[index]) + _putchar(format[index + 1]);
					index += 2;
				}
			}
			else
			{
				char_count += _putchar(format[index]);
				index++;
			}
		}
		va_end(args);
		return (char_count);
	}
	return (-1);
}
