#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @src: string to copy
 * @dest: destiny
 * @n: n bytes to copy
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, m;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (m = 0; src[m] != '\0';)
	{
		m++;
	}

	for (j = 0; j < n; j++)
	{
		if (j < m)
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}
	return (dest);
}
