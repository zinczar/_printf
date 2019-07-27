#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(char a);
} op_t;

int _putchar(char c);
int print_char(char c);
int _printf(char *str, ...);
int (*function_selector(char *s))(int);

#endif
