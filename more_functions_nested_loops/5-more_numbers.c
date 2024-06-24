#include "main.h"

/**
 * print_more_numbers - print 10 times the numbers, from 0 to 14
 *                      followed by a new line
 * Return: nothing
 */

void print_more_numbers(void)
{
	int cnt;
	int num;

	for (cnt = 0; cnt < 10; cnt++)
	{
		for (num = 0; num <= 14; num++)
		{

			_putchar(num + '0');

		}

		_putchar('\n');

	}

	_putchar('\n');

}
