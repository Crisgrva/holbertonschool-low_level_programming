#include <stdio.h>
#include <stdlib.h>
void print_binary(unsigned long int n)
{
	long binary = 0, module, f = 1;
	while (n != 0)
	{
		module = n % 2;
		binary += module * f;
		f = f * 10;
		n = n / 2;
	}
	printf("%ld", binary);
}
