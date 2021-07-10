#include "holberton.h"
#include <stdio.h>
/**
* *_strcpy - Copy string to another variable
* @dest: destination of string
* @src: source of string
* Return: 0
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
