#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer of first integer
 * @b: pointer of second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{

	int num1;
	int num2;

	num1 = *a;
	num2 = *b;

	*a = num2;
	*b = num1;

}
