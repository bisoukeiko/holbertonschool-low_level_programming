#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 *                      in lowercase, followed by a new line.
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		_putchar('\n');

	}
}
