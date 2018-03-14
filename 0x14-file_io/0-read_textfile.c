#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filenanme: name of the file
 * @letters: letters to be read
 * Return - actul number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters); /* space for \0 */
	if (buf == NULL)
		return (0);

	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
		return (0);

	buf[bytes_read] = '\0'; /* off set value first */

	close(fd);

	bytes_written =  write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1)
		return (0);

	free(buf);

	return (bytes_read);
}
