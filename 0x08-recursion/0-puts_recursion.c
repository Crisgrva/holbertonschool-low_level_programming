#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		if (*s != '\0')
		{
			_puts_recursion(s);
		}
		else
		{
			_putchar('\n');
		}
	}
}
