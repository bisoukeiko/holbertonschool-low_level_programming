#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *            including the terminating null byte (\0)
 *            to the buffer pointed to by dest
 * @dest: the buffer pointed
 * @src: the string pointed
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{

	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);

}
