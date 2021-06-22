#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - print_alphabet_x10
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int letter;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
