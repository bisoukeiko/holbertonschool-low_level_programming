#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform simple operations
 * @argc: the number of arguments
 * @argv: an array contain calc num1 operator num2
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%')
	&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
