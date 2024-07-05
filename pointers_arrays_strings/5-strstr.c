#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: string to be searched
 * @needle: The set of bytes to be searched for
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{

	int index;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{

		for (index = 0; haystack[index] == needle[index]; index++)
		{
			if (needle[index + 1] == '\0')
			{
				return (haystack);
			}
		}

		haystack++;
	}

	return ('\0');

}
