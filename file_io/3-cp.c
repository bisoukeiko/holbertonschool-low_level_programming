#include "main.h"

/**
 * func_close - Close the file descriptors
 * @fd: The file descriptor to be closed
 * Return: Nothing
 */
void func_close(int fd)
{
	int fclose;

	fclose = close(fd);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * func_err - print error message and exit
 * @str: error message
 * @file: file name
 * @code: exit code
 * Return: void
 */
void func_err(char *str, char *file, int code)
{
	dprintf(STDERR_FILENO, str, file);
	exit(code);
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
	int fd_from, fd_to, fread, fwrite;
	char *buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		func_err("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		func_err("Error: Can't write to %s\n", file_to, 99);

	fread = 1024;
	while (fread == 1024)
	{
		fread = read(fd_from, buffer, 1024);
		if (fread == -1)
			func_err("Error: Can't read from file %s\n", file_from, 98);

		fwrite = write(fd_to, buffer, fread);
		if (fwrite == -1 || fread != fwrite)
		{
			func_err("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (fread == -1)
		func_err("Error: Can't read from file %s\n", file_from, 98);


	func_close(fd_from);
	func_close(fd_to);
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
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	func_copy(argv[1], argv[2]);

	return (0);
}
