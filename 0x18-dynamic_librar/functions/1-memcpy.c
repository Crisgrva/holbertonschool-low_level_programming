#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: area whiteboard
 * @src: get constant byte from a pointer
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
