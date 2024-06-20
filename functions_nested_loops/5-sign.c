#include "main.h"

/**
 * _print_sign - print the sign of a number
 * @c: The number to be checked
 * Return: 1 if the number is greater than zero
 *         0 if the number is zero
 *        -1 if the number is less than zero
 */

int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0 )
	{
		_putchar('0');
		return (0);
	}
	else (n < 0 )
	{
		_putchar('-');
		return (-1);
	}
}
