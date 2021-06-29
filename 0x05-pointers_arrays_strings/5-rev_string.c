#include "holberton.h"

/**
* rev_string - function that returns string reversed
* @s: string to reverse
* Return: 0
*/

void rev_string(char *s)
{
	int i;
	int n = 0;
	int j = 0;
	int count = 0;
	char width_var[1024];

	/** Get lenght of string */
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	count--;

	/** init array with lenght of previous string */

	for (; count >= 0; count--)
	{
		width_var[j] = s[count];
		j++;
	}

	/** Reasign index of width array to s array */
	while (s[n] != '\0')
	{
		s[n] = width_var[n];
		n++;
	}
}
