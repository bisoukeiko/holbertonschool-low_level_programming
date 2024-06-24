#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * Return: nothing
 */

void print_line(int n)
{
	int cnt;

	if (n <= 0)
	{

		for (cnt = 0; cnt < n; cnt++)
		{

			_putchar("_");

		}

	}

	_putchar('\n');

}
