#include "holberton.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
	{
		_puts_recursion(&s[i]);
	}
}
