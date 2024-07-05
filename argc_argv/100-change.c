#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins
 *        to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		coin = 0;
	}
	else
	{	
		coin += atoi(argv[1]) / 25;
		coin += (atoi(argv[1]) % 25) / 10;
		coin += ((atoi(argv[1]) % 25) % 10) / 5;
		coin += (((atoi(argv[1]) % 25) % 10) % 5) / 2;
		coin += ((((atoi(argv[1]) % 25) % 10) % 5) % 2);
	}

	printf("%d\n", coin);

	return (0);

}
