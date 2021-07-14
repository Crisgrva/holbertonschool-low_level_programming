#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **canvas;

	if (width <= 0 || height <= 0)
		return (NULL);

	canvas = malloc(height * sizeof(int *));

	if (canvas == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		canvas[i] = malloc(width * sizeof(int));

		if (canvas[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			canvas[i][j] = 0;
		}
	}
	return (canvas);
}
