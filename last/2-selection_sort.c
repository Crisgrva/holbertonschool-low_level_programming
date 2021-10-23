#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array of integers
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int p = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		p = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[p])
				p = j;
		}
		swap_array(&array[p], &array[i]);
		print_array(array, size);
	}
}
/**
 * swap_array - function to swap two integers
 * @a: int to swap with b
 * @b: int to swap with a
 * Return: nothing
 */
void swap_array(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
