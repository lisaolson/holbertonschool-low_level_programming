#include "holberton.h"

/**
 * read_textfile - reads a text file and prints to POSIX
 * @filename: file to read and print
 * @letters: letters to read and print
 * Return: number of letters or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int bfct, fd, check;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bfct = read(fd, buf, letters);
	if (bfct == -1)
		return (0);

	check = write(STDOUT_FILENO, buf, bfct);
	if (check == -1)
		return (0);

	close(fd);

	return (bfct);
}
