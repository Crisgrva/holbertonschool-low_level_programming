#include "main.h"

/**
 * binary_to_uint - Write a function that converts
 * a binary number to an unsigned int.
 * @b: number to convert
 * Return: Decimal of @b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pwd = 1, result = 0;
	int i, j;

	if (!b || b == 0)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (i > 0)
			pwd = pwd * 2;

		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (j = 0; b[j]; j++)
	{
		if (b[j] == '1')
			result += 1 * pwd;
		pwd = pwd / 2;
	}
	return (result);
}
