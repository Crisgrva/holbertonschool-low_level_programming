#include "holberton.h"

/**
* _isupper - Check is C is uppercase
* @c: letter to evaluate
* Return: 0
*/

int _isupper(char c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
