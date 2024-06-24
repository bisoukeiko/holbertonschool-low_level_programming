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


			for (cnt2 = 0; cnt2 < size; cnt2++)
			{

				if (cnt1 <= cnt2)
				{
					_puchar('#');
					break;
				}
				else
				{
					_putchar(' ');
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
