#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The last digit
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int final_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	final_num = n % 10;

	/* your code goes there */
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, final_num);

	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
		, n, final_num);

	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, final_num);

	return (0);
}
