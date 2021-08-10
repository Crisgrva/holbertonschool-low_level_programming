#include "main.h"
/**
 * main - Write a program that copies the
 * content of a file to another file.
 * @argc: arguments count
 * @argv: Arguments i.e filenames
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd_1, read_1, length = 0, close_1 = 0, fd_2, write_2, close_2 = 0;
	char buffer_1[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	read_1 = read(fd_1, buffer_1, 1024);
	if (read_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (buffer_1[length])
		length++;
	fd_2 = open(argv[2], O_CREAT | O_WRONLY, 0664);
	write_2 = write(fd_2, buffer_1, length);

	if (fd_2 < 0 || write_2 != length)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (close(fd_1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	else if (close(fd_2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	return (0);
}
