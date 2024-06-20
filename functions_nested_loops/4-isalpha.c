#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for alphabetic character
 * @c: The character to be checked
 * Return: 1 if a letter, lowercase or uppercase
 *         0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
