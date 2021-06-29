#include "holberton.h"
#include <stdio.h>
/**
* puts_half - puts half of string
* @str: string to divided
* Return: 0
*/

void puts_half(char *str)
{
	int i;
	int half_count;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	printf("Count is: %d\n", count);
	if (count % 2 != 0)
	{
		count--;
		half_count = count / 2;
	}
	else
	{
		half_count = count / 2;
	}

	for (; half_count < count; half_count++)
	{
		if (str[half_count] != '\0')
			_putchar(str[half_count]);
	}
	_putchar('\n');
}
