#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 *               followed by a new line
 * @n: integer
 * Return: nothing
 */

void print_to_98(int n)
{

	int cnt;

	if (n > 98)
	{
		for (cnt = n; cnt >= 98; cnt--)
		{
			printf("%d", cnt);

			if (cnt != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (cnt = n; cnt <= 98; cnt++)
		{
			printf("%d", cnt);

			if (cnt != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}

	printf("\n");

}
