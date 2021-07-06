#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: string to evaluate
 * @needle: substring to find
 * Return: substring finded
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				haystack = &haystack[i - (j - 1)];
				return (haystack);
			}
		}
		else
			j = 0;
	}
	return (0);
}
