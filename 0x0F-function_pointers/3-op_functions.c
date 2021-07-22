#include "3-calc.h"

/**
 * op_add - Function sum two integers
 * @a: Number to sum
 * @b: Number to sum
 * Return: result of operation
 */

int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (0);
}

/**
 * op_sub - Function that subs two integers
 * @a: Number to subs
 * @b: Number to subs
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (0);
}

/**
 * op_mul - Function that multiplie two integers
 * @a: Number to mul
 * @b: Number to mul
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (0);
}

/**
 * op_div - Function that divides two integers
 * @a: Number to div
 * @b: Number to div
 * Return: result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", a / b);
	return (0);
}

/**
 * op_mod - Function that return modulo
 * @a: Number to mod
 * @b: Number to mod
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", a % b);
	return (0);
}
