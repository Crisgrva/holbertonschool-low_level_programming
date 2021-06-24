#include "holberton.h"

/**
* more_numbers - print numbers from 0 to 14, 10 times
* Return: 0
*/

void more_numbers(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 1; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
