#include <stdio.h>
#include "holberton.h"
/**
 * _islower - Print if letter is lower
 * @c: the integer to be evaluate
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
