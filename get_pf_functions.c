#include "main.h"

/**
 * get_pf_functions - look for the specifier
 * @var_f: variable to the function
 * Return: function
 */
int (*get_pf_functions(char var_f))(va_list)
{
	int index = 0;

	speci arr[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_integer},
		{NULL, NULL}
	};
	while (arr[index].letter)
	{
		if (var_f == arr[index].letter[0])
			return (arr[index].functions);
		index++;
	}
	return (NULL);
}
