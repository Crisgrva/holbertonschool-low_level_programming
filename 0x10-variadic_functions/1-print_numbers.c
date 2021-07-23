#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @n: number of arguments
 * @separator: Character to separate elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	/* Initialize the argument list. */
	va_start(ap, n);

	/* If separator is NULL, don’t print it */
	if (separator == NULL)
		separator = "";

	/* print every number of arguments with separator */
	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		/* print separator until before the last item */
		if (i != (n - 1))
			printf("%s ", separator);
		i++;
	}

	printf("\n");
	/* Clean up. */
	va_end(ap);
}
