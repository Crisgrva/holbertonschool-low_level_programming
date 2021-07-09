#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
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
	printf("%d\n", i);
	(void)argc;
}
