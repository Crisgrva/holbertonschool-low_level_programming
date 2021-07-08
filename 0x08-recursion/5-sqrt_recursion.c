#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_recursion - return square root of a number
 * @n: number to evaluate
 * Return: 1 if is primer of 0 is otherwise
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}

/**
 * _sqrt_recursion2 - aux function
 * @m: number from main function
 * @i: number to evaluate if is square root
 * Return: 1 if is primer of 0 is otherwise
 */
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
