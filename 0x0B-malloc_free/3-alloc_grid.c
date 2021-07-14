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
	int i, j, k;
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

		for (j = 0; j < width; j++)
		{
			if (canvas[i] == NULL)
			{
				for (k = 0; k < width; k++)
					free(canvas[k]);
				free(canvas);
				return (NULL);
			}
			canvas[i][j] = 0;
		}
	}
	return (canvas);
}
