#include "holberton.h"

/**
* swap_int - Swap value of int *a to int *b
* @a: variable to change the address
* @b: variable to change the address
* Return: 0
*/

void swap_int(int *a, int *b)
{
	int a_temp;

	a_temp = *a;
	*a = *b;
	*b = a_temp;
}
