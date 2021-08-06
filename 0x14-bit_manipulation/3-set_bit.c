#include "main.h"

/**
 * set_bit - Write a function that sets the value
 * of a bit to 1 at a given index.
 * @n: Pointer to number
 * @index: Index of number
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * (sizeof(n)))
		return (-1);
	*n |= 1 << index;
	return (1);
}
