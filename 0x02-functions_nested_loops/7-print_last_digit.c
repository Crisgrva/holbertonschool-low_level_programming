#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - Print last digit of number
 * @n: integer to evaluate
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{

	if (n < 0)
	{
		int negative_n_lastdigit = n % 10;
		int negative = negative_n_lastdigit * -1;

		_putchar('0' + negative);
		return (negative);
	}
	else
	{
		int positive_n_lastdigit = n % 10;

		_putchar('0' + positive_n_lastdigit);
		return (positive_n_lastdigit);
	}
}
