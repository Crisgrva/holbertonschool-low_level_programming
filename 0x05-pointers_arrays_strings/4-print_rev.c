#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_rev - function that returns the length of a string.
* @s: string to prints
* Return: 0
*/

void print_rev(char *s)
{
	int i;
	int max_index;
	int prnt_str;

	// Getting last index of string
	for (i = 0; s[i] != '\0'; i++)
	{
		max_index = i;
	}
	//Print string from last index to first index
	for (prnt_str = max_index; max_index != '\0'; max_index--)
	{
		_putchar(s[max_index]);
	}
	_putchar('\n');

	// printf("%d", max_index);
}
