#include "holberton.h"

/**
* swap_int - Swap value of int *a to int *b
* @a: variable to change the address
* @b: variable to change the address
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

	return (dest);
}
