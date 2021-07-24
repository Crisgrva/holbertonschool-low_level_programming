#include "variadic_functions.h"

/**
 * print_char - Function that prints a char
 * @c: lists of arguments to print
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - Function that prints integers.
 * @i: lists of arguments to print
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - Function that prints a float.
 * @f: lists of arguments to print
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_char_p - Function that prints char *.
 * @s: list of arguments to print
 */

void print_char_p(va_list s)
{
	char *strn = va_arg(s, char *);

	if (strn == NULL)
		printf("(nil)");
	else
		printf("%s", strn);
}

/**
 * print_all - Function that prints anything.
 * @format: format to print
 */

void print_all(const char *const format, ...)
{
	va_list list;

	format_t argum[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_p},
		{NULL, NULL}};
	int i = 0, j = 0;
	char *sep = "";

	va_start(list, format);

	while (argum[i].name)
	{
		j = 0;
		while (format[j])
		{
			if (format[j] == *(argum[i].name))
			{
				printf("%s", sep);
				argum[i].f(list);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
