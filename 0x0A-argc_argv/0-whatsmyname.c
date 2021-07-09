#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	printf("\n");
}
