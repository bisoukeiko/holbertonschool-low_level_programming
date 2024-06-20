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

int print_alphabet()
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
		_putchar('\n');

}
