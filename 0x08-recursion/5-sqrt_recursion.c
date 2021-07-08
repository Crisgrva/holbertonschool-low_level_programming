#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - returns prime number
 * @n: number to evaluate
 * Return: 1 if is primer of 0 is otherwise
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}

int _sqrt_recursion2(int m, int i)
{
	if (m < 0)
		return (-1);

	if (i * i == m)
		return (i);

	if (i == m)
		return (-1);
	else
		return (_sqrt_recursion2(m, i + 1));
}
