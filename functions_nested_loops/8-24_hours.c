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

		if (hour < 10)
		{
			_putchar('0');
		}

		for (minut = 0; minut <= 59; minut++)
		{

			_putchar(hour + '0');
			_putchar(':');

			if (minut < 10)
			{
				_putchar('0');
			}

		_putchar(minut + '0');
		_putchar('\n');

		}
	}
}
