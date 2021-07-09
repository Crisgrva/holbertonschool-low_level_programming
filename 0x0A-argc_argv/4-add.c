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
	if (*argv[0] == '\0')
	{
		printf("0\n");
	}
	for (i = 1; argv[i]; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	(void)argc;
	return (0);
}
