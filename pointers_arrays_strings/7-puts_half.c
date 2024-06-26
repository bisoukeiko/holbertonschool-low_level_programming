#include "main.h"

/**
 * puts_halh -  print the second half of a string
 *              followed by a new line
 *              
 * @str: pointer of string
 * Return: nothing
 */

void puts_half(char *str)
{

	int len;
	int index;

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	if ((len / 2) == 0)
	{

		for (index = (len / 2 + 1); index < len; index++)
		{
	
			_putchar(str[index]);
	
		}

	}
	else
	{

		for (index = (len / 2); index < len; index++)
		{
	
			_putchar(str[index]);
	
		}

	}

	_putchar('\n');

}
