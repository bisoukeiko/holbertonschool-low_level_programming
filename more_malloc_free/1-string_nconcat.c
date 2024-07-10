#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string
 * @s2: string for concatenate
 * @n: bytes for concatenate
 * Return: pointer
 *         NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len;
	unsigned int index;
	int index_s = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
	{
		continue;
	}

	str = malloc(sizeof(char) * (len + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < len; index++, index_s++)
	{
		str[index_s] = s1[index];
	}

	for (index = 0; index < n && s2[index] != '\0'; index++, index_s++)
	{
		str[index_s] = s2[index];
	}

	str[index_s] = '\0';


	return (str);

}
