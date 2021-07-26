#include "own_functions.h"

/**
 * _printf_s - function that prints a string
 * @s: va_list
 * Return: string's length
 */

int _printf_s(va_list s)
{
	char *str = va_arg(s, char *);

	int size = write(1, str, _strlen(str));

	return (size);
}

/**
 * _printf_c - function that prints a character
 * @c: va_list
 * Return: 1
 */

int _printf_c(va_list c)
{
	int cstr = va_arg(c, int);

	write(1, &cstr, 1);

	return (1);
}

/**
 * _printf_d - function that prints a decimal number
 * @d: va_list
 * Return: 1
 */

int _printf_d(va_list d)
{
	int length;
	char buffer[1024];

	_itoa(va_arg(d, int), buffer, 10);
	length = write(1, buffer, _strlen(buffer));

	return (length);
}

/**
 * _printf_i - function that prints an integer
 * @i: va_list
 * Return: 1
 */

int _printf_i(va_list i)
{
	int length;
	char buffer[1024];

	_itoa(va_arg(i, int), buffer, 10);
	length = write(1, buffer, _strlen(buffer));

	return (length);
}

/**
 * _printf_per - function that prints a percentage value
 * @p: va_list
 * Return: 1
 */
int _printf_per(va_list p)
{
	_putchar('%');
	(void)p;
	return (1);
}
