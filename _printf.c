#include "holberton.h"

/**
 * _printf - Code
 * @str: Number of arguments
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list printf_args;
	int i;
	int command;
	int (*func)(printf_args);

	va_start(printf_args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			func = function_selector(format[i++]);
			i += 2;
		}
		else
			_putchar(format[i]);
	}

	command = func(printf_args);

	va_end(printf_args);

	return (0);
}
