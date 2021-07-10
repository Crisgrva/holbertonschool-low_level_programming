#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to count accept characters
 * @accept: valid characters
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
	}
	return (count);
}
