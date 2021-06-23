#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: number to secuence
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
}
