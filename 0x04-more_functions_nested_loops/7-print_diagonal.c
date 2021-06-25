#include "holberton.h"
#include <stdio.h>

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: number of lines
* Return: 0
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar(92);
			}
			else
				_putchar(' ');
		}
		printf("\n");
	}
}
