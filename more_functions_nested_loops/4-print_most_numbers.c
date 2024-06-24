#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *                  followed by a new line
 *                  Do not print 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{

		if (num == 2 || num == 4)
		{

			continue;

		}
		else
		{

			_putchar(num + '0');

		}

	}

	_putchar('\n');

}
