#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 * Return: nothing
 */

void print_square(int size)
{
	int cnt1;
	int cnt2;

	if (size > 0)
	{

		for (cnt1 = 0; cnt1 < size; cnt1++)
		{


			for (cnt2 = 0; cnt2 < size; cnt2++)
			{

				_putchar('#');

			}

			_putchar('\n');
		}

	}
	else
	{

		_putchar('\n');

	}

}
