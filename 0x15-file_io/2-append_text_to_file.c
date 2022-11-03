#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: filename of the file to be appended
 *
 * @text_content: content to be appended
 *
 * Return: 0 on fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

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
