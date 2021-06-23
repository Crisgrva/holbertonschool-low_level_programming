#include <stdio.h>
#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int mul = i * j;
			int mul_first = mul / 10;
			int mul_second = mul % 10;

			if (j == 0)
			{
				_putchar(mul_second + '0');
				_putchar(',');
			}
			else if (mul <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(mul_second + '0');
				if (j != 9)
					_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(mul_first + '0');
				_putchar(mul_second + '0');
				if (j != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
