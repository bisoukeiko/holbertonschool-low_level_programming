#include "main.h"

/**
 * puts2 -  print every other character of a string
 *          starting with the first character
 *          followed by a new line.
 * @str: pointer of string
 * Return: nothing
 */

void puts2(char *str)
{

	int cnt;

	for (cnt = 0; str[cnt] != '\0'; cnt++)
	{

		_putchar(str[cnt]);
		cnt++;

	}

	_putchar('\n');

}
