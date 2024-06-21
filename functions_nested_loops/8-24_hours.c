#include "main.h"

/**
 * jack_bauer - print every minute
 *              starting from 00:00 to 23:59
 * Return: nothing
 */

void jack_bauer(void)
{
	int hour;
	int minut;

	for (hour = 0; hour <= 23; hour++)
	{

		for (minut = 0; minut <= 59; minut++)
		{

			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minut / 10) + '0');
			_putchar((minut % 10) + '0');
			_putchar('\n');

		}

	}

}

