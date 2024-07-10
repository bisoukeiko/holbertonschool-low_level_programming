#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to a newly allocated space in memory
 *         NULL if str = NULL
 *         NULL if insufficient memory was available
 */

char *_strdup(char *str)
{

	char *arr;
	int index;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		len++;
	}


	arr = malloc(sizeof(char) * len + 1);

	if (arr == NULL)
	{
		return (NULL);
	}


	for (index = 0; index <= len; index++)
	{
		arr[index] = str[index];
	}

	return (arr);

}
