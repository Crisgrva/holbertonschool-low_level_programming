#include <stdio.h>

/**
 * main - Print tebahpla
 * Print all alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	int letter = 97;
	int last_letter = 122;

	while (last_letter >= letter)
	{
		putchar(last_letter);
		last_letter--;
	}
	putchar('\n');
	return (0);
}
