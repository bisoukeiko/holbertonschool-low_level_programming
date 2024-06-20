#include "main.h"

/**
 * main - prints the alphabet, in lowercase,
 *        followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int alphabet;

	print_alphabet();

	return (0);
}

print_alphabet()
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
		_putchar("\n");
}
