#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Return false or true if integer is alpha
 * @c: integer to evaluate
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
