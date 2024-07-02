#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be searched
 * @needle: The set of bytes to be searched for
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{

	int index_h;
	int index_n;
	int index_r = 0;

	for (index_h = 0; *(haystack + index_h) != '\0'; index_h++)
	{

		for (index_n = 0; *(needle + index_n) != '\0'; index_n++)
		{
			if (*(haystack + index_h) == *(needle + index_n))
			{
				if  (*(haystack + index_h - 1) != *(needle + index_n - 1))
				{
					index_r = index_h;
				}

				if (*(needle + index_n + 1) == '\0')
				{
					return (haystack + index_r);
				}
				else
				{
					break;
				}
			}

		}

	}

	return ('\0');

}
