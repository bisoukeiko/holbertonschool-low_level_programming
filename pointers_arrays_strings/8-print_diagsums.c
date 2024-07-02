#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: a two-dimensional array
 * @size: size for sum
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 = sum1 + a[index * size + index];
		sum2 = sum2 + a[index * size + (size - 1 - index)];
	}

	printf("%d, %d\n", sum1, sum2);

}
