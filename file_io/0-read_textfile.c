#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read a text file and print it 
 *                 to the POSIX standard output
 * @filename: The pointer to the file that program should read
 * @letters: The number of letters that program should read and print 
 * Return: The actual number of letters it could read and print
 *         0, if the file can not be opened or read, return
 *         0, if filename is NULL
 *         0, if write fails or doesn't write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	fopen = open(filename, O_RDONLY);
	fread = read(fopen, buf, letters);
	fwrite = write(STDOUT_FILENO, buf, fread);

	if (fopen == -1 || fread == -1 || fwrite == -1 || fread != fwrite)
	{
		free(buf);
		return (0);
	}

	free(buf);

	close(fopen);

	return (fwrite);
}
