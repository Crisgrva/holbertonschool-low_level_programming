#include "holberton.h"

/**
* print_rev - function that returns the length of a string.
* @s: string to prints
* Return: 0
*/

void print_rev(char *s)
{
	int i, max_index;

	for (i = 0; s[i] != '\0'; i++)
		max_index = i;

	for (; max_index != '\0'; max_index--)
		_putchar(s[(max_index - 1)]);
	_putchar('\n');
}
