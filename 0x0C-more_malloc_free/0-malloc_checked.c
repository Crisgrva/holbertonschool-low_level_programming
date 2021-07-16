#include "holberton.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Size of the memory cells to return.
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = (void *)malloc(b);

	if (!ptr)
	{

		exit(98);
	}
	return (ptr);
}
