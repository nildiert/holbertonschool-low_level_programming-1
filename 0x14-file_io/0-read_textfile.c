#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: letters to be read
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	int fd;
	char *buf;

	if (filename == NULL) /* checks if there is anything to read */
		return (0);

	fd = open(filename, O_RDONLY); /* read the file only */

	if (fd == -1) /* if fail read, write, open == -1 */
		return (0);

	buf = malloc(sizeof(char) * letters); /* space for \0 */
	if (buf == NULL)
		return (0);

	bytes_read = read(fd, buf, letters);
	/* reading into fd based on letters, of size buff */

	if (bytes_read == -1)
		return (0);

	buf[bytes_read] = '\0'; /* set null terminator */

	bytes_written =  write(STDOUT_FILENO, buf, bytes_read);
	/* write to std out of buf based on bytes_read */

	if (bytes_written == -1)
		return (0);

	free(buf);
	close(fd);

	return (bytes_read);
}
