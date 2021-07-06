#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: string to evaluate
 * @needle: substring to find
 * Return: substring finded
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int n;

	for (n = 0; n < 8; n++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[n][i]);
		}
		_putchar('\n');
	}
}
