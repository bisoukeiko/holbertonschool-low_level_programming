#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 *             followed by a new line
 * @s: pointer of string
 * Return: nothing
 */

void print_rev(char *s)
{

	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		continue;
	}


	for (cnt = (cnt - 1); s[cnt] >= 0; cnt--)
	{
		_putchar(s[cnt]);
	}

	_putchar('\n');

}
