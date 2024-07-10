#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 * Return: pointer to a newly allocated space in memory
 *         return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int index, index_a = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
	{
		len1++;
	}

	for (index = 0; s2[index] != '\0'; index++)
	{
		len2++;
	}

	arr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < len1; index++, index_a++)
	{
		arr[index_a] = s1[index];
	}

	for (index = 0; index <= len2; index++, index_a++)
	{
		arr[index_a] = s2[index];
	}

	return (arr);
}
