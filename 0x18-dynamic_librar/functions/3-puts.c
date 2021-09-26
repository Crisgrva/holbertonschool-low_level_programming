#include "main.h"

/**
* _puts - function that returns the length of a string.
* @s: string to prints
* Return: 0
*/

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
