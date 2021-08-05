#include "main.h"

/**
 * binary_to_uint - Write a function that converts
 * a binary number to an unsigned int.
 * @b: number to convert
 * Return: Decimal of @b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pwd = 1;
	int i = 0, j;
	unsigned int result = 0;

	if (!b || b == 0)
		return (0);

	while (*b != '\0')
	{
		if (i > 0 && *b == '1')
			pwd = pwd * 2;

		if (*b != '1' && *b != '0')
			return (0);
		b++;
		i++;
	}
	while (i > 0)
	{
		b--;
		i--;
	}
	while (*b != '\0')
	{
		if (*b == '1')
			result += 1 * pwd;
		pwd = pwd / 2;
		b++;
	}
	return (result);
}
