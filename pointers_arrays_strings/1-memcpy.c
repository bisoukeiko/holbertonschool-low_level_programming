#include "main.h"

/**
 * memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes copied
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}

	return (dest);
}
