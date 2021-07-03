#include "holberton.h"
#include <stdio.h>

/**
 * *leet - encodes a string into 1337.
 * @n: string to decode
 * Return: Always 0.
 */

char *leet(char *n)
{
	char eng[] = {"aAeEoOtTlL"};
	char leet[] = {"4433007711"};
	int i;
	int k;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[i] == eng[k])
				n[i] = leet[k];
		}
	}

	return (n);
}
