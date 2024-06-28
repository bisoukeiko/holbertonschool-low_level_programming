#include "main.h"

/**
 * _strncpy - copie a strings
 * @dest: pointer of string
 * @src: pointer of string
 * @n : number of bytes from src to be appended to dest
 * Return: pointer of string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int index;

	for (index = 0, index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);

}
