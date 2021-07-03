#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *
 * Return: Always char*
 * @a: is a variable char*.
 *
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = (a[i] - 32);
			}
		}
		if (a[i] == ' ' || a[i] == ',' || a[i] == '"' || a[i] == '('
		|| a[i] == '.' || a[i] == ')' || a[i] == ';' || a[i] == '!'
		|| a[i] == '?' || a[i] == '}' || a[i] == '{' || a[i] == '\t')
		{
			++i;
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = (a[i] - 32);
			}
		}
		if (a[i] == '\n' || a[i] == 32)
		{
			i++;
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = (a[i] - 32);
			}
		}
	}
	return (a);
}
