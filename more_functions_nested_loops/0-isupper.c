#include <ctype.h>

/**
 * _isupper - check for uppercase character
 * @c: The character to be checked
 * Return: 1 c is uppercase
 *         0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{

		return (1);

	}
	else
	{

		return (0);

	}
}
