#include "main.h"

/**
 * main - prints the alphabet, in lowercase,
 *        followed by a new line.
 * Return: Always 0.
 */

int main(void)
{

	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
