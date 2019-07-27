#include "holberton.h"

/**
 * function_selector - Code
 * @s: Char
 *
 * Return: 0
 */
int (*function_selector(char s))(printf_args)
{
	int i = 0;

	op_t operators[] = {
		{"c", print_char},
/*		{"s", print_string},
		{"i", print_integer},
		{"d", print_decimal},*/
		{NULL, NULL}
	};

	while (operators[i].op)
	{
		if (strcmp(s, operators[i].op) == 0)
			return (operators[i].f);
		i++;
	}

	return (NULL);

}
