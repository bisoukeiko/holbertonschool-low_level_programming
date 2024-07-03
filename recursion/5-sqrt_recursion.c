#include "main.h"

/**
 * _sqrt_recursion2 - return the natural square root of a number
 * @n: a natural square root of a number
 * @root: root of number
 * Return: a natural square root of a number
 *         -1 if n does not have a natural square root
 */

int _sqrt_recursion2(int n, int root)
{

	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion2(n, root + 1));
	}
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: a natural square root of a number
 * Return: a natural square root of a number
 *         -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion2(n, 0));
	}
}
