#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 * @argc: stands for argument count
 * @argv: stands for argument values
 * Return: 0 its ok, 1 its error
 */
int main(int argc, char *argv[])
{
	// int i;
	// int k;
	int sum = 0;

	printf("%c ", *argv[1]++);
	// for (i = 0; i < argc; i++)
	// {
	// 	if (!(argv[i]))
	// 	{
	// 		printf("Error\n");
	// 		return (1);
	// 	}
	// 	sum += atoi(argv[i]);
	// }
	(void)argc;
	printf("%d\n", sum);
	return (0);
}
