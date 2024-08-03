#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 * Return: 1 on success, -1 on failure
 *         - 1, if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, fwrite;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fwrite = write(fd, text_content, len);

	if (fd == -1 || fwrite == -1)
		return (-1);

	close(fd);

	return (1);
}
