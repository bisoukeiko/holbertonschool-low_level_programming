#include <stdlib.h>
#include "main.h"

/**
 * create_file - Create a file
 * @filename: The pointer to the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fwrite;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			continue;
		}
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	fwrite = write(fd, text_content, len);

	if (fd == -1 || fwrite == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
