#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int cnt1;
	int cnt2;

	if (size > 0)
	{

		for (cnt1 = 0; cnt1 < size; cnt1++)
		{


			for (cnt2 = size; cnt2 > 0; cnt2--)
			{

				if (cnt2 > (cnt1 + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}

			}

			_putchar('\n');
		}

	}
	else
	{

		_putchar('\n');

	}

}
