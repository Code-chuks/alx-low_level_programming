#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- The file is printed to STDOUT.
 * @filename: the file to be read
 * @letters: number of letters it could or should read and print
 * Return: w- for definite number of bytes read and printed
 *        0 when  filename is NULL 0r the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
