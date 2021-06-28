#include <stdlib.h>
#include <stdio.h>

int main()
{
	long letters[] = {'H', 'O', 'L', 'B'};

	printf("pointer address is %lu\n", &letters);
	printf("pointer address is %lu\n", &letters[0]);
	printf("pointer address is %lu\n", &letters[1]);

	return 0;
}
