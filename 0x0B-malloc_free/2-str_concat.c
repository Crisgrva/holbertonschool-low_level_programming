#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int count_s1 = 0;
	int count_s2 = 0;
	char *new_s;

	if (s1 == 0 && s2 == 0)
		return (NULL);
	if (s1 == 0)
	{
		count_s1 = 0;
		count_s2 = strlen(s2);
	}
	else if (s2 == 0)
	{
		count_s1 = strlen(s1);
		count_s2 = 0;
	}
	else
	{
		count_s1 = strlen(s1);
		count_s2 = strlen(s2);
	}

	new_s = malloc(((count_s1 + count_s2) * sizeof(char)) + 1);

	if (new_s == 0)
		return (NULL);

	for (i = 0; i < count_s1; i++)
	{
		new_s[i] = s1[i];
	}
	for (j = 0; j < count_s2; j++, i++)
	{
		new_s[i] = s2[j];
	}
	new_s[i] = '\0';
	return (new_s);
}
