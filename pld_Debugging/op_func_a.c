#include "own_functions.h"
#include <stdio.h>

/**
 * _printf_bin - function that prints a binary numer
 * @s: va_list
 * Return: string's length
 */

int _printf_bin(va_list s)
{
	char *str = va_arg(s, char *);

	int size = write(1, str, _strlen(str));

	return (size);
}

/**
 * _printf_o - function that prints an octal number
 * @o: va_list
 * Return: 1
 */

int _printf_o(va_list o)
{
	unsigned int length;

	char buffer[1024];

	_itoa(va_arg(o, unsigned int), buffer, 8);
	length = write(1, buffer, _strlen(buffer));

	printf("\n%s\n", buffer);
	return (length);
}
