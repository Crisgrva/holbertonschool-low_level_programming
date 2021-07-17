#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers.
 * @min: First string
 * @max: Second String
 * Return: new_str
 */

int *array_range(int min, int max)
{
	int *item;
	int i;

	if (min > max)
		return (NULL);

	item = malloc(sizeof(int) * max);

	if (item == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		item[i] = i;
	}
	return (item);
}
