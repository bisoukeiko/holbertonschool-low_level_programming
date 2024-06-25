#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer of string
 * Return: nothing
 */

void _puts(char *str)
{

	int cnt;

	for (cnt = 0; str[cnt] != '\0'; ++cnt)
	{
		_putchar(str[cnt]);
	}

	_putchar('\n');

}
