#include "own_functions.h"

/**
 * _printf - function that produces output
 * according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;

	funct_t types[] = {
		{"s", _printf_s},
		{"c", _printf_c},
		{"d", _printf_d},
		{"i", _printf_i},
		{"%", _printf_per},
		{"b", _printf_bin},
		{"o", _printf_o}};

	int i, j;
	int counter = 0;

	va_start(ap, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 7; j++)
			{
				if (format[i] == *(types[j].name))
					counter += types[j].f(ap);
			}
		}
		else
			counter += write(1, &format[i], 1);
	}
	va_end(ap);
	return (counter);
}
