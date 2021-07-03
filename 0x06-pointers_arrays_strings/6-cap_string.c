#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @n: String to capitalize
 * Return: string with all words capitalize.
 */

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == ',' || n[i] == ';' || n[i] == '.' || n[i] == '!' || n[i] == '?'
			|| n[i] == '"' || n[i] == '(' || n[i] == ')' ||
			n[i] == '{' || n[i] == '}' || n[i] == 9 || n[i] == ' ')
		{
			i++;
			if (n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
			}
		}
		if (n[i] == '\n' || n[i] == 32 || n[i] == 59)
		{
			i++;
			if (n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
			}
		}
	}
	return (n);
}
