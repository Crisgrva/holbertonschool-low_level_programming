#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to count characters
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(++s) + 1);
}
