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


	_putchar(last_digit + '0');

	return (last_digit);
}
