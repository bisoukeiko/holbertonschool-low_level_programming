#include <stdio.h>

/**
 * main - print all arguments program receives
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */

int main(int argc, char *argv[])
{

	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);

}
