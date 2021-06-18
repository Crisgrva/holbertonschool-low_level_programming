#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 * Print all alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int number_0 = 48;
	int number_9 = 57;

	while (number_0 <= number_9)
	{
		putchar(number_0);
		number_0++;
	}
	putchar('\n');
	return (0);
}

