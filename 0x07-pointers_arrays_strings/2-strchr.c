#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: characters in a string.
 * @c: first occurrence of the character
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i++;

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}

	return (NULL);
}
