#include <stdio.h>

/**
 * main - Print comb
 * Print possible combinations of single digit
 * Return: 0 (Success)
 */
int main(void)
{
	int number_0 = 48;
	int number_9 = 57;

	while (number_0 <= number_9)
	{
		putchar(number_0);
		if (number_0 < number_9)
		{
			putchar(',');
			putchar(' ');
		}
		number_0++;
	}
	putchar('\n');
	return (0);
}
