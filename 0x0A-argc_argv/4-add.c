#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
		if ((*argv[i] >= 0 && *argv[i] <= 47) || (*argv[i] >= 58 && *argv[i] <= 127))
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	(void)argc;
	return (0);
}
