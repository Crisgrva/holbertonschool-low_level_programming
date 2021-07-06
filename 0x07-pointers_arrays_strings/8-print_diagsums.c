#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix
 * @size: size of matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int n;
	int area_size;
	int first_element = 0;
	int second_element = 0;

	area_size = size * size;

	for (i = 0; i <= area_size; i += (size + 1))
	{
		first_element += a[i];
	}

	for (n = size - 1; n <= area_size - 1; n += (size - 1))
	{
		second_element += a[n];
	}
	printf("%d, %d\n", first_element, second_element);
}
