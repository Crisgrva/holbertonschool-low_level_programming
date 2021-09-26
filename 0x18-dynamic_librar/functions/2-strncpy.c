#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 * @src: string to copy
 * @dest: destiny
 * @n: n bytes to copy
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;
	int i;

	for (m = 0; src[m] != '\0';)
	{
		m++;
	}

	for (i = 0; i < n; i++)
	{
		if (i < m)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
