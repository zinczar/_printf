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
/*	int i;*/
/*	char *command;*/
	int (*selected_func)(va_list printf_args);

	va_start(printf_args, format);

	while(*format != '\0')
	{
		if (*format == '%')
		{
			selected_func = function_selector(format++)(va_list printf_args);
/*			command = func(printf_args);*/
			format += 2;
		}
		else
			_putchar(*format);

		format++;
	}

	va_end(printf_args);

	return (0);
}
