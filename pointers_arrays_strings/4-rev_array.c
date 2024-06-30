#include "main.h"

/**
 * reverse_array -  reverse the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int index;
	int tmp;

	n = n - 1;

	for (index = 0; index <= n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n];
		a[n] = tmp;
		n--;
	}

}
