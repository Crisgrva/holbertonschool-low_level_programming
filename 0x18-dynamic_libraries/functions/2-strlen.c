#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s: variable to change the address
* Return: 0
*/

int _strlen(char *s)
{
	int length;
	int i;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
