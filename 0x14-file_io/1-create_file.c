#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i, check;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	i = 0;
	while (text_content[i] != '\0')
		i++;

	check = write(fd, text_content, i);
	if (check == -1)
		return (-1);

	close(fd);

	return (1);
}
