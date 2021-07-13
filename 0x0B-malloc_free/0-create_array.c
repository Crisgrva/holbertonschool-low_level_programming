#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array with a specific char.
 * @size: length of array
 * @c: String
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
