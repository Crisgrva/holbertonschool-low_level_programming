#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int, char);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer;
	unsigned int size;

	size = 0;
	buffer = create_array(size, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (0);
	}
	free(buffer);
	return (0);
}
