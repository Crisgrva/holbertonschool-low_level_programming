#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: reverse
 * @n: reverse
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;
	int m = 0;
	int aux[1000];

	for (i = 0; i < n; i++)
	{
		aux[i] = a[i];
	}
	for (k = n - 1; k >= 0; k--)
	{
		a[m] = aux[k];
		m++;
	}
}
