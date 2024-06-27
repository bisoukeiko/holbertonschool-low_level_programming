#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer of string
 * @src: pointer of string
 * Return: pointer of string
 */

char *_strcat(char *dest, char *src)
{

	int index_d;
	int index_s;

	for (index_d = 0; dest[index_d] != '\0'; index_d++)
	{
		continue;
	}

	for (index_s = 0; src[index_s] != '\0'; index_s++)
	{
		index_d++;
		dest[index_d] = src[index_s];
	}

	return (*dest);

}
