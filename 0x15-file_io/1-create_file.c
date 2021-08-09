#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s: variable to change the address
* Return: 0
*/

int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}

/**
 * create_file - Create a function that creates a file.
 * @filename: Is the name of the file to create
 * @text_content: Is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;

	buffer = malloc(_strlen(text_content) * (sizeof(char)));
	fd = open(filename, O_CREAT | O_WRONLY, 00600);

	write(fd, buffer, _strlen(text_content));
	return (1);
}
