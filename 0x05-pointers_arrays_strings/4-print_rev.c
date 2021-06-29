#include "holberton.h"
#include "stdio.h"

/**
* print_rev - function that returns the length of a string.
* @s: string to prints
* Return: 0
*/

void print_rev(char *s)
{
	int length;
	int i;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	length--;

	for (; length >= 0; length--)
		_putchar(s[length]);

	_putchar('\n');
}
