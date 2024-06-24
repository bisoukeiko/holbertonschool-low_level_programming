#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @num: the number of times the character _ should be printed
 * Return: nothing
 */

void print_line(int num)
{
	int cnt;

	if (num > 0)
	{
		for (cnt = 0; cnt < num; cnt++)
		{

			_putchar('_');

		}

	}

	_putchar('\n');

}
