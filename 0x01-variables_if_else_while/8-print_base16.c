#include <stdio.h>

/**
 * main - Print numbers
 * Print numbers from 0 to 9
 * Return: 0 (Success)
 */
int main(void)
{
	int number_0 = 48;
	int number_6 = 54;
	int letter_a = 97;
	int letter_f = 102;

	while (number_0 <= number_6)
	{
		putchar(number_0);
		number_0++;
	}
	while (letter_a <= letter_f)
	{
		putchar(letter_a);
		letter_a++;
	}

	putchar('\n');
	return (0);
}
