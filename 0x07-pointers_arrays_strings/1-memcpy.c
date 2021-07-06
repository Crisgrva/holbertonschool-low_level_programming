#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: get constant byte from a pointer
 * @b: byte
 * @n: bytes of the memory area
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
