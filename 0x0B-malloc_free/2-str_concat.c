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
	int i = 0;
	int j = 0;
	int count_s1 = strlen(s1);
	int count_s2 = strlen(s2);

	char *new_s = malloc(((count_s1 + count_s2) * sizeof(char)) + 1);

	if (new_s == 0)
		return (NULL);

	while (i < count_s1)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (j < count_s2)
	{
		new_s[i] = s2[j];
		j++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
