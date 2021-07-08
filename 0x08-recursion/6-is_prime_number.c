#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - returns prime number
 * @n: number to evaluate
 * Return: 1 if is primer of 0 is otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_num2(n, 1));
}

int is_prime_num2(int m, int i)
{
	if (i * i == m)
		return (i);

	if (i == m)
		return (-1);
	else
		return (is_prime_num2(m, i + 1));
}
