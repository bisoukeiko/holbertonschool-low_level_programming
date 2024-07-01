#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: a prefix substring
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{

	int index_s;
	int index_a;
	unsigned int len;

	index_a = 0;
	len = 0;

	for (index_s = 0; *(s + index_s) != '\0'; index_s++)
	{

		for (index_a = 0; *(accept + index_a) != '\0'; index_a++)
		{
			if (*(s + index_s) == *(accept + index_a))
			{
				len++;
				break;
			}

			if (*(accept + (index_a + 1)) == '\0')
			{
				return (len);
			}
		}

	}

	return (len);
}
