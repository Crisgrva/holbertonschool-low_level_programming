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
	int j;
	int sum_alpha = 0;
	int sum = 0;

	if (*argv[0] == '\0')
	{
		printf("0\n");
	}

	for (j = 1; argv[j]; j++)
	{
		if (isdigit(*argv[j]) == 0)
			sum_alpha += 1;
	}
	j--;
	if (sum_alpha == j)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (0);
		}
		else if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (0);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	(void)argc;
}
