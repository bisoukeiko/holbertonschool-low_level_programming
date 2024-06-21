#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @last_digit: The number to be checked
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit;
	last_digit = num % 10;

	if (last_digit < 0)
	{

		_putchat(last_digit);
	}
	else
	{
		_putchat(last_digit);
	}

	return (last_digit);
}
