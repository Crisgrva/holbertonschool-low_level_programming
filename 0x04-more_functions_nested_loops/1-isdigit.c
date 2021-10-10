#include "holberton.h"

/**
* _isdigit - Check is C is digit
* @c: letter to evaluate
* Return: 1 if is True or 0 if is False
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
