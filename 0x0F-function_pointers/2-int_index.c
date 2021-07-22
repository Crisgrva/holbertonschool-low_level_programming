#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - Function that searches for an integer.
 * @array: Array where found the integer
 * @size: size of array
 * @cmp: function to value an integer
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size <= 0 || !size || !cmp)
		return (-1);

	while (i < size)
	{
		if ((cmp)(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
