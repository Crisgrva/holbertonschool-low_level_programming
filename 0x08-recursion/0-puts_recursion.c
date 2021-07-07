#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	_putchar('\n');
}
