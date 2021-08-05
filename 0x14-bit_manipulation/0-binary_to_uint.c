#include "main.h"

/**
 * binary_to_uint - Write a function that converts
 * a binary number to an unsigned int.
 * @b: number to convert
 * Return: Decimal of @b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (b == NULL || b == 0)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != 49 && b[i] != 48)
			return (0);
		result <<= 1;
		result += b[i] - 48;
	}
	return (result);
}
