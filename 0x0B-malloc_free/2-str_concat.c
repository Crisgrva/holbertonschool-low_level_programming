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
	unsigned int i, j;
	char *new_s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	new_s = malloc(((strlen(s1) + strlen(s2)) * sizeof(char)) + 1);
	if (new_s == 0)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		new_s[i] = s1[i];
	}
	for (j = 0; j < strlen(s2); j++, i++)
	{
		new_s[i] = s2[j];
	}
	new_s[i] = '\0';
	return (new_s);
}
