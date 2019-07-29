#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

int _printf(char *format, ...)
{
        va_list arguments;
	int count = 0;
        int i;
        int (*fptr)(va_list arguments);

        va_start(arguments, format);
	if (format)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				i += 2;
				fptr = get_percent(format[i]);
				if (fptr == NULL)
					return (0);
				count += fptr(arguments);
			}
			else
				count +=_putchar(format[i]);
		}
	}
	va_end(arguments);
        return (count);
}
