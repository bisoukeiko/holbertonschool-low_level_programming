#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 *       : 1 If the program does not receive two arguments
 */

int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("Error\n");
		return (1);

	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);

}
