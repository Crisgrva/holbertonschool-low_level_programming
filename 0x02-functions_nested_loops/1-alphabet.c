#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - print alphabet
 * Print alphabet in lowecase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
