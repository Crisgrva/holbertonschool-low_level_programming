#include "holberton.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number.
 * @n: string to count characters
 * Return: length of the string
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
