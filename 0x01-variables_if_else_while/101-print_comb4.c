#include <stdio.h>

/**
 * main - Comb3
 * Print all combinations between 3 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (n = j + 1; n <= 9; n++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + n);
				if (i != 7 || j != 8 || n != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
