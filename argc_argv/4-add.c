#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 *       : 1 If one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int index;
	int index_d;
	int sum = 0;
	char *digit;

	for (index = 1; index < argc; index++)
	{
		digit = argv[index];

		for (index_d = 0; digit[index_d] != '\0'; index_d++)
		{
			if (digit[index_d] >= '0' && digit[index_d] <= '9')
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[index]);
	}

	printf("%d\n", sum);

	return (0);

}
