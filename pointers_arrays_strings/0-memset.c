#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(s + index) = b;
	}

	return (s);
}
