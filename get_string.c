#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_string - prints the string
 *
 * @arguments: value from get_percent
 *
 * Return: Always 0 (Success)
 */

int get_string(va_list arguments)
{
	int count;
	char *printstring;

	printstring = va_arg(arguments, char *);

	if (printstring == NULL)
		return (0);

	for (count = 0; *printstring != '\0'; count++, printstring++)
		_putchar(*printstring);

	return (0);
}
