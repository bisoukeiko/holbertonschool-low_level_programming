#include "main.h"
#include <ctype.h>

/**
 * _islower - check for lowercase character
 * Return: 1 if c is lowercase, 0 othercase
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
