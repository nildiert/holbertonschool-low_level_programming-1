#include "holberton.h"

/**
 * error_98 - helper function to print out error 98
 * @fd: file descriptor
 * @file_1:
 * @file_2:
 * Return: Nothing
 */

void error_98(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
	exit(98);
}

/**
 * error_99 - helper function to print out error 99
 * @fd: file descriptor
 * Return: Nothing
 */

void error_99(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
	exit(99);
}

/**
 * error_100 - helper function to print out error 100
 * @fd: file descriptor
 * Return: Nothing
 */

void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument varible
 * Return: copied content
 */

int main(int argc, char *argv[])
{
	int read_file, write_file, close_file;
	int file_1, file_2;
	char *buf[1024];

	if (argc != 3)  /* ./cp from to */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_1 = open(argv[1], O_RDONLY);
	if (file_1 == -1)
		error_98(argv[1]);

	file_2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);

	if ((file_2 == -1))
		error_99(argv[2]);

	while ((read_file = read(file_1, buf, 1024)) != 0)
		/*checks for -1 or non 0 number */
	{
		if (read_file == -1)
			error_98(argv[1]);

		write_file = write(file_2, buf, read_file);
		if (write_file == -1)
			error_99(argv[2]);
	}

	close_file = close(file_1);
	if (close_file == -1)
		error_100(file_1);

	close_file = close(file_2);
	if (close_file == -1)
		error_100(file_2);

	return (0);
}
