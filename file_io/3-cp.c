#include "main.h"

#define MAXSIZE 1024

/**
 * func_err - print error message and exit
 * @code: exit code
 * @file: file name
 * @fd: The value of file descriptor
 * Return: void
 */
void func_err(int code, char *file, int fd)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(code);

		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(code);

		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(code);

		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(code);

		default:
			return;
	}
}


/**
 * func_copy - Copie the content of a file to another file
 * @file_from: source file
 * @file_to: destination file
 * Return: Nothing
 * Description:
 *       exit code 97, if the number of argument is not the correct
 *       exit code 98, if file_from does not exist or can not read it
 *       exit code 99, if you can not create or if write to file_to fails
 *       exit code 100, if you can not close a file descriptor
 */

void func_copy(char *file_from, char *file_to)
{
	int fd_from, fd_to, fread, fwrite, fclose;
	char *buffer[MAXSIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		func_err(98, file_from, 0);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
		func_err(99, file_to, 0);


	fread = 1;
	while (fread > 0)
	{
		fread = read(fd_from, buffer, MAXSIZE);
		if (fread == -1)
			func_err(98, file_from, 0);

		fwrite = write(fd_to, buffer, fread);
		if (fwrite == -1 || fread != fwrite)
			func_err(99, file_to, 0);
	}

	fclose = close(fd_from);
	if (fclose == -1)
		func_err(100, NULL, fd_from);

	fclose = close(fd_to);
	if (fclose == -1)
		func_err(100, NULL, fd_to);
}


/**
 * main - Copie the content of a file to another file
 * @argc: the number of the arguments
 * @argv: An array of the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		func_err(97, NULL, 0);
	}

	func_copy(argv[1], argv[2]);

	return (0);
}
