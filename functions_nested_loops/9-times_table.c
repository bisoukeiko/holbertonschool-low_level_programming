#include "main.h"

/**
 * times_table - print the 9 times table
 *              starting with 0
 * Return: nothing
 */

void times_table(void)
{
	int num1;
	int num2;
	int result;

	for (num1 = 0; num1 <= 9; num1++)
	{

		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;

			if ((result / 10) != 0)
			{
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');
			_putchar(',');
			_putchar(' ');

		}

		_putchar('\n');

	}

}

