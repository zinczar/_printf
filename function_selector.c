#include "holberton.h"

/**
 * function_selector - Code
 * @s: Char
 *
 * Return: 0
 */
int (*function_selector(char *s))(va_list printf_args)
{
	op_t operators[] = {
		{'c', print_char},
		{'s', print_string},
/*		{'i', print_integer},
		{'d', print_decimal},*/
		{NULL, NULL}
	};
	int i = 0;

	while (operators[i].op)
	{
		if (s == operators[i].op)
			return (operators[i].f);
		i++;
	}

	return (NULL);

}
