#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 *                  followed by a new line.
 * Return: nothing
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
