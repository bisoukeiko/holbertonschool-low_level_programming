#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a string to add the end of the file
 * Return: 1 on success, -1 on failure
 *         -1, if filename is NULL
 *         -1, if the file does not exist
 *         -1, if don't have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fwrite;
	int len = 0;

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

	fd = open(filename, O_WRONLY | O_APPEND);
	fwrite = write(fd, text_content, len);

	if (fd == -1 || fwrite == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
