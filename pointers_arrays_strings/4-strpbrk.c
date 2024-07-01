#include "main.h"

/**
 * _strpbrk - searche a string for any of a set of bytes
 * @s: string to be searched
 * @accept: The set of bytes to be searched for 
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{

	int index_s;
	int index_a;

	for (index_s = 0; *(s + index_s) != '\0'; index_s++)
	{

		for (index_a = 0; *(accept + index_a) != '\0'; index_a++)
		{
			if (*(s + index_s) == *(accept + index_a))
			{
				return (s + index_s);
			}

		}

	}

	return ('\0');

}
