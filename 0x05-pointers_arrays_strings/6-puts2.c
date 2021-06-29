#include "holberton.h"

/**
* puts2 - prints every other character of a string
* @str: string to reverse
* Return: 0
*/

void puts2(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	for (n = 0; n <= i;)
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
