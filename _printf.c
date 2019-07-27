#include "holberton.h"

/**
 * _printf - Code
 * @str: Number of arguments
 *
 * Return: 0
 */
int _printf(char *str, ...)
{
	int i;
	char command;
	int (*func)(int);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			func = function_selector(str[i++]);
		}
		else
			_putchar(str[i]);
	}

	command  = func(int);

	return (0);

}
