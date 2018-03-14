#include "holberton.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: file to append to
 * @text_content: content to add to end of a file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, check;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
