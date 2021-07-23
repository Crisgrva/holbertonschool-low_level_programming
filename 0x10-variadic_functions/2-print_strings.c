#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @n: number of arguments
 * @separator: Character to separate elements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strn;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		strn = va_arg(ap, char *);

		if (strn == NULL)
			printf("(nil)");
		else
			printf("%s", strn);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
