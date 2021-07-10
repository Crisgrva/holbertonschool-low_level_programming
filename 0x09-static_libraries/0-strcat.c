#include "holberton.h"

/**
* _strcat - Write a function that concatenates two strings.
* @src: source to copy string
* @dest: destiny
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
