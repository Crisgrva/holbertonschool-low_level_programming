#include <stdio.h>
#include "holberton.h"

/**
 * _abs - Priunt absolute number
 * @n: number to evaluate
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('0');
	_putchar('\n');

	for (n = 0; n < 10; n += 1)
	{
		if (n > 9)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
			_putchar(' ');
		}
		else if (n == 9)
		{
			_putchar('0' + n);
		}
		else
		{
			_putchar('0' + n);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 2); n += 2)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 18)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 3); n += 3)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 27)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}

		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 4); n += 4)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 36)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 5); n += 5)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 45)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 6); n += 6)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 54)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 7); n += 7)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 63)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 8); n += 8)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 72)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
	_putchar('\n');

	for (n = 0; n < (10 * 9); n += 9)
	{
		if (n == 0)
		{
			_putchar('0' + n);
			_putchar(',');
		}
		else if (n == 81)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else if (n >= 10)
		{
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + n);
			_putchar(',');
		}
	}
}
