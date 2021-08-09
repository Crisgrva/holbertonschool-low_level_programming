#include "main.h"

int main(int argc, char *argv[])
{
	/* File 1 */
	int fd_1, read_1, length = 0;
	char *buffer_1;

	/* File 2 */
	int fd_2, write_2;

	/* Error Messages */
	char usageERR[28] = "Usage: cp file_from file_to";

	if (argc != 3)
	{
		write(1, usageERR, 28);
		exit(97);
	}

	/* File 1 */
	buffer_1 = malloc(sizeof(char) * 1024);
	fd_1 = open(argv[1], O_RDONLY);
	read_1 = read(fd_1, buffer_1, 1024);

	while (buffer_1[length])
		length++;

	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write_2 = write(fd_2, buffer_1, length);

	free(buffer_1);
	close(fd_1);
	close(fd_2);
	return (0);
}
