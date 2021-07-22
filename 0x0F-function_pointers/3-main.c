#include "3-calc.h"
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
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	(void)argc;
	return (0);
}
