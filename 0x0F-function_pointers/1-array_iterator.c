#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 * @array: Array to print
 * @size: Values in array to print
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i = 0;
	if (!array || !size || !action)
		return;

	while (i < size)
	{
		(action)(array[i]);
		i++;
	}
}
