#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Positive anything is better than negative nothing
 * Print if 0 is iqual, greater or less
 * Return: 0 (Success)
 */
int positive_or_negative(int n)
{
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);

	return (0);
}
