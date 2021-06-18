#include <stdio.h>

/**
 * main - Print all  alphabet
 * Print all alphabet in lowercase and Uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	int bg_letter_lowercase = 97;
	int end_letter_lowercase = 122;
	int bg_letter_uppercase = 65;
	int end_letter_uppercase = 90;

	while (bg_letter_lowercase <= end_letter_lowercase)
	{
		putchar(bg_letter_lowercase);
		bg_letter_lowercase++;
	}
	while (bg_letter_uppercase <= end_letter_uppercase)
	{
		putchar(bg_letter_uppercase);
		bg_letter_uppercase++;
	}
	putchar('\n');
	return (0);
}
