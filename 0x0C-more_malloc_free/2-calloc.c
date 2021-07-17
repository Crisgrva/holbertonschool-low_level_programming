#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: First string
 * @size: Second String
 * Return: new_str
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *item;

	if (nmemb == 0 || size == 0)
		return (NULL);

	item = malloc(nmemb * size);
	if (item == 0)
		return (NULL);

	while (i < (nmemb * size))
	{
		item[i] = 0;
		i++;
	}
	return (item);
}
