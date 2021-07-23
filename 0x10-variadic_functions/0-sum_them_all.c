#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum
 * of all its parameters.
 * @n: number of arguments
 * Return: Result of sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	/* Initialize the argument list. */
	va_start(ap, n);

	/* Get the next argument value. */
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	/* Clean up. */
	va_end(ap);
	return (sum);
}
