#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - encodes a string using rot13.
 * @n: string decode
 * Return: Always 0.
 */

char *rot13(char *n)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, k;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (k = 0; input[k] != '\0'; k++)
		{
			if (n[i] == input[k])
			{
				n[i] = output[k];
				break;
			}
		}
	}
	return (n);
}
