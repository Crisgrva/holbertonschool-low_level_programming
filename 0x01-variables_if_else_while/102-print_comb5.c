#include <stdio.h>

/**
 * main - Comb3
 * Print all combinations between 2 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number_1;
	int number_2;
	/**
	 * Parse numbers
	 */
	int first_1, second_1;
	int first_2, second_2;

	for (number_1 = 0; number_1 <= 98; number_1++)
	{
		for (number_2 = 0;number_2 <= 99; number_2++)
		{
			first_1 = number_1 / 10;
			second_1 = number_1 % 10;
			first_2 = number_2 / 10;
			second_2 = number_2 % 10;

			putchar('0' + first_1);
			putchar('0' + second_1);
			putchar(' ');
			putchar('0' + first_2);
			putchar('0' + second_2);

			if (number_1 != 98 || number_2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return(0);
}
