#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: pointer of string
 * @src: pointer of string
 * @n : number of bytes from src to be appended to dest
 * Return: pointer of string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index_d;
	int index_s;

	for (index_d = 0; dest[index_d] != '\0'; index_d++)
	{
		continue;
	}

	for (index_s = 0; index_s < n && src[index_s] != '\0';
		       index_s++, index_d++)
	{
		dest[index_d] = src[index_s];
	}

	dest[index_d] = '\0';


	return (dest);

}
