#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: grid to free memory
 * @height: height of grid
 * Return: Always 0.
 */

void free_grid(int **grid, int height);
{
	int k;
	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
