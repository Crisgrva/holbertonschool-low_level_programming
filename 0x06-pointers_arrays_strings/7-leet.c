#include "holberton.h"

/**
 * *leet - encodes a string into 1337.
 * @n: string to decode
 * Return: Always 0.
 */

char *leet(char *n)
{
	int i;

	for (i = 0; n[i] != '\n'; i++)
	{
		if (n[i] == 'a' || n[i] == 'A')
			n[i] = '4';
		else if (n[i] == 'e' || n[i] == 'E')
			n[i] = '3';
		else if (n[i] == 'o' || n[i] == 'O')
			n[i] = '0';
		else if (n[i] == 't' || n[i] == 'T')
			n[i] = '7';
		else if (n[i] == 'l' || n[i] == 'L')
			n[i] = '1';
	}
	return (n);
}
