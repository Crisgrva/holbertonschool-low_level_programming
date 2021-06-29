#include "holberton.h"

/**
* _puts - function that returns the length of a string.
* @str: string to prints
* Return: 0
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
