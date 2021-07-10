#include <stdio.h>
#include "holberton.h"

/**
 * _abs - Priunt absolute number
 * @n: number to evaluate
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n * 1);
}
