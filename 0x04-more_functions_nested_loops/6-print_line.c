#include "holberton.h"

/**
* print_line - print lines
* @n: number of lines to print
* Return: 0
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
