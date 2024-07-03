#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: a number
 * Return: the factorial of a given number
 *         -1 If n is lower than 0
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
