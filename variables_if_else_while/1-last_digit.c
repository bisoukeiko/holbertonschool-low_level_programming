#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of the number stored in the variable n
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	int lastnum = n % 10;

	if (lastnum > 5)
	{

		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);

	}
	if else(lastnum == 0)

		printf("Last digit of %d is %d and is 0\n", n, lastnum);

	}
	if else(lastnum < 6)

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	}

	return (0);
}
