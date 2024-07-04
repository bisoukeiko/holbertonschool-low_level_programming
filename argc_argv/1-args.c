#include <stdio.h>

/**
 * main - print the number of arguments passed into program
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);

}
