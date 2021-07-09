#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; argv[i]; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error");
			return (0);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d", sum);

	(void)argc;
	return (0);
}
