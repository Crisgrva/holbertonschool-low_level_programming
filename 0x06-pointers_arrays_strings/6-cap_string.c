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
	int m;

	for (m = 0; a[m] != '\0'; m++)
	{
		if (m == 0)
		{
			if (a[m] >= 97 && a[m] <= 122)
			{
				a[m] = (a[m] - 32);
			}
		}
		if (a[m] == ' ' || a[m] == ',' || a[m] == '"' || a[m] == '('
		|| a[m] == '.' || a[m] == ')' || a[m] == ';' || a[m] == '!'
		|| a[m] == '?' || a[m] == '}' || a[m] == '{' || a[m] == '\t')
		{
			++m;
			if (a[m] >= 97 && a[m] <= 122)
			{
				a[m] = (a[m] - 32);
			}
		}
		if (a[m] == '\n' || a[m] == 32)
		{
			m++;
			if (a[m] >= 97 && a[m] <= 122)
			{
				a[m] = (a[m] - 32);
			}
		}
	}
	return (a);
}
