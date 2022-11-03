#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: filename of the file to be created
 *
 * @text_content: content of the file
 *
 * Return: 0 on fail
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	write_bytes = write(fd, text_content, len);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
