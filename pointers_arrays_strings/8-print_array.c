#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers
 *               followed by a new line
 * @a: pointer of the elements of the array
 * @n: number of elements of the array
 * Return: nothing
 */

void print_array(int *a, int n)
{

	int index;

	for (index = 0; index <= n - 1; index++)
	{

		if (index == n - 1)
		{
			printf("%d", a[index]);
		}
		else
		{
			printf("%d", a[index]);
			printf(", ");
		}

	}

	printf("\n");

}
