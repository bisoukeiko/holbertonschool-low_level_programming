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

	int len;
	int index;

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}


	for (index = 0; index < len; index++)
	{

		_putchar(str[index]);
		index++;

	}

	_putchar('\n');

}
