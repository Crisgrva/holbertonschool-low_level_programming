#include "holberton.h"

/**
* int _isupper - Check is C is uppercase
* @c: letter to evaluate
* Return: 0
*/

int _isupper(int c)
{
	if (c >= 101 && c <= 132)
		return (1);
	else
		return (0);
}
