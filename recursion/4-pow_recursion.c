#include "main.h"

/**
 * _pow_recursion - return the value of x
 *                  raised to the power of y
 * @x: number to be raised
 * @y: number
 * Return: power number
 *         -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
