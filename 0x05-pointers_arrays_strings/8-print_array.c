#include "holberton.h"
#include <stdio.h>
/**
* print_array - puts half of string
* @a: array to separate
* @n: number of index to print
* Return: 0
*/

void print_array(int *a, int n)
{
	int i;

	n--; /* convert absolut to index */

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
}
