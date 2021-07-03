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
		if ((n[i] >= 0 && n[i] <= 47) || (n[i] >= 58 && n[i] <= 64) ||
			(n[i] >= 91 && n[i] <= 96) || (n[i] >= 123 && n[i] <= 127))
		{
			if (n[i] == 45)
			{
			}
			else
			{
				i++;
				if (n[i] >= 97 && n[i] <= 122)
				{
					n[i] = n[i] - 32;
				}
			}
		}
		if (n[i] == '\n')
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
