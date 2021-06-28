#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Positive anything is better than negative nothing
 * @i: number to evaluate
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	int n;

	n = i;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
}
