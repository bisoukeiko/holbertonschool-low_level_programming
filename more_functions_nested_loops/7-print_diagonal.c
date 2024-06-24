#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @num: the number of times the character \ should be printed
 * Return: nothing
 */

void print_diagonal(int num)
{
	int cnt1;
	int cnt2;

	if (num > 0)
	{
		for (cnt1 = 0; cnt1 < num; cnt1++)
		{

			for (cnt2 = 0; cnt2 < num; cnt2++) 
			{

				if (cnt1 == cnt2)
				{

					_putchar('\\\n');

				}
				else
				{
				
					_putchar(' ');

				}

			}

		}

	}

	_putchar('\n');

}
