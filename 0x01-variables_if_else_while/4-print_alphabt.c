#include <stdio.h>

/**
 * main - Print alphabet
 * Print all alphabet except q letter and e letter
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		if (letter != 113 && letter != 101)
			putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
