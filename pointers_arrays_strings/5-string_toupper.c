#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string
 *                  to uppercase
 * @str: the string which include lowercase lettre
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{

		if (str[index] >= 'a' && str[index] <= 'z')
		{

			str[index] = str[index] - 32;

		}

	}

	return (str);

}
