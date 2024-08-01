#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: The converted number
 *         0, If b is NULL or contains chars not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{

	int len;
	unsigned int decimal = 0;
	unsigned int power = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	for (len--; len >= 0; len--)
	{
		decimal += (b[len] - '0') * power;
		power *= 2;
	}

	return (decimal);

}
