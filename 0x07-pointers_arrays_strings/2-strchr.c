#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that copies memory area.
 * @s: characters in a string.
 * @c: first occurrence of the character
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] < c; i++)
	{
	}
	return (s + i);
}
