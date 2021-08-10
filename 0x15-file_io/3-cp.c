#include "main.h"
/**
 * main - Write a program that copies the
 * content of a file to another file.
 * @argc: arguments count
 * @av: Arguments i.e filenames
 * Return: Always 0
 */

int main(int argc, char *av[])
{
	int fd_1, read_1, fd_2, write_2;
	char buffer_1[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_1 = open(av[1], O_RDONLY);
	if (fd_1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);

	if (fd_2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((read_1 = read(fd_1, buffer_1, 1024)) > 0)
		if ((write_2 = write(fd_2, buffer_1, read_1)) < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	if (read_1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	else if (close(fd_1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1), exit(100);
	else if (close(fd_2) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2), exit(100);
	return (0);
}
