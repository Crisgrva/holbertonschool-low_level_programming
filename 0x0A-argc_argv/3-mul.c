#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
	}

	i--; /** Convert index to absolute **/
	if (i != 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	(void)argc;
	return (0);
}
