#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string
 * @s2: Second String
 * @n: n bytes of the second string
 * Return: new_str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= strlen(s2))
		n = strlen(s2);

	new_str = malloc(sizeof(char) * (strlen(s1) + n) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
